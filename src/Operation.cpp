#include "..//headers//Operation.h"

using namespace ImageProcessingDsl;
using namespace std;    

Dsl dsl;
extern std::unordered_map<std::string, Image*> imageMap;
extern string operationCode;

cv::Mat performOperation(cv::Mat oldImg, myDslParser::OperationTypeContext *op, myDslParser::ImageManipulationTypeContext *imgOp, string variable) {
    cv::Mat result;
    if(op != nullptr){
        if(op->blurType() != nullptr){
            result = performBlurOperation(oldImg, op->blurType()->getText(), op->blurOptions(), variable);
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
    }
    else if (imgOp->resizeOperation() != nullptr){
        result = performResizeOperation(oldImg, stoi(imgOp->resizeOperation()->width->getText()), stoi(imgOp->resizeOperation()->height->getText()));
    }
    else if (imgOp->rotateOperation() != nullptr){
        result = performRotateOperation(oldImg, stoi(imgOp->rotateOperation()->degrees->getText()));
    }
    return result;
}


cv::Mat performBlurOperation( cv::Mat oldImg, std::string blurType, myDslParser::BlurOptionsContext *opts, string variable) {

    if(blurType == "gaussianBlur"){
        if(opts != nullptr){
            int size1 = stoi(opts->size1->getText());
            int size2 = stoi(opts->size2->getText());
            
            return dsl.applyOperation(oldImg, Blur(GAUSSIAN_BLUR, cv::Size(size1, size2)));
        }
        string instructionCode = "dsl.applyOperation(*" + variable + ", Blur(GAUSSIAN_BLUR));";
        operationCode += instructionCode;

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

cv::Mat performThresholdOperation(cv::Mat oldImg, std::string thresholdType, myDslParser::MaxValueContext *maxVal) {
    
    if(thresholdType == "binary_threshold") {
        if(maxVal != nullptr) {int maxValue = stoi(maxVal->INT()->getText()); return dsl.applyOperation(oldImg, Threshold(cv::THRESH_BINARY, maxValue));}          
        else return dsl.applyOperation(oldImg, Threshold(cv::THRESH_BINARY));
    }
    else if(thresholdType ==  "binary_inv_threshold") {
        if(maxVal != nullptr) {int maxValue = stoi(maxVal->INT()->getText()); return dsl.applyOperation(oldImg, Threshold(cv::THRESH_BINARY, maxValue));}          
        else return dsl.applyOperation(oldImg, Threshold(cv::THRESH_BINARY_INV));
    }   
    else if(thresholdType ==  "otsu_threshold") {
        if(maxVal != nullptr) {int maxValue = stoi(maxVal->INT()->getText()); return dsl.applyOperation(oldImg, Threshold(cv::THRESH_OTSU, maxValue));}          
        else return dsl.applyOperation(oldImg, Threshold(cv::THRESH_OTSU));   
    }   
    else if(thresholdType ==  "otsu_binary_inv_threshold")  {
        if(maxVal != nullptr) {int maxValue = stoi(maxVal->INT()->getText()); return dsl.applyOperation(oldImg, Threshold(cv::THRESH_BINARY_INV | cv::THRESH_OTSU, maxValue));}          
        else return dsl.applyOperation(oldImg, Threshold(cv::THRESH_BINARY_INV | cv::THRESH_OTSU));       
    }

    return dsl.applyOperation(oldImg, Threshold());
}

cv::Mat performCountoursOperation(cv::Mat oldImg) {
    return dsl.applyOperation(oldImg, Countor());
}


cv::Mat evaluateArithmeticOperation(myDslParser::ArithmeticOperationContext *op) {
    cv::Mat result;

    if(op->VARIABLE()){
        std::string varName = op->VARIABLE()->getText();
        return imageMap[varName]->getImage();
    }

    std::vector<myDslParser::ArithmeticOperationContext *> childOps = op->arithmeticOperation();
    

    if(childOps.size() == 1) {return evaluateArithmeticOperation(childOps[0]);}
    
    cv::Mat leftOperand = evaluateArithmeticOperation(childOps[0]);
    cv::Mat rightOperand = evaluateArithmeticOperation(childOps[1]);

    myDslParser::MultOpContext *multOp = op->multOp();
    myDslParser::AddOpContext *addOp = op->addOp();
    myDslParser::SubOpContext *subOp = op->subOp();

    if(multOp != nullptr){
        result = (Image(leftOperand) * Image(rightOperand)).getImage();
    }
    else if(addOp != nullptr){
        result = (Image(leftOperand) + Image(rightOperand)).getImage();
    }
    else if(subOp != nullptr){
        result = (Image(leftOperand) - Image(rightOperand)).getImage();
    }
    return result;
}

cv::Mat performResizeOperation(cv::Mat oldImg, int width, int height){
    return Image(oldImg).resizeImage(width, height).getImage();
}

cv::Mat performRotateOperation(cv::Mat oldImg, int degrees){
    return Image(oldImg).rotateImage(degrees).getImage();
}