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
    try {
        string variableId = ctx->VARIABLE()->getText();

        dslSemantic.undeclaredVariable(variableId);
        dslSemantic.wrongVarType(variableId, DslImg);


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
            string res = dslSemantic.evaluateLoop(operationCtx->loopOperation()->VARIABLE()->getText(), 
                                                operationCtx->loopOperation()->operationType(),
                                                operationCtx->loopOperation()->imageManipulationType(),
                                                operationCtx->loopOperation()->show(), make_tuple(true, variableId));
            operationCode += res;

            int arrayCount = dslSemantic.getArraySize(operationCtx->loopOperation()->VARIABLE()->getText()); 
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
            try{
                string var = variables[i]->getText();
                dslSemantic.undeclaredVariable(var);
                dslSemantic.wrongVarType(var, DslImg);

                oss << var;
                if(i != variables.size() - 1){
                    oss << ", ";
                }
                arraySize++;
            }catch (const std::runtime_error& e) {
                std::cerr << e.what() << std::endl;
                exit(1);
            }
        }
        oss << "};";
        operationCode += oss.str();

        dslSemantic.updateSymbolTable(variableId, std::make_tuple(DslImgArray, arraySize));
    }
    // Acessing an array element
    else if (arrayElementCtx){
        try{
            string arrayId = arrayElementCtx->VARIABLE()->getText();
            int arrayIndex = stoi(arrayElementCtx->INT()->getText());

            if(arrayIndex < 0 || arrayIndex >= dslSemantic.getArraySize(arrayId)){
                    throw std::runtime_error("Semantic Analysis Error: Index out of bounds");
            }

            std::ostringstream oss;
            oss << "Image* " << variableId << " = " << arrayId << "[" << std::to_string(arrayIndex) << "];";
            operationCode += oss.str(); 

            dslSemantic.updateSymbolTable(variableId, std::make_tuple(DslImg, -1));
        }catch (const std::runtime_error& e) {
            std::cerr << e.what() << std::endl;
            exit(1);
        }
    }
}

void MyListener::enterTextRecognitionCommand(myDslParser::TextRecognitionCommandContext * ctx) {
    try{
        string src = ctx->source()->getText();
        string dest = ctx->dest()->getText();

        dslSemantic.undeclaredVariable(src);
        dslSemantic.wrongVarType(src, DslImg);

        if((dslSemantic.getSymbolTable().find(dest) != dslSemantic.getSymbolTable().end())){
            dslSemantic.wrongVarType(dest, DslString);
        }

        std::ostringstream oss;
        oss << "string " << dest << "= textRecognition.execute(" << src << "->getImage());";
        operationCode += oss.str(); 

        dslSemantic.updateSymbolTable(dest, std::make_tuple(DslString, -1));
    }catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
        exit(1);
    }

}


void MyListener::enterPrintTextCommand(myDslParser::PrintTextCommandContext * ctx) {
    try{
        string var = ctx->VARIABLE()->getText();
        
        dslSemantic.undeclaredVariable(var);
        dslSemantic.wrongVarType(var, DslString);
        
        std::ostringstream oss;
        oss << "\n" << "cout << " << var << ";";
        operationCode += oss.str();
    }catch(const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
        exit(1);
    }
}

void MyListener::enterLoopOperation(myDslParser::LoopOperationContext *ctx) {
    string res = dslSemantic.evaluateLoop(ctx->VARIABLE()->getText(), 
                                        ctx->operationType(),
                                        ctx->imageManipulationType(),
                                        ctx->show(), make_tuple(false, ""));
    operationCode += res;
}