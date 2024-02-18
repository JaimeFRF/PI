#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "antlr4-runtime.h"
#include "myDslLexer.h"
#include "myDslParser.h"
#include "../generated/myDslBaseListener.h"
#include "ImageProcessingDsl.h"


using namespace ImageProcessingDsl;
using namespace antlr4;
using namespace std;

std::unordered_map<std::string, Image*> imageMap;
Dsl dsl;

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
        }

        cv::Mat evaluateOperation(myDslParser::OperationContext *ctx) {
            cv::Mat result;
            myDslParser::OperationTypeContext *op = ctx->operationType();

            if (ctx->VARIABLE()) {
                cv::Mat oldImg = imageMap[ctx->VARIABLE()->getText()]->getImage();                

                if(op->blurType() != nullptr){
                    result = performBlurOperation(oldImg, op->blurType()->getText(), op->blurOptions());
                }
                else if(op->getText() == "binarization"){
                    result = performBinarizationOperation(oldImg);
                }

            } else if (ctx->operation()) {
                                
                cv::Mat oldImg = evaluateOperation(ctx->operation());

                if(op->blurType() != nullptr){
                    result = performBlurOperation( oldImg, op->blurType()->getText() , op->blurOptions());
                }
                else if(op->getText() == "binarization"){
                    result = performBinarizationOperation(oldImg);
                }

            } 

            return result;
        }

        cv::Mat performBlurOperation( cv::Mat oldImg, std::string blurType, myDslParser::BlurOptionsContext *opts) {

            if(blurType == "gaussianBlur"){
                if(opts != nullptr){
                    int size1 = stoi(opts->size1->getText());
                    int size2 = stoi(opts->size2->getText());
                    return dsl.applyOperation(oldImg, Blur(GAUSSIAN_BLUR, cv::Size(size1, size2)));
                }
                return dsl.applyOperation(oldImg, Blur(GAUSSIAN_BLUR));
            }else if(blurType == "medianBlur"){
                if(opts != nullptr){
                    int ksize = stoi(opts->ksize->getText());
                    return dsl.applyOperation(oldImg, Blur(MEDIAN_BLUR, ksize));
                } return dsl.applyOperation(oldImg, Blur(MEDIAN_BLUR));
            }else{
                if(opts != nullptr){
                    int ksize = stoi(opts->ksize->getText());
                    int sigma = stoi(opts->sigma->getText());
                    return dsl.applyOperation(oldImg, Blur(BILATERAL_BLUR, ksize, sigma));
                } return dsl.applyOperation(oldImg, Blur(BILATERAL_BLUR));
            }

            return dsl.applyOperation(oldImg, Blur(GAUSSIAN_BLUR));
        }

        cv::Mat performBinarizationOperation(cv::Mat oldImg) {
            return dsl.applyOperation(oldImg, Binarization());
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

       //else if(auto blurCommand = commandCtx->getRuleContext<myDslParser::BlurImageCommandContext>(0)){
            // string newVar = blurCommand->VARIABLE()[0]->getText();
            // Image* oldImg = imageMap[blurCommand->VARIABLE()[1]->getText()];
            // string blurType = blurCommand->blurType()->getText();
            // cv::Mat newImg;

            // if(blurType == "gaussianBlur"){
            //     auto optionsCtx = blurCommand->blurOpts;
            //     if(optionsCtx){
            //         int size1 = stoi(optionsCtx->size1->getText());
            //         int size2 = stoi(optionsCtx->size2->getText());
            //         newImg = dsl.applyOperation(oldImg->getImage(), Blur(GAUSSIAN_BLUR, cv::Size(size1, size2)));
            //     }else{
            //         newImg = dsl.applyOperation(oldImg->getImage(), Blur(GAUSSIAN_BLUR));
            //     }
            // }
            // else if(blurType == "bilateralBlur"){
            //     auto options = blurCommand->blurOpts;
            //     if(options){
            //         int ksize = stoi(options->ksize->getText());
            //         int sigma = stoi(options->sigma->getText());
            //         newImg = dsl.applyOperation(oldImg->getImage(), Blur(BILATERAL_BLUR, ksize, sigma));
            //     }else{
            //         newImg = dsl.applyOperation(oldImg->getImage(), Blur(BILATERAL_BLUR));
            //     }
            // }
            // else if(blurType == "medianBlur"){
            //     auto options = blurCommand->blurOpts;
            //     if(options){
            //         int ksize = stoi(options->ksize->getText());
            //         newImg = dsl.applyOperation(oldImg->getImage(), Blur(MEDIAN_BLUR, ksize));
            //     }else{
            //         newImg = dsl.applyOperation(oldImg->getImage(), Blur(MEDIAN_BLUR));           
            //     }
            // }
            // imageMap[newVar] = new Image(newImg);
        //}



    return 0;
}