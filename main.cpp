#include <iostream>
#include <fstream>          
#include <string>           
#include <vector>           
#include "antlr4-runtime.h" 
#include "myDslLexer.h"     
#include "myDslParser.h"        
#include "../generated/myDslBaseListener.h"
#include "..//headers//ImageProcessingDsl.h"
#include "..//headers//Operation.h"

using namespace ImageProcessingDsl;
using namespace antlr4;
using namespace std;

unordered_map<string, Image*> imageMap;
unordered_map<string, string> textResults;
unordered_map<string, vector<Image*>>  arraysMap;


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

vector<Image*> evaluateLoop(string arrayId, myDslParser::OperationTypeContext *op, myDslParser::ImageManipulationTypeContext *imgOp, myDslParser::ShowContext *showOp){
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
            string variableId = ctx->VARIABLE()->getText();
            myDslParser::OperationContext* operationCtx = ctx->operation();
            myDslParser::ArrayDeclarationContext* arrayDeclarationCtx = ctx->arrayDeclaration();
            myDslParser::ArrayElementContext* arrayElementCtx = ctx->arrayElement();
            if (operationCtx) {
                if (operationCtx->loopOperation()){
                    vector<Image*> res = evaluateLoop(operationCtx->loopOperation()->VARIABLE()->getText(), 
                                                      operationCtx->loopOperation()->operationType(),
                                                      operationCtx->loopOperation()->imageManipulationType(),
                                                      operationCtx->loopOperation()->show());
                    arraysMap[variableId] = res;
                }else{
                    cv::Mat resultOperation = evaluateOperation(operationCtx);
                    if (!resultOperation.empty()) {
                        imageMap[variableId] = new Image(resultOperation);
                    } else {
                        cerr << "Error: Unable to evaluate operation for assignment." << endl;
                    }
                }
            }else if (arrayDeclarationCtx) {
                vector<antlr4::tree::TerminalNode *> variables = arrayDeclarationCtx->VARIABLE();
                vector<Image*> vars;
                for(auto* variable : variables){
                    string var = variable->getText();
                    Image* img = imageMap[var];
                    vars.push_back(img);
                }
                arraysMap[variableId] = vars;
            }else if (arrayElementCtx){
                string arrayId = arrayElementCtx->VARIABLE()->getText();
                int arrayIndex = stoi(arrayElementCtx->INT()->getText());
                cv::Mat res = arraysMap[arrayId][arrayIndex]->getImage();
                imageMap[variableId] = new Image(res);
            }

        };

        void enterTextRecognitionCommand(myDslParser::TextRecognitionCommandContext * ctx) override {
            string src = ctx->source()->getText();
            string dest = ctx->dest()->getText();
            Image* img = imageMap[src];
            TextRecognition textRecognition;
            textResults[dest] = textRecognition.execute(img->getImage());
        }

        void enterPrintTextCommand(myDslParser::PrintTextCommandContext * ctx) override {
            string var = ctx->VARIABLE()->getText();
            TextRecognition textRecognition;
            string test = textResults[var];
            textRecognition.printText(textResults[var]);
         }

         void enterLoopOperation(myDslParser::LoopOperationContext *ctx) override {
            vector<Image*> res = evaluateLoop(ctx->VARIABLE()->getText(), 
                                                ctx->operationType(),
                                                ctx->imageManipulationType(),
                                                ctx->show());
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