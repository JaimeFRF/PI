
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

  virtual void enterAssignementCommand(myDslParser::AssignementCommandContext *ctx) = 0;
  virtual void exitAssignementCommand(myDslParser::AssignementCommandContext *ctx) = 0;

  virtual void enterOperation(myDslParser::OperationContext *ctx) = 0;
  virtual void exitOperation(myDslParser::OperationContext *ctx) = 0;

  virtual void enterOperationType(myDslParser::OperationTypeContext *ctx) = 0;
  virtual void exitOperationType(myDslParser::OperationTypeContext *ctx) = 0;

  virtual void enterBlurType(myDslParser::BlurTypeContext *ctx) = 0;
  virtual void exitBlurType(myDslParser::BlurTypeContext *ctx) = 0;

  virtual void enterBlurOptions(myDslParser::BlurOptionsContext *ctx) = 0;
  virtual void exitBlurOptions(myDslParser::BlurOptionsContext *ctx) = 0;

  virtual void enterArithmeticOperation(myDslParser::ArithmeticOperationContext *ctx) = 0;
  virtual void exitArithmeticOperation(myDslParser::ArithmeticOperationContext *ctx) = 0;

  virtual void enterMultOp(myDslParser::MultOpContext *ctx) = 0;
  virtual void exitMultOp(myDslParser::MultOpContext *ctx) = 0;

  virtual void enterAddOp(myDslParser::AddOpContext *ctx) = 0;
  virtual void exitAddOp(myDslParser::AddOpContext *ctx) = 0;

  virtual void enterSubOp(myDslParser::SubOpContext *ctx) = 0;
  virtual void exitSubOp(myDslParser::SubOpContext *ctx) = 0;

  virtual void enterMaxValue(myDslParser::MaxValueContext *ctx) = 0;
  virtual void exitMaxValue(myDslParser::MaxValueContext *ctx) = 0;

  virtual void enterThresholdType(myDslParser::ThresholdTypeContext *ctx) = 0;
  virtual void exitThresholdType(myDslParser::ThresholdTypeContext *ctx) = 0;

  virtual void enterOptions(myDslParser::OptionsContext *ctx) = 0;
  virtual void exitOptions(myDslParser::OptionsContext *ctx) = 0;


};

