
// Generated from myDsl.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "myDslParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by myDslParser.
 */
class  myDslListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterDsl(myDslParser::DslContext *ctx) = 0;
  virtual void exitDsl(myDslParser::DslContext *ctx) = 0;

  virtual void enterCommand(myDslParser::CommandContext *ctx) = 0;
  virtual void exitCommand(myDslParser::CommandContext *ctx) = 0;

  virtual void enterLoadImageCommand(myDslParser::LoadImageCommandContext *ctx) = 0;
  virtual void exitLoadImageCommand(myDslParser::LoadImageCommandContext *ctx) = 0;

  virtual void enterShowImageCommand(myDslParser::ShowImageCommandContext *ctx) = 0;
  virtual void exitShowImageCommand(myDslParser::ShowImageCommandContext *ctx) = 0;

  virtual void enterBlurImageCommand(myDslParser::BlurImageCommandContext *ctx) = 0;
  virtual void exitBlurImageCommand(myDslParser::BlurImageCommandContext *ctx) = 0;

  virtual void enterBlurType(myDslParser::BlurTypeContext *ctx) = 0;
  virtual void exitBlurType(myDslParser::BlurTypeContext *ctx) = 0;

  virtual void enterBlurOptions(myDslParser::BlurOptionsContext *ctx) = 0;
  virtual void exitBlurOptions(myDslParser::BlurOptionsContext *ctx) = 0;

  virtual void enterThresholdImageCommand(myDslParser::ThresholdImageCommandContext *ctx) = 0;
  virtual void exitThresholdImageCommand(myDslParser::ThresholdImageCommandContext *ctx) = 0;

  virtual void enterOptions(myDslParser::OptionsContext *ctx) = 0;
  virtual void exitOptions(myDslParser::OptionsContext *ctx) = 0;


};

