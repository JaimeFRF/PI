
// Generated from myDsl.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "myDslListener.h"


/**
 * This class provides an empty implementation of myDslListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  myDslBaseListener : public myDslListener {
public:

  virtual void enterDsl(myDslParser::DslContext * /*ctx*/) override { }
  virtual void exitDsl(myDslParser::DslContext * /*ctx*/) override { }

  virtual void enterCommand(myDslParser::CommandContext * /*ctx*/) override { }
  virtual void exitCommand(myDslParser::CommandContext * /*ctx*/) override { }

  virtual void enterLoadImageCommand(myDslParser::LoadImageCommandContext * /*ctx*/) override { }
  virtual void exitLoadImageCommand(myDslParser::LoadImageCommandContext * /*ctx*/) override { }

  virtual void enterShowImageCommand(myDslParser::ShowImageCommandContext * /*ctx*/) override { }
  virtual void exitShowImageCommand(myDslParser::ShowImageCommandContext * /*ctx*/) override { }

  virtual void enterTextRecognitionCommand(myDslParser::TextRecognitionCommandContext * /*ctx*/) override { }
  virtual void exitTextRecognitionCommand(myDslParser::TextRecognitionCommandContext * /*ctx*/) override { }

  virtual void enterPrintTextCommand(myDslParser::PrintTextCommandContext * /*ctx*/) override { }
  virtual void exitPrintTextCommand(myDslParser::PrintTextCommandContext * /*ctx*/) override { }

  virtual void enterAssignementCommand(myDslParser::AssignementCommandContext * /*ctx*/) override { }
  virtual void exitAssignementCommand(myDslParser::AssignementCommandContext * /*ctx*/) override { }

  virtual void enterOperation(myDslParser::OperationContext * /*ctx*/) override { }
  virtual void exitOperation(myDslParser::OperationContext * /*ctx*/) override { }

  virtual void enterOperationType(myDslParser::OperationTypeContext * /*ctx*/) override { }
  virtual void exitOperationType(myDslParser::OperationTypeContext * /*ctx*/) override { }

  virtual void enterBlurType(myDslParser::BlurTypeContext * /*ctx*/) override { }
  virtual void exitBlurType(myDslParser::BlurTypeContext * /*ctx*/) override { }

  virtual void enterBlurOptions(myDslParser::BlurOptionsContext * /*ctx*/) override { }
  virtual void exitBlurOptions(myDslParser::BlurOptionsContext * /*ctx*/) override { }

  virtual void enterArithmeticOperation(myDslParser::ArithmeticOperationContext * /*ctx*/) override { }
  virtual void exitArithmeticOperation(myDslParser::ArithmeticOperationContext * /*ctx*/) override { }

  virtual void enterMultOp(myDslParser::MultOpContext * /*ctx*/) override { }
  virtual void exitMultOp(myDslParser::MultOpContext * /*ctx*/) override { }

  virtual void enterAddOp(myDslParser::AddOpContext * /*ctx*/) override { }
  virtual void exitAddOp(myDslParser::AddOpContext * /*ctx*/) override { }

  virtual void enterSubOp(myDslParser::SubOpContext * /*ctx*/) override { }
  virtual void exitSubOp(myDslParser::SubOpContext * /*ctx*/) override { }

  virtual void enterSource(myDslParser::SourceContext * /*ctx*/) override { }
  virtual void exitSource(myDslParser::SourceContext * /*ctx*/) override { }

  virtual void enterDest(myDslParser::DestContext * /*ctx*/) override { }
  virtual void exitDest(myDslParser::DestContext * /*ctx*/) override { }

  virtual void enterImageManipulationType(myDslParser::ImageManipulationTypeContext * /*ctx*/) override { }
  virtual void exitImageManipulationType(myDslParser::ImageManipulationTypeContext * /*ctx*/) override { }

  virtual void enterResizeOperation(myDslParser::ResizeOperationContext * /*ctx*/) override { }
  virtual void exitResizeOperation(myDslParser::ResizeOperationContext * /*ctx*/) override { }

  virtual void enterRotateOperation(myDslParser::RotateOperationContext * /*ctx*/) override { }
  virtual void exitRotateOperation(myDslParser::RotateOperationContext * /*ctx*/) override { }

  virtual void enterArrayDeclaration(myDslParser::ArrayDeclarationContext * /*ctx*/) override { }
  virtual void exitArrayDeclaration(myDslParser::ArrayDeclarationContext * /*ctx*/) override { }

  virtual void enterArrayElement(myDslParser::ArrayElementContext * /*ctx*/) override { }
  virtual void exitArrayElement(myDslParser::ArrayElementContext * /*ctx*/) override { }

  virtual void enterShow(myDslParser::ShowContext * /*ctx*/) override { }
  virtual void exitShow(myDslParser::ShowContext * /*ctx*/) override { }

  virtual void enterLoopOperation(myDslParser::LoopOperationContext * /*ctx*/) override { }
  virtual void exitLoopOperation(myDslParser::LoopOperationContext * /*ctx*/) override { }

  virtual void enterMaxValue(myDslParser::MaxValueContext * /*ctx*/) override { }
  virtual void exitMaxValue(myDslParser::MaxValueContext * /*ctx*/) override { }

  virtual void enterThresholdType(myDslParser::ThresholdTypeContext * /*ctx*/) override { }
  virtual void exitThresholdType(myDslParser::ThresholdTypeContext * /*ctx*/) override { }

  virtual void enterOptions(myDslParser::OptionsContext * /*ctx*/) override { }
  virtual void exitOptions(myDslParser::OptionsContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

