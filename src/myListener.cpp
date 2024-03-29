#include "..//headers//myListener.h"

using namespace std;
using namespace ImageProcessingDsl;


unordered_map<string, Image*> imageMap;
unordered_map<string, string> textResults;
unordered_map<string, vector<Image*>>  arraysMap;
string operationCode = R"(
int main(){
    Dsl dsl;)";

cv::Mat evaluateOperation(myDslParser::OperationContext *ctx) {
    cv::Mat result;
    myDslParser::OperationTypeContext *op = ctx->operationType();
    myDslParser::ImageManipulationTypeContext *imgOp = ctx->imageManipulationType();

    if (ctx->VARIABLE()) {
        cv::Mat oldImg = imageMap[ctx->VARIABLE()->getText()]->getImage();  
        result = performOperation(oldImg, op, imgOp, ctx->VARIABLE()->getText());
    } 
    else if (ctx->operation()) {
        cv::Mat oldImg = evaluateOperation(ctx->operation());
        result = performOperation(oldImg, op, imgOp);
    } 
    else if (ctx->arithmeticOperation()) {
        result = evaluateArithmeticOperation(ctx->arithmeticOperation());
    }else if(ctx->arrayElement()){
        string arrayId = ctx->arrayElement()->VARIABLE()->getText();
        int arrayIndex = stoi(ctx->arrayElement()->INT()->getText());
        cv::Mat oldImg = arraysMap[arrayId][arrayIndex]->getImage();
        result = performOperation(oldImg, op, imgOp);
    }

    return result;
}

std::vector<Image*> evaluateLoop(std::string arrayId, myDslParser::OperationTypeContext *op, myDslParser::ImageManipulationTypeContext *imgOp, myDslParser::ShowContext *showOp){
    vector<Image*> prev = arraysMap[arrayId];
    vector<Image*> res;
    
    if(showOp){
        for(auto* img : prev){
            img->showImage();
        }
    }else{
        for(auto* img : prev){
            cv::Mat result = performOperation(img->getImage(), op, imgOp);
            res.push_back(new Image(result));
        }
    }

    return res;
}

void MyListener::enterLoadImageCommand(myDslParser::LoadImageCommandContext *ctx) {
    string imagePath = ctx->path->getText();  
    string variableId = ctx->VARIABLE()->getText();
    std::string imgPath = imagePath.substr(1, imagePath.size()-2);

    Image* image = new Image(imgPath);
    imageMap[variableId] = image;
    
    string instructionCode = R"(
    Image* image = new Image(")" + imgPath + R"(");
    )";
    operationCode += instructionCode;
}

void MyListener::enterShowImageCommand(myDslParser::ShowImageCommandContext *ctx) {
    string variableId = ctx->VARIABLE()->getText();
    Image* myImg = imageMap[variableId];
    
    myImg->showImage();

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
            vector<Image*> res = evaluateLoop(operationCtx->loopOperation()->VARIABLE()->getText(), 
                                                operationCtx->loopOperation()->operationType(),
                                                operationCtx->loopOperation()->imageManipulationType(),
                                                operationCtx->loopOperation()->show());
            arraysMap[variableId] = res;
        }else{
            string instructionCode = R"(Image* )" + variableId + R"( = )";
            operationCode += instructionCode;
            cv::Mat resultOperation = evaluateOperation(operationCtx);
            if (!resultOperation.empty()) {
                imageMap[variableId] = new Image(resultOperation);
            } else {
                cerr << "Error: Unable to evaluate operation for assignment." << endl;
            }
        }
    } //Declaring an array
    // else if (arrayDeclarationCtx) {
    //     vector<antlr4::tree::TerminalNode *> variables = arrayDeclarationCtx->VARIABLE();
    //     vector<Image*> vars;
    //     for(auto* variable : variables){
    //         string var = variable->getText();
    //         Image* img = imageMap[var];
    //         vars.push_back(img);
    //     }
    //     arraysMap[variableId] = vars;
    // }// Acessing an array element
    // else if (arrayElementCtx){
    //     string arrayId = arrayElementCtx->VARIABLE()->getText();
    //     int arrayIndex = stoi(arrayElementCtx->INT()->getText());
    //     cv::Mat res = arraysMap[arrayId][arrayIndex]->getImage();
    //     imageMap[variableId] = new Image(res);
    // }
}

void MyListener::enterTextRecognitionCommand(myDslParser::TextRecognitionCommandContext * ctx) {
    string src = ctx->source()->getText();
    string dest = ctx->dest()->getText();
    Image* img = imageMap[src];
    TextRecognition textRecognition;
    textResults[dest] = textRecognition.execute(img->getImage());
}


void MyListener::enterPrintTextCommand(myDslParser::PrintTextCommandContext * ctx) {
    string var = ctx->VARIABLE()->getText();
    TextRecognition textRecognition;
    string test = textResults[var];
    textRecognition.printText(textResults[var]);
}

void MyListener::enterLoopOperation(myDslParser::LoopOperationContext *ctx) {
    vector<Image*> res = evaluateLoop(ctx->VARIABLE()->getText(), 
                                        ctx->operationType(),
                                        ctx->imageManipulationType(),
                                        ctx->show());
}