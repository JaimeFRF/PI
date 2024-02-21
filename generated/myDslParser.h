
// Generated from myDsl.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  myDslParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, STRING = 31, INT = 32, 
    FLOAT = 33, WS = 34, VARIABLE = 35
  };

  enum {
    RuleDsl = 0, RuleCommand = 1, RuleLoadImageCommand = 2, RuleShowImageCommand = 3, 
    RuleTextRecognitionCommand = 4, RulePrintTextCommand = 5, RuleAssignementCommand = 6, 
    RuleOperation = 7, RuleOperationType = 8, RuleBlurType = 9, RuleBlurOptions = 10, 
    RuleArithmeticOperation = 11, RuleMultOp = 12, RuleAddOp = 13, RuleSubOp = 14, 
    RuleSource = 15, RuleDest = 16, RuleImageManipulationType = 17, RuleResizeOperation = 18, 
    RuleRotateOperation = 19, RuleMaxValue = 20, RuleThresholdType = 21, 
    RuleOptions = 22
  };

  explicit myDslParser(antlr4::TokenStream *input);

  myDslParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~myDslParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class DslContext;
  class CommandContext;
  class LoadImageCommandContext;
  class ShowImageCommandContext;
  class TextRecognitionCommandContext;
  class PrintTextCommandContext;
  class AssignementCommandContext;
  class OperationContext;
  class OperationTypeContext;
  class BlurTypeContext;
  class BlurOptionsContext;
  class ArithmeticOperationContext;
  class MultOpContext;
  class AddOpContext;
  class SubOpContext;
  class SourceContext;
  class DestContext;
  class ImageManipulationTypeContext;
  class ResizeOperationContext;
  class RotateOperationContext;
  class MaxValueContext;
  class ThresholdTypeContext;
  class OptionsContext; 

  class  DslContext : public antlr4::ParserRuleContext {
  public:
    DslContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<CommandContext *> command();
    CommandContext* command(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DslContext* dsl();

  class  CommandContext : public antlr4::ParserRuleContext {
  public:
    CommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadImageCommandContext *loadImageCommand();
    ShowImageCommandContext *showImageCommand();
    AssignementCommandContext *assignementCommand();
    TextRecognitionCommandContext *textRecognitionCommand();
    PrintTextCommandContext *printTextCommand();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CommandContext* command();

  class  LoadImageCommandContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *path = nullptr;
    LoadImageCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VARIABLE();
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadImageCommandContext* loadImageCommand();

  class  ShowImageCommandContext : public antlr4::ParserRuleContext {
  public:
    ShowImageCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VARIABLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ShowImageCommandContext* showImageCommand();

  class  TextRecognitionCommandContext : public antlr4::ParserRuleContext {
  public:
    TextRecognitionCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SourceContext *source();
    DestContext *dest();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TextRecognitionCommandContext* textRecognitionCommand();

  class  PrintTextCommandContext : public antlr4::ParserRuleContext {
  public:
    PrintTextCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VARIABLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrintTextCommandContext* printTextCommand();

  class  AssignementCommandContext : public antlr4::ParserRuleContext {
  public:
    AssignementCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VARIABLE();
    OperationContext *operation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignementCommandContext* assignementCommand();

  class  OperationContext : public antlr4::ParserRuleContext {
  public:
    OperationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OperationTypeContext *operationType();
    ImageManipulationTypeContext *imageManipulationType();
    antlr4::tree::TerminalNode *VARIABLE();
    OperationContext *operation();
    ArithmeticOperationContext *arithmeticOperation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OperationContext* operation();

  class  OperationTypeContext : public antlr4::ParserRuleContext {
  public:
    myDslParser::BlurOptionsContext *blurOpts = nullptr;
    myDslParser::MaxValueContext *thresholdOpts = nullptr;
    OperationTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlurTypeContext *blurType();
    BlurOptionsContext *blurOptions();
    ThresholdTypeContext *thresholdType();
    MaxValueContext *maxValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OperationTypeContext* operationType();

  class  BlurTypeContext : public antlr4::ParserRuleContext {
  public:
    BlurTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlurTypeContext* blurType();

  class  BlurOptionsContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *size1 = nullptr;
    antlr4::Token *size2 = nullptr;
    antlr4::Token *ksize = nullptr;
    antlr4::Token *sigma = nullptr;
    BlurOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlurOptionsContext* blurOptions();

  class  ArithmeticOperationContext : public antlr4::ParserRuleContext {
  public:
    ArithmeticOperationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArithmeticOperationContext *> arithmeticOperation();
    ArithmeticOperationContext* arithmeticOperation(size_t i);
    antlr4::tree::TerminalNode *VARIABLE();
    MultOpContext *multOp();
    AddOpContext *addOp();
    SubOpContext *subOp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArithmeticOperationContext* arithmeticOperation();
  ArithmeticOperationContext* arithmeticOperation(int precedence);
  class  MultOpContext : public antlr4::ParserRuleContext {
  public:
    MultOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MultOpContext* multOp();

  class  AddOpContext : public antlr4::ParserRuleContext {
  public:
    AddOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AddOpContext* addOp();

  class  SubOpContext : public antlr4::ParserRuleContext {
  public:
    SubOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubOpContext* subOp();

  class  SourceContext : public antlr4::ParserRuleContext {
  public:
    SourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VARIABLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SourceContext* source();

  class  DestContext : public antlr4::ParserRuleContext {
  public:
    DestContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VARIABLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DestContext* dest();

  class  ImageManipulationTypeContext : public antlr4::ParserRuleContext {
  public:
    ImageManipulationTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ResizeOperationContext *resizeOperation();
    RotateOperationContext *rotateOperation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImageManipulationTypeContext* imageManipulationType();

  class  ResizeOperationContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *width = nullptr;
    antlr4::Token *height = nullptr;
    ResizeOperationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ResizeOperationContext* resizeOperation();

  class  RotateOperationContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *degrees = nullptr;
    RotateOperationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RotateOperationContext* rotateOperation();

  class  MaxValueContext : public antlr4::ParserRuleContext {
  public:
    MaxValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MaxValueContext* maxValue();

  class  ThresholdTypeContext : public antlr4::ParserRuleContext {
  public:
    ThresholdTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ThresholdTypeContext* thresholdType();

  class  OptionsContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *size = nullptr;
    antlr4::Token *sigma = nullptr;
    OptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *FLOAT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OptionsContext* options();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool arithmeticOperationSempred(ArithmeticOperationContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

