#include "..//headers//myListener.h"

using namespace std;
using namespace ImageProcessingDsl;

DslSemantic dslSemantic;


unordered_map<string, string> textResults;
string operationCode = R"(
TextRecognition textRecognition;
int main(){
    Dsl dsl;)";

void MyListener::enterLoadImageCommand(myDslParser::LoadImageCommandContext *ctx) {
    string imagePath = ctx->path->getText();  
    string variableId = ctx->VARIABLE()->getText();
    std::string imgPath = imagePath.substr(1, imagePath.size()-2);

    
    std::ostringstream oss;
    oss << "Image* " << variableId << "= new Image(\"" << imgPath << "\");"; 
    operationCode += oss.str();

    dslSemantic.updateSymbolTable(variableId, std::make_tuple(DslImg, -1));
}

void MyListener::enterShowImageCommand(myDslParser::ShowImageCommandContext *ctx) {
    string variableId = ctx->VARIABLE()->getText();

    try{
        dslSemantic.undeclaredVariable(variableId);
        dslSemantic.wrongVarType(variableId, DslImg);
    }catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
        exit(1);
    }

    string instructionCode = variableId + R"(->showImage();
    )";
    operationCode += instructionCode;
    
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

            string arrayId = operationCtx->loopOperation()->VARIABLE()->getText();

            try{
                dslSemantic.undeclaredVariable(arrayId);            
            }catch (const std::runtime_error& e) {
                std::cerr << e.what() << std::endl;
                exit(1);
            }

            string res = dslSemantic.evaluateLoop(arrayId, 
                                                operationCtx->loopOperation()->operationType(),
                                                operationCtx->loopOperation()->imageManipulationType(),
                                                operationCtx->loopOperation()->show(), make_tuple(true, variableId));
            operationCode += res;
            int arrayCount = get<1>(dslSemantic.getSymbolTable()[arrayId]); 
            dslSemantic.updateSymbolTable(variableId, std::make_tuple(DslImgArray, arrayCount));

        }else{
            string instructionCode = R"(Image* )" + variableId + R"( = )";
            std::string resultOperation = dslSemantic.evaluateOperation(operationCtx);
            instructionCode += resultOperation + ";";
            operationCode += instructionCode;

            dslSemantic.updateSymbolTable(variableId, std::make_tuple(DslImg, -1));
        }
    } //Declaring an array
    else if (arrayDeclarationCtx) {
        vector<antlr4::tree::TerminalNode *> variables = arrayDeclarationCtx->VARIABLE();
        std::ostringstream oss;
        oss << "vector<Image*> " << variableId << " = {";

        int arraySize = 0;
        for (int i = 0; i < variables.size(); i++) {
            string var = variables[i]->getText();

            try{
                dslSemantic.undeclaredVariable(var);
                dslSemantic.wrongVarType(var, DslImg);
            }catch (const std::runtime_error& e) {
                std::cerr << e.what() << std::endl;
                exit(1);
            }

            oss << var;
            if(i != variables.size() - 1){
                oss << ", ";
            }
            arraySize++;
        }
        oss << "};";
        operationCode += oss.str();

        dslSemantic.updateSymbolTable(variableId, std::make_tuple(DslImgArray, arraySize));
    }
    // Acessing an array element
    else if (arrayElementCtx){
        string arrayId = arrayElementCtx->VARIABLE()->getText();
        int arrayIndex = stoi(arrayElementCtx->INT()->getText());

        try{
            if(arrayIndex < 0 || arrayIndex >= get<1>(dslSemantic.getSymbolTable()[arrayId])){
                    throw std::runtime_error("Semantic Analysis Error: Index out of bounds");
            }
        }catch (const std::runtime_error& e) {
            std::cerr << e.what() << std::endl;
            exit(1);
        }

        std::ostringstream oss;
        oss << "Image* " << variableId << " = " << arrayId << "[" << std::to_string(arrayIndex) << "];";
        operationCode += oss.str(); 

        dslSemantic.updateSymbolTable(variableId, std::make_tuple(DslImg, -1));
    }
}

void MyListener::enterTextRecognitionCommand(myDslParser::TextRecognitionCommandContext * ctx) {
    string src = ctx->source()->getText();
    string dest = ctx->dest()->getText();

    try{
        dslSemantic.undeclaredVariable(src);
        dslSemantic.wrongVarType(src, DslImg);

        if((dslSemantic.getSymbolTable().find(dest) != dslSemantic.getSymbolTable().end())){
            dslSemantic.wrongVarType(dest, DslString);
        }
    }catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
        exit(1);
    }

    std::ostringstream oss;
    oss << "string " << dest << "= textRecognition.execute(" << src << "->getImage());";
    operationCode += oss.str(); 

    dslSemantic.updateSymbolTable(dest, std::make_tuple(DslString, -1));
}


void MyListener::enterPrintTextCommand(myDslParser::PrintTextCommandContext * ctx) {
    string var = ctx->VARIABLE()->getText();
    
    try{
        dslSemantic.undeclaredVariable(var);
        dslSemantic.wrongVarType(var, DslString);
    }catch(const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
        exit(1);
    }
    
    std::ostringstream oss;
    oss << "\n" << "cout << " << var << ";";
    operationCode += oss.str();
}

void MyListener::enterLoopOperation(myDslParser::LoopOperationContext *ctx) {
    string res = dslSemantic.evaluateLoop(ctx->VARIABLE()->getText(), 
                                        ctx->operationType(),
                                        ctx->imageManipulationType(),
                                        ctx->show(), make_tuple(false, ""));
    operationCode += res;
}