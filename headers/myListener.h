#pragma once

#include <opencv2/opencv.hpp>
#include <vector>
#include "../generated/myDslBaseListener.h"
#include "ImageProcessingDsl.h"
#include "DslSemantic.h"
#include <sstream>
#include <tuple>



class MyListener : public myDslBaseListener {
    public:
        void enterLoadImageCommand(myDslParser::LoadImageCommandContext *ctx) override;
        void enterShowImageCommand(myDslParser::ShowImageCommandContext *ctx) override;
        void enterAssignementCommand(myDslParser::AssignementCommandContext *ctx) override;
        void enterTextRecognitionCommand(myDslParser::TextRecognitionCommandContext * ctx) override;
        void enterPrintTextCommand(myDslParser::PrintTextCommandContext * ctx) override;
        void enterLoopOperation(myDslParser::LoopOperationContext *ctx) override;
};

