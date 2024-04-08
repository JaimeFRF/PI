#pragma once

#include <opencv2/opencv.hpp>
#include <string>
#include "myDslParser.h"        
#include "ImageProcessingDsl.h"
#include <sstream>

std::string performOperation( std::string oldImg, myDslParser::OperationTypeContext *op, myDslParser::ImageManipulationTypeContext *imgOp, std::string variable = "");
std::string performBlurOperation( std::string oldImg, std::string blurType, myDslParser::BlurOptionsContext *opts, std::string variable = "");
std::string performBinarizationOperation(std::string oldImg);
std::string performThresholdOperation(std::string oldImg,  std::string thresholdType, myDslParser::MaxValueContext *maxVal);
std::string performCountoursOperation(std::string oldImg);

std::string performResizeOperation(std::string oldImg, int width, int height);
std::string performRotateOperation(std::string oldImg, int degrees);

