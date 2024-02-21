#include <iostream>
#include <fstream>          
#include <string>           
#include <vector>           
#include "antlr4-runtime.h" 
#include "myDslLexer.h"     
#include "myDslParser.h"        
#include "../generated/myDslBaseListener.h"
#include "ImageProcessingDsl.h"
#include "Operation.h"

using namespace ImageProcessingDsl;
using namespace antlr4;
using namespace std;

std::unordered_map<std::string, Image*> imageMap;
std::unordered_map<std::string, std::string> textResults;


cv::Mat evaluateOperation(myDslParser::OperationContext *ctx) {
    cv::Mat result;
    myDslParser::OperationTypeContext *op = ctx->operationType();
    myDslParser::ImageManipulationTypeContext *imgOp = ctx->imageManipulationType();

    if (ctx->VARIABLE()) {
        cv::Mat oldImg = imageMap[ctx->VARIABLE()->getText()]->getImage();  
        result = performOperation(oldImg, op, imgOp);
    } 
    else if (ctx->operation()) {
        cv::Mat oldImg = evaluateOperation(ctx->operation());
        result = performOperation(oldImg, op, imgOp);
    } 
    else if (ctx->arithmeticOperation()) {
        result = evaluateArithmeticOperation(ctx->arithmeticOperation());
    };

    return result;
}


class MyListener : public myDslBaseListener {
    public:
        void enterLoadImageCommand(myDslParser::LoadImageCommandContext *ctx) override {
            string imagePath = ctx->path->getText();  
            string variableId = ctx->VARIABLE()->getText();
            Image* image = new Image(imagePath.substr(1, imagePath.size()-2));
            imageMap[variableId] = image;
        };

        void enterShowImageCommand(myDslParser::ShowImageCommandContext *ctx) override { 
            string variableId = ctx->VARIABLE()->getText();
            Image* myImg = imageMap[variableId];
            myImg->showImage();
        };

        void enterAssignementCommand(myDslParser::AssignementCommandContext *ctx) override {
            std::string variableId = ctx->VARIABLE()->getText();
            myDslParser::OperationContext* operationCtx = ctx->operation();
            if (operationCtx) {
                cv::Mat resultOperation = evaluateOperation(operationCtx);
                if (!resultOperation.empty()) {
                    imageMap[variableId] = new Image(resultOperation);
                } else {
                    std::cerr << "Error: Unable to evaluate operation for assignment." << std::endl;
                }
            } else {
                std::cerr << "Error: Missing operation for assignment." << std::endl;
            }
        };

        void enterTextRecognitionCommand(myDslParser::TextRecognitionCommandContext * ctx) override {
            std::string src = ctx->source()->getText();
            std::string dest = ctx->dest()->getText();
            Image* img = imageMap[src];
            TextRecognition textRecognition;
            textResults[dest] = textRecognition.execute(img->getImage());
        }

        void enterPrintTextCommand(myDslParser::PrintTextCommandContext * ctx) override {
            std::string var = ctx->VARIABLE()->getText();
            TextRecognition textRecognition;
            std::string test = textResults[var];
            textRecognition.printText(textResults[var]);
         }
};



int main(){

    Dsl dsl;

    ifstream inputFile ("input.txt");
    ANTLRInputStream input(inputFile);
    
    myDslLexer lexer(&input);
    CommonTokenStream tokens(&lexer);   

    myDslParser parser(&tokens);
    myDslParser::DslContext* tree = parser.dsl();

    MyListener listener;
    antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);


    return 0;
}