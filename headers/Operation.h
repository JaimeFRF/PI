#pragma once

#include <opencv2/opencv.hpp>
#include <string>
#include "myDslParser.h"        
#include "ImageProcessingDsl.h"

cv::Mat performOperation(cv::Mat oldImg, myDslParser::OperationTypeContext *op, myDslParser::ImageManipulationTypeContext *imgOp);
cv::Mat performBlurOperation( cv::Mat oldImg, std::string blurType, myDslParser::BlurOptionsContext *opts);
cv::Mat performBinarizationOperation(cv::Mat oldImg);
cv::Mat performThresholdOperation(cv::Mat oldImg, std::string thresholdType, myDslParser::MaxValueContext *maxVal);
cv::Mat performCountoursOperation(cv::Mat oldImg);

cv::Mat evaluateArithmeticOperation(myDslParser::ArithmeticOperationContext *op);

cv::Mat performResizeOperation(cv::Mat oldImg, int width, int height);
cv::Mat performRotateOperation(cv::Mat oldImg, int degrees);

