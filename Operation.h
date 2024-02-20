#pragma once

#include <opencv2/opencv.hpp>
#include <string>
#include "myDslParser.h"        
#include "ImageProcessingDsl.h"


cv::Mat performBlurOperation( cv::Mat oldImg, std::string blurType, myDslParser::BlurOptionsContext *opts);
cv::Mat performBinarizationOperation(cv::Mat oldImg);
cv::Mat performThresholdOperation(cv::Mat oldImg, std::string thresholdType, myDslParser::MaxValueContext *maxVal);
cv::Mat performCountoursOperation(cv::Mat oldImg);
cv::Mat evaluateArithmeticOperation(myDslParser::ArithmeticOperationContext *op);

