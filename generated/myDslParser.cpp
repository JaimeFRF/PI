
// Generated from myDsl.g4 by ANTLR 4.13.1


#include "myDslListener.h"

#include "myDslParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct MyDslParserStaticData final {
  MyDslParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MyDslParserStaticData(const MyDslParserStaticData&) = delete;
  MyDslParserStaticData(MyDslParserStaticData&&) = delete;
  MyDslParserStaticData& operator=(const MyDslParserStaticData&) = delete;
  MyDslParserStaticData& operator=(MyDslParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag mydslParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
MyDslParserStaticData *mydslParserStaticData = nullptr;

void mydslParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (mydslParserStaticData != nullptr) {
    return;
  }
#else
  assert(mydslParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<MyDslParserStaticData>(
    std::vector<std::string>{
      "dsl", "command", "loadImageCommand", "showImageCommand", "blurImageCommand", 
      "blurType", "blurOptions", "thresholdImageCommand", "options"
    },
    std::vector<std::string>{
      "", "'load'", "'from'", "';'", "'show'", "'='", "'on'", "'gaussianBlur'", 
      "'bilateralBlur'", "'medianBlur'", "'with size'", "'('", "','", "')'", 
      "'threshold'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "STRING", 
      "INT", "FLOAT", "WS", "VARIABLE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,19,87,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,7,
  	7,7,2,8,7,8,1,0,5,0,20,8,0,10,0,12,0,23,9,0,1,0,1,0,1,1,1,1,1,1,1,1,3,
  	1,31,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,3,4,
  	47,8,4,1,4,1,4,1,4,1,4,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,
  	6,1,6,1,6,1,6,1,6,3,6,69,8,6,1,7,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,
  	1,8,1,8,1,8,1,8,3,8,85,8,8,1,8,0,0,9,0,2,4,6,8,10,12,14,16,0,1,1,0,7,
  	9,85,0,21,1,0,0,0,2,30,1,0,0,0,4,32,1,0,0,0,6,38,1,0,0,0,8,42,1,0,0,0,
  	10,52,1,0,0,0,12,68,1,0,0,0,14,70,1,0,0,0,16,84,1,0,0,0,18,20,3,2,1,0,
  	19,18,1,0,0,0,20,23,1,0,0,0,21,19,1,0,0,0,21,22,1,0,0,0,22,24,1,0,0,0,
  	23,21,1,0,0,0,24,25,5,0,0,1,25,1,1,0,0,0,26,31,3,4,2,0,27,31,3,6,3,0,
  	28,31,3,8,4,0,29,31,3,14,7,0,30,26,1,0,0,0,30,27,1,0,0,0,30,28,1,0,0,
  	0,30,29,1,0,0,0,31,3,1,0,0,0,32,33,5,1,0,0,33,34,5,19,0,0,34,35,5,2,0,
  	0,35,36,5,15,0,0,36,37,5,3,0,0,37,5,1,0,0,0,38,39,5,4,0,0,39,40,5,19,
  	0,0,40,41,5,3,0,0,41,7,1,0,0,0,42,43,5,19,0,0,43,44,5,5,0,0,44,46,3,10,
  	5,0,45,47,3,12,6,0,46,45,1,0,0,0,46,47,1,0,0,0,47,48,1,0,0,0,48,49,5,
  	6,0,0,49,50,5,19,0,0,50,51,5,3,0,0,51,9,1,0,0,0,52,53,7,0,0,0,53,11,1,
  	0,0,0,54,55,5,10,0,0,55,56,5,11,0,0,56,57,5,16,0,0,57,58,5,12,0,0,58,
  	59,5,16,0,0,59,69,5,13,0,0,60,61,5,11,0,0,61,62,5,16,0,0,62,69,5,13,0,
  	0,63,64,5,11,0,0,64,65,5,16,0,0,65,66,5,12,0,0,66,67,5,16,0,0,67,69,5,
  	13,0,0,68,54,1,0,0,0,68,60,1,0,0,0,68,63,1,0,0,0,69,13,1,0,0,0,70,71,
  	5,19,0,0,71,72,5,5,0,0,72,73,5,14,0,0,73,74,5,19,0,0,74,75,5,3,0,0,75,
  	15,1,0,0,0,76,77,5,11,0,0,77,78,5,16,0,0,78,79,5,12,0,0,79,80,5,17,0,
  	0,80,85,5,13,0,0,81,82,5,11,0,0,82,83,5,16,0,0,83,85,5,13,0,0,84,76,1,
  	0,0,0,84,81,1,0,0,0,85,17,1,0,0,0,5,21,30,46,68,84
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  mydslParserStaticData = staticData.release();
}

}

myDslParser::myDslParser(TokenStream *input) : myDslParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

myDslParser::myDslParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  myDslParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *mydslParserStaticData->atn, mydslParserStaticData->decisionToDFA, mydslParserStaticData->sharedContextCache, options);
}

myDslParser::~myDslParser() {
  delete _interpreter;
}

const atn::ATN& myDslParser::getATN() const {
  return *mydslParserStaticData->atn;
}

std::string myDslParser::getGrammarFileName() const {
  return "myDsl.g4";
}

const std::vector<std::string>& myDslParser::getRuleNames() const {
  return mydslParserStaticData->ruleNames;
}

const dfa::Vocabulary& myDslParser::getVocabulary() const {
  return mydslParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView myDslParser::getSerializedATN() const {
  return mydslParserStaticData->serializedATN;
}


//----------------- DslContext ------------------------------------------------------------------

myDslParser::DslContext::DslContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* myDslParser::DslContext::EOF() {
  return getToken(myDslParser::EOF, 0);
}

std::vector<myDslParser::CommandContext *> myDslParser::DslContext::command() {
  return getRuleContexts<myDslParser::CommandContext>();
}

myDslParser::CommandContext* myDslParser::DslContext::command(size_t i) {
  return getRuleContext<myDslParser::CommandContext>(i);
}


size_t myDslParser::DslContext::getRuleIndex() const {
  return myDslParser::RuleDsl;
}

void myDslParser::DslContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDsl(this);
}

void myDslParser::DslContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDsl(this);
}

myDslParser::DslContext* myDslParser::dsl() {
  DslContext *_localctx = _tracker.createInstance<DslContext>(_ctx, getState());
  enterRule(_localctx, 0, myDslParser::RuleDsl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(21);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 524306) != 0)) {
      setState(18);
      command();
      setState(23);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(24);
    match(myDslParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CommandContext ------------------------------------------------------------------

myDslParser::CommandContext::CommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

myDslParser::LoadImageCommandContext* myDslParser::CommandContext::loadImageCommand() {
  return getRuleContext<myDslParser::LoadImageCommandContext>(0);
}

myDslParser::ShowImageCommandContext* myDslParser::CommandContext::showImageCommand() {
  return getRuleContext<myDslParser::ShowImageCommandContext>(0);
}

myDslParser::BlurImageCommandContext* myDslParser::CommandContext::blurImageCommand() {
  return getRuleContext<myDslParser::BlurImageCommandContext>(0);
}

myDslParser::ThresholdImageCommandContext* myDslParser::CommandContext::thresholdImageCommand() {
  return getRuleContext<myDslParser::ThresholdImageCommandContext>(0);
}


size_t myDslParser::CommandContext::getRuleIndex() const {
  return myDslParser::RuleCommand;
}

void myDslParser::CommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommand(this);
}

void myDslParser::CommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommand(this);
}

myDslParser::CommandContext* myDslParser::command() {
  CommandContext *_localctx = _tracker.createInstance<CommandContext>(_ctx, getState());
  enterRule(_localctx, 2, myDslParser::RuleCommand);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(30);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(26);
      loadImageCommand();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(27);
      showImageCommand();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(28);
      blurImageCommand();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(29);
      thresholdImageCommand();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadImageCommandContext ------------------------------------------------------------------

myDslParser::LoadImageCommandContext::LoadImageCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* myDslParser::LoadImageCommandContext::VARIABLE() {
  return getToken(myDslParser::VARIABLE, 0);
}

tree::TerminalNode* myDslParser::LoadImageCommandContext::STRING() {
  return getToken(myDslParser::STRING, 0);
}


size_t myDslParser::LoadImageCommandContext::getRuleIndex() const {
  return myDslParser::RuleLoadImageCommand;
}

void myDslParser::LoadImageCommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadImageCommand(this);
}

void myDslParser::LoadImageCommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadImageCommand(this);
}

myDslParser::LoadImageCommandContext* myDslParser::loadImageCommand() {
  LoadImageCommandContext *_localctx = _tracker.createInstance<LoadImageCommandContext>(_ctx, getState());
  enterRule(_localctx, 4, myDslParser::RuleLoadImageCommand);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(32);
    match(myDslParser::T__0);
    setState(33);
    match(myDslParser::VARIABLE);
    setState(34);
    match(myDslParser::T__1);
    setState(35);
    antlrcpp::downCast<LoadImageCommandContext *>(_localctx)->path = match(myDslParser::STRING);
    setState(36);
    match(myDslParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShowImageCommandContext ------------------------------------------------------------------

myDslParser::ShowImageCommandContext::ShowImageCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* myDslParser::ShowImageCommandContext::VARIABLE() {
  return getToken(myDslParser::VARIABLE, 0);
}


size_t myDslParser::ShowImageCommandContext::getRuleIndex() const {
  return myDslParser::RuleShowImageCommand;
}

void myDslParser::ShowImageCommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShowImageCommand(this);
}

void myDslParser::ShowImageCommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShowImageCommand(this);
}

myDslParser::ShowImageCommandContext* myDslParser::showImageCommand() {
  ShowImageCommandContext *_localctx = _tracker.createInstance<ShowImageCommandContext>(_ctx, getState());
  enterRule(_localctx, 6, myDslParser::RuleShowImageCommand);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(38);
    match(myDslParser::T__3);
    setState(39);
    match(myDslParser::VARIABLE);
    setState(40);
    match(myDslParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlurImageCommandContext ------------------------------------------------------------------

myDslParser::BlurImageCommandContext::BlurImageCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> myDslParser::BlurImageCommandContext::VARIABLE() {
  return getTokens(myDslParser::VARIABLE);
}

tree::TerminalNode* myDslParser::BlurImageCommandContext::VARIABLE(size_t i) {
  return getToken(myDslParser::VARIABLE, i);
}

myDslParser::BlurTypeContext* myDslParser::BlurImageCommandContext::blurType() {
  return getRuleContext<myDslParser::BlurTypeContext>(0);
}

myDslParser::BlurOptionsContext* myDslParser::BlurImageCommandContext::blurOptions() {
  return getRuleContext<myDslParser::BlurOptionsContext>(0);
}


size_t myDslParser::BlurImageCommandContext::getRuleIndex() const {
  return myDslParser::RuleBlurImageCommand;
}

void myDslParser::BlurImageCommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlurImageCommand(this);
}

void myDslParser::BlurImageCommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlurImageCommand(this);
}

myDslParser::BlurImageCommandContext* myDslParser::blurImageCommand() {
  BlurImageCommandContext *_localctx = _tracker.createInstance<BlurImageCommandContext>(_ctx, getState());
  enterRule(_localctx, 8, myDslParser::RuleBlurImageCommand);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(42);
    match(myDslParser::VARIABLE);
    setState(43);
    match(myDslParser::T__4);
    setState(44);
    antlrcpp::downCast<BlurImageCommandContext *>(_localctx)->blur = blurType();
    setState(46);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == myDslParser::T__9

    || _la == myDslParser::T__10) {
      setState(45);
      antlrcpp::downCast<BlurImageCommandContext *>(_localctx)->blurOpts = blurOptions();
    }
    setState(48);
    match(myDslParser::T__5);
    setState(49);
    match(myDslParser::VARIABLE);
    setState(50);
    match(myDslParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlurTypeContext ------------------------------------------------------------------

myDslParser::BlurTypeContext::BlurTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t myDslParser::BlurTypeContext::getRuleIndex() const {
  return myDslParser::RuleBlurType;
}

void myDslParser::BlurTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlurType(this);
}

void myDslParser::BlurTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlurType(this);
}

myDslParser::BlurTypeContext* myDslParser::blurType() {
  BlurTypeContext *_localctx = _tracker.createInstance<BlurTypeContext>(_ctx, getState());
  enterRule(_localctx, 10, myDslParser::RuleBlurType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(52);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 896) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlurOptionsContext ------------------------------------------------------------------

myDslParser::BlurOptionsContext::BlurOptionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> myDslParser::BlurOptionsContext::INT() {
  return getTokens(myDslParser::INT);
}

tree::TerminalNode* myDslParser::BlurOptionsContext::INT(size_t i) {
  return getToken(myDslParser::INT, i);
}


size_t myDslParser::BlurOptionsContext::getRuleIndex() const {
  return myDslParser::RuleBlurOptions;
}

void myDslParser::BlurOptionsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlurOptions(this);
}

void myDslParser::BlurOptionsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlurOptions(this);
}

myDslParser::BlurOptionsContext* myDslParser::blurOptions() {
  BlurOptionsContext *_localctx = _tracker.createInstance<BlurOptionsContext>(_ctx, getState());
  enterRule(_localctx, 12, myDslParser::RuleBlurOptions);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(68);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(54);
      match(myDslParser::T__9);
      setState(55);
      match(myDslParser::T__10);
      setState(56);
      antlrcpp::downCast<BlurOptionsContext *>(_localctx)->size1 = match(myDslParser::INT);
      setState(57);
      match(myDslParser::T__11);
      setState(58);
      antlrcpp::downCast<BlurOptionsContext *>(_localctx)->size2 = match(myDslParser::INT);
      setState(59);
      match(myDslParser::T__12);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(60);
      match(myDslParser::T__10);
      setState(61);
      antlrcpp::downCast<BlurOptionsContext *>(_localctx)->ksize = match(myDslParser::INT);
      setState(62);
      match(myDslParser::T__12);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(63);
      match(myDslParser::T__10);
      setState(64);
      antlrcpp::downCast<BlurOptionsContext *>(_localctx)->ksize = match(myDslParser::INT);
      setState(65);
      match(myDslParser::T__11);
      setState(66);
      antlrcpp::downCast<BlurOptionsContext *>(_localctx)->sigma = match(myDslParser::INT);
      setState(67);
      match(myDslParser::T__12);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThresholdImageCommandContext ------------------------------------------------------------------

myDslParser::ThresholdImageCommandContext::ThresholdImageCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> myDslParser::ThresholdImageCommandContext::VARIABLE() {
  return getTokens(myDslParser::VARIABLE);
}

tree::TerminalNode* myDslParser::ThresholdImageCommandContext::VARIABLE(size_t i) {
  return getToken(myDslParser::VARIABLE, i);
}


size_t myDslParser::ThresholdImageCommandContext::getRuleIndex() const {
  return myDslParser::RuleThresholdImageCommand;
}

void myDslParser::ThresholdImageCommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThresholdImageCommand(this);
}

void myDslParser::ThresholdImageCommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThresholdImageCommand(this);
}

myDslParser::ThresholdImageCommandContext* myDslParser::thresholdImageCommand() {
  ThresholdImageCommandContext *_localctx = _tracker.createInstance<ThresholdImageCommandContext>(_ctx, getState());
  enterRule(_localctx, 14, myDslParser::RuleThresholdImageCommand);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70);
    match(myDslParser::VARIABLE);
    setState(71);
    match(myDslParser::T__4);
    setState(72);
    match(myDslParser::T__13);
    setState(73);
    match(myDslParser::VARIABLE);
    setState(74);
    match(myDslParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptionsContext ------------------------------------------------------------------

myDslParser::OptionsContext::OptionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* myDslParser::OptionsContext::INT() {
  return getToken(myDslParser::INT, 0);
}

tree::TerminalNode* myDslParser::OptionsContext::FLOAT() {
  return getToken(myDslParser::FLOAT, 0);
}


size_t myDslParser::OptionsContext::getRuleIndex() const {
  return myDslParser::RuleOptions;
}

void myDslParser::OptionsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOptions(this);
}

void myDslParser::OptionsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOptions(this);
}

myDslParser::OptionsContext* myDslParser::options() {
  OptionsContext *_localctx = _tracker.createInstance<OptionsContext>(_ctx, getState());
  enterRule(_localctx, 16, myDslParser::RuleOptions);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(84);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(76);
      match(myDslParser::T__10);
      setState(77);
      antlrcpp::downCast<OptionsContext *>(_localctx)->size = match(myDslParser::INT);
      setState(78);
      match(myDslParser::T__11);
      setState(79);
      antlrcpp::downCast<OptionsContext *>(_localctx)->sigma = match(myDslParser::FLOAT);
      setState(80);
      match(myDslParser::T__12);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(81);
      match(myDslParser::T__10);
      setState(82);
      antlrcpp::downCast<OptionsContext *>(_localctx)->size = match(myDslParser::INT);
      setState(83);
      match(myDslParser::T__12);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void myDslParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  mydslParserInitialize();
#else
  ::antlr4::internal::call_once(mydslParserOnceFlag, mydslParserInitialize);
#endif
}
