#include "..//headers//myListener.h"

using namespace std;
using namespace ImageProcessingDsl;

enum dsl_type {DslImg, DslString, DslImgArray};
unordered_map<string, dsl_type> symbolTable;

unordered_map<string, string> textResults;
string operationCode = R"(
TextRecognition textRecognition;
int main(){
    Dsl dsl;)";

void undeclaredVariable(string varId){
    if(symbolTable.find(varId) == symbolTable.end()){
        throw std::runtime_error("Semantic Analysis Error: Variable " + varId + " not found in symbol table");
    }
}

void wrongVarType(string varId, dsl_type desiredType){
    dsl_type curr_type = symbolTable[varId];
  
    if(curr_type != desiredType){
        throw std::runtime_error("Semantic Analysis Error: Wrong types");
    }
}

std::string evaluateOperation(myDslParser::OperationContext *ctx) {
    string result = "";
    myDslParser::OperationTypeContext *op = ctx->operationType();
    myDslParser::ImageManipulationTypeContext *imgOp = ctx->imageManipulationType();

    if (ctx->VARIABLE()) {
        try{
            string variable = ctx->VARIABLE()->getText();

            undeclaredVariable(variable);
            wrongVarType(variable, DslImg);
            
            result = performOperation(variable, op, imgOp, variable);
            return result;
        }catch(const std::runtime_error& e){
            std::cerr << e.what() << std::endl;
            exit(1);
        }
    } 
    else if (ctx->operation()) {
        string oldOp = evaluateOperation(ctx->operation());
        result = performOperation(oldOp, op, imgOp, oldOp);
        return result;
    }
    else if(ctx->arrayElement()){
        string variable = ctx->arrayElement()->VARIABLE()->getText();
        std::ostringstream oss;
        oss << variable << "[" << ctx->arrayElement()->INT()->getText() << "]";
        result = oss.str();

        string result_final = performOperation(result, op, imgOp, result);
        return result_final;
    }
    return result;
}

std::string evaluateLoop(std::string arrayId, myDslParser::OperationTypeContext *op, myDslParser::ImageManipulationTypeContext *imgOp, myDslParser::ShowContext *showOp, std::tuple<bool, std::string> fromAssignment){
    std::ostringstream oss;
    oss << "for(auto* img : " << arrayId << "){";    

    if(showOp){
        oss << "img->showImage();";
    }else{
        string result = performOperation("img", op, imgOp, "img");
        if(get<0>(fromAssignment)){
            oss << get<1>(fromAssignment) << ".push_back(" << result << ");";
        }
        oss << result << ";";
    }
    oss << "}";

    return oss.str();
}

void MyListener::enterLoadImageCommand(myDslParser::LoadImageCommandContext *ctx) {
    string imagePath = ctx->path->getText();  
    string variableId = ctx->VARIABLE()->getText();
    std::string imgPath = imagePath.substr(1, imagePath.size()-2);

    
    std::ostringstream oss;
    oss << "Image* " << variableId << "= new Image(\"" << imgPath << "\");"; 
    operationCode += oss.str();

    symbolTable[variableId] = DslImg;
}

void MyListener::enterShowImageCommand(myDslParser::ShowImageCommandContext *ctx) {
    try {
        string variableId = ctx->VARIABLE()->getText();

        undeclaredVariable(variableId);
        wrongVarType(variableId, DslImg);

        string instructionCode = variableId + R"(->showImage();
        )";
        operationCode += instructionCode;
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
        exit(1);
    }
}

void MyListener::enterAssignementCommand(myDslParser::AssignementCommandContext *ctx) {
    string variableId = ctx->VARIABLE()->getText();
    myDslParser::OperationContext* operationCtx = ctx->operation();
    myDslParser::ArrayDeclarationContext* arrayDeclarationCtx = ctx->arrayDeclaration();
    myDslParser::ArrayElementContext* arrayElementCtx = ctx->arrayElement();
    // Performing an operation 
    if (operationCtx) {
        if (operationCtx->loopOperation()){
            std::ostringstream oss;
            oss << "vector<Image*> " << variableId << ";";
            operationCode += oss.str();
            string res = evaluateLoop(operationCtx->loopOperation()->VARIABLE()->getText(), 
                                                operationCtx->loopOperation()->operationType(),
                                                operationCtx->loopOperation()->imageManipulationType(),
                                                operationCtx->loopOperation()->show(), make_tuple(true, variableId));
            operationCode += res;

            symbolTable[variableId] = DslImgArray;
        }else{
            string instructionCode = R"(Image* )" + variableId + R"( = )";
            std::string resultOperation = evaluateOperation(operationCtx);
            instructionCode += resultOperation + ";";
            operationCode += instructionCode;

            symbolTable[variableId] = DslImg;
        }
    } //Declaring an array
    else if (arrayDeclarationCtx) {
        vector<antlr4::tree::TerminalNode *> variables = arrayDeclarationCtx->VARIABLE();
        std::ostringstream oss;
        oss << "vector<Image*> " << variableId << " = {";

        for (int i = 0; i < variables.size(); i++) {
            string var = variables[i]->getText();
            oss << var;
            if(i != variables.size() - 1){
                oss << ", ";
            }
        }
        oss << "};";
        operationCode += oss.str();

        symbolTable[variableId] = DslImgArray;
    }
    // Acessing an array element
    else if (arrayElementCtx){
        string arrayId = arrayElementCtx->VARIABLE()->getText();
        int arrayIndex = stoi(arrayElementCtx->INT()->getText());

        std::ostringstream oss;
        oss << "Image* " << variableId << " = " << arrayId << "[" << std::to_string(arrayIndex) << "];";
        operationCode += oss.str(); 

        symbolTable[variableId] = DslImg;
    }
}

void MyListener::enterTextRecognitionCommand(myDslParser::TextRecognitionCommandContext * ctx) {
    try{
        string src = ctx->source()->getText();
        string dest = ctx->dest()->getText();

        undeclaredVariable(src);
        wrongVarType(src, DslImg);

        if((symbolTable.find(dest) != symbolTable.end())){
            wrongVarType(dest, DslString);
        }

        std::ostringstream oss;
        oss << "string " << dest << "= textRecognition.execute(" << src << "->getImage());";
        operationCode += oss.str(); 

        symbolTable[dest] = DslString;
    }catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
        exit(1);
    }

}


void MyListener::enterPrintTextCommand(myDslParser::PrintTextCommandContext * ctx) {
    try{
        string var = ctx->VARIABLE()->getText();
        
        undeclaredVariable(var);
        wrongVarType(var, DslString);
        
        std::ostringstream oss;
        oss << "\n" << "cout << " << var << ";";
        operationCode += oss.str();
    }catch(const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
        exit(1);
    }
}

void MyListener::enterLoopOperation(myDslParser::LoopOperationContext *ctx) {
    string res = evaluateLoop(ctx->VARIABLE()->getText(), 
                                        ctx->operationType(),
                                        ctx->imageManipulationType(),
                                        ctx->show(), make_tuple(false, ""));
    operationCode += res;
}