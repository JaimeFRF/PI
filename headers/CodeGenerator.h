#pragma once

#include <opencv2/opencv.hpp>
#include <string>
#include "myDslParser.h"        
#include "ImageProcessingDsl.h"
#include <sstream>

class CodeGenerator{
    private:
        static std::string performBlurOperation( std::string oldImg, std::string blurType, myDslParser::BlurOptionsContext *opts, std::string variable = "");
        static std::string performBinarizationOperation(std::string oldImg);
        static std::string performThresholdOperation(std::string oldImg,  std::string thresholdType, myDslParser::MaxValueContext *maxVal);
        static std::string performCountoursOperation(std::string oldImg);
        static std::string performResizeOperation(std::string oldImg, int width, int height);
        static std::string performRotateOperation(std::string oldImg, int degrees);
    public:
        static std::string performOperation( std::string oldImg, myDslParser::OperationTypeContext *op, myDslParser::ImageManipulationTypeContext *imgOp, std::string variable = "");
};



