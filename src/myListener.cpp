#include "..//headers//myListener.h"

using namespace std;
using namespace ImageProcessingDsl;


unordered_map<string, Image*> imageMap;
unordered_map<string, string> textResults;
unordered_map<string, vector<Image*>>  arraysMap;
string operationCode = R"(
TextRecognition textRecognition;
int main(){
    Dsl dsl;)";

std::string evaluateOperation(myDslParser::OperationContext *ctx) {
    string result = "";
    myDslParser::OperationTypeContext *op = ctx->operationType();
    myDslParser::ImageManipulationTypeContext *imgOp = ctx->imageManipulationType();

    if (ctx->VARIABLE()) {
        string variable = ctx->VARIABLE()->getText();
        result = performOperation(variable, op, imgOp, variable);
        return result;
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
    vector<Image*> prev = arraysMap[arrayId];

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

    Image* image = new Image(imgPath);
    imageMap[variableId] = image;
    
    std::ostringstream oss;
    oss << "Image* " << variableId << "= new Image(\"" << imgPath << "\");"; 
    operationCode += oss.str();
}

void MyListener::enterShowImageCommand(myDslParser::ShowImageCommandContext *ctx) {
    string variableId = ctx->VARIABLE()->getText();
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
            string res = evaluateLoop(operationCtx->loopOperation()->VARIABLE()->getText(), 
                                                operationCtx->loopOperation()->operationType(),
                                                operationCtx->loopOperation()->imageManipulationType(),
                                                operationCtx->loopOperation()->show(), make_tuple(true, variableId));
            operationCode += res;
        }else{
            string instructionCode = R"(Image* )" + variableId + R"( = )";
            std::string resultOperation = evaluateOperation(operationCtx);
            instructionCode += resultOperation + ";";
            operationCode += instructionCode;
        }
    } //Declaring an array
    else if (arrayDeclarationCtx) {
        vector<antlr4::tree::TerminalNode *> variables = arrayDeclarationCtx->VARIABLE();
        vector<Image*> vars;
        std::ostringstream oss;
        oss << "vector<Image*> " << variableId << " = {";

        for (int i = 0; i < variables.size(); i++) {
            string var = variables[i]->getText();
            Image* img = imageMap[var];
            vars.push_back(img);
            oss << var;
            if(i != variables.size() - 1){
                oss << ", ";
            }
        }
        arraysMap[variableId] = vars;
        oss << "};";
        operationCode += oss.str();
    }
    // Acessing an array element
    else if (arrayElementCtx){
        string arrayId = arrayElementCtx->VARIABLE()->getText();
        int arrayIndex = stoi(arrayElementCtx->INT()->getText());

        std::ostringstream oss;
        oss << "Image* " << variableId << " = " << arrayId << "[" << std::to_string(arrayIndex) << "];";
        operationCode += oss.str(); 
    }
}

void MyListener::enterTextRecognitionCommand(myDslParser::TextRecognitionCommandContext * ctx) {
    string src = ctx->source()->getText();
    string dest = ctx->dest()->getText();
    std::ostringstream oss;
    oss << "string " << dest << "= textRecognition.execute(" << src << "->getImage());";
    operationCode += oss.str(); 
}


void MyListener::enterPrintTextCommand(myDslParser::PrintTextCommandContext * ctx) {
    string var = ctx->VARIABLE()->getText();
    std::ostringstream oss;
    oss << "\n" << "cout << " << var << ";";
    operationCode += oss.str();
}

void MyListener::enterLoopOperation(myDslParser::LoopOperationContext *ctx) {
    string res = evaluateLoop(ctx->VARIABLE()->getText(), 
                                        ctx->operationType(),
                                        ctx->imageManipulationType(),
                                        ctx->show(), make_tuple(false, ""));
    operationCode += res;
}