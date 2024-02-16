
// Generated from myDsl.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  myDslParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    STRING = 15, INT = 16, FLOAT = 17, WS = 18, VARIABLE = 19
  };

  enum {
    RuleDsl = 0, RuleCommand = 1, RuleLoadImageCommand = 2, RuleShowImageCommand = 3, 
    RuleBlurImageCommand = 4, RuleBlurType = 5, RuleBlurOptions = 6, RuleThresholdImageCommand = 7, 
    RuleOptions = 8
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
  class BlurImageCommandContext;
  class BlurTypeContext;
  class BlurOptionsContext;
  class ThresholdImageCommandContext;
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
    BlurImageCommandContext *blurImageCommand();
    ThresholdImageCommandContext *thresholdImageCommand();

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

  class  BlurImageCommandContext : public antlr4::ParserRuleContext {
  public:
    myDslParser::BlurTypeContext *blur = nullptr;
    myDslParser::BlurOptionsContext *blurOpts = nullptr;
    BlurImageCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> VARIABLE();
    antlr4::tree::TerminalNode* VARIABLE(size_t i);
    BlurTypeContext *blurType();
    BlurOptionsContext *blurOptions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlurImageCommandContext* blurImageCommand();

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

  class  ThresholdImageCommandContext : public antlr4::ParserRuleContext {
  public:
    ThresholdImageCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> VARIABLE();
    antlr4::tree::TerminalNode* VARIABLE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ThresholdImageCommandContext* thresholdImageCommand();

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


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

