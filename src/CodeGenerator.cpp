#include "..//headers//CodeGenerator.h"

using namespace ImageProcessingDsl;
using namespace std;    

Dsl dsl;

string CodeGenerator::performOperation(string oldImg, myDslParser::OperationTypeContext *op, myDslParser::ImageManipulationTypeContext *imgOp, string variable) {
    string result;
    if(op != nullptr){
        if(op->blurType() != nullptr){
            result = CodeGenerator::performBlurOperation(oldImg, op->blurType()->getText(), op->blurOptions(), variable);
        }
        else if(op->getText() == "binarization"){
            result = CodeGenerator::performBinarizationOperation(oldImg);
        }
        else if(op->thresholdType() != nullptr){
            result = CodeGenerator::performThresholdOperation( oldImg, op->thresholdType()->getText(), op->maxValue());
        }
        else if (op->getText() == "countors"){
            result = CodeGenerator::performCountoursOperation(oldImg);
        }
    }
    else if (imgOp->resizeOperation() != nullptr){
        result = CodeGenerator::performResizeOperation(oldImg, stoi(imgOp->resizeOperation()->width->getText()), stoi(imgOp->resizeOperation()->height->getText()));
    }
    else if (imgOp->rotateOperation() != nullptr){
        result = CodeGenerator::performRotateOperation(oldImg, stoi(imgOp->rotateOperation()->degrees->getText()));
    }
    return result;
}


string CodeGenerator::performBlurOperation( string oldImg, std::string blurType, myDslParser::BlurOptionsContext *opts, string variable) {

    if(blurType == "gaussianBlur"){
        int size1, size2;
        if(opts != nullptr){ size1 = stoi(opts->size1->getText()); size2 = stoi(opts->size2->getText());}
        else{size1 = 5; size2 = 5;}
        std::ostringstream oss;
        oss << "dsl.applyOperation(*" << oldImg << ", Blur(GAUSSIAN_BLUR, cv::Size(" << size1 << ", " << size2 << ")))";
        return oss.str();
    }else if(blurType == "medianBlur"){
        int ksize;
        if(opts != nullptr){ ksize = stoi(opts->ksize->getText());}
        else{ ksize = 5;}
        std::ostringstream oss;
        oss << "dsl.applyOperation(*" << oldImg << ", Blur(MEDIAN_BLUR, " << ksize << "))";
        return oss.str();
    } 
    return "";
}

string CodeGenerator::performBinarizationOperation(string oldImg) {
    std::ostringstream oss;
    oss <<  "dsl.applyOperation(*" << oldImg <<  ", Binarization())";
    return oss.str();
}

string CodeGenerator::performThresholdOperation( string oldImg,string thresholdType, myDslParser::MaxValueContext *maxVal) {
    
    if(thresholdType == "binary_inv_threshold") {
        std::ostringstream oss;
        if(maxVal != nullptr) {
            int maxValue = stoi(maxVal->INT()->getText());
            oss << "dsl.applyOperation(*" << oldImg << ", Threshold(cv::THRESH_BINARY_INV , " << maxValue << "))"; 
            return oss.str();
        }          
        else {
            oss << "dsl.applyOperation(*" << oldImg << ", Threshold(cv::THRESH_BINARY_INV ))";
            return oss.str();
        }
    }
    else if(thresholdType ==  "binary_threshold") {
        std::ostringstream oss;
        if(maxVal != nullptr) {
            int maxValue = stoi(maxVal->INT()->getText()); 
            oss << "dsl.applyOperation(*" << oldImg << ", Threshold(cv::THRESH_BINARY , " << maxValue << "))"; 
            return oss.str();
        }          
        else{
            oss << "dsl.applyOperation(*" << oldImg << ", Threshold(cv::THRESH_BINARY ))";
            return oss.str();
        } 
    }   
    else if(thresholdType ==  "otsu_threshold") {
        std::ostringstream oss;
        if(maxVal != nullptr) {
            int maxValue = stoi(maxVal->INT()->getText()); 
            oss << "dsl.applyOperation(*" << oldImg << ", Threshold(cv::THRESH_OTSU , " << maxValue << "))"; 
            return oss.str();
        }          
        else{
            oss << "dsl.applyOperation(*" << oldImg << ", Threshold(cv::THRESH_OTSU ))";
            return oss.str();
        } 
    }   
    else if(thresholdType ==  "otsu_binary_inv_threshold")  {
        std::ostringstream oss;
        if(maxVal != nullptr) {
            int maxValue = stoi(maxVal->INT()->getText()); 
            oss << "dsl.applyOperation(*" << oldImg << ", Threshold(cv::THRESH_OTSU | cv::THRESH_BINARY_INV, " << maxValue << "))"; 
            return oss.str();
        }          
        else{
            oss << "dsl.applyOperation(*" << oldImg << ", Threshold(cv::THRESH_OTSU | cv::THRESH_BINARY_INV))";
            return oss.str();
        }  
    }

    return "";
}

string CodeGenerator::performCountoursOperation(string oldImg){
    std::ostringstream oss;
    oss << "dsl.applyOperation(*" << oldImg << ", Countor())";
    return oss.str();
}

string CodeGenerator::performResizeOperation(string oldImg, int width, int height){
    std::ostringstream oss;
    oss << oldImg << "->resizeImage(" << width << ", " << height << ")";
    return oss.str();
}

string CodeGenerator::performRotateOperation(string oldImg, int degrees){
    std::ostringstream oss;
    oss << oldImg << "->rotateImage(" << degrees << ")";
    return oss.str();
}


