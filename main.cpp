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

 cv::Mat evaluateOperation(myDslParser::OperationContext *ctx) {
    cv::Mat result;
    myDslParser::OperationTypeContext *op = ctx->operationType();

    if (ctx->VARIABLE()) {
        cv::Mat oldImg = imageMap[ctx->VARIABLE()->getText()]->getImage();                

        if(op->blurType() != nullptr){
            result = performBlurOperation(oldImg, op->blurType()->getText(), op->blurOptions());
        }
        else if(op->thresholdType() != nullptr){
            result = performThresholdOperation(oldImg, op->thresholdType()->getText(), op->maxValue());
        }
        else if(op->getText() == "binarization"){
            result = performBinarizationOperation(oldImg);
        }
        else if (op->getText() == "countors"){
            result = performCountoursOperation(oldImg);
        }

    } else if (ctx->operation()) {
                        
        cv::Mat oldImg = evaluateOperation(ctx->operation());

        if(op->blurType() != nullptr){
            result = performBlurOperation( oldImg, op->blurType()->getText() , op->blurOptions());
        }
        else if(op->thresholdType() != nullptr){
            result = performThresholdOperation(oldImg, op->thresholdType()->getText(),op->maxValue());
        }                
        else if(op->getText() == "binarization"){
            result = performBinarizationOperation(oldImg);
        }
        else if (op->getText() == "countors"){
            result = performCountoursOperation(oldImg);
        }
    } else if (ctx->arithmeticOperation()) {
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