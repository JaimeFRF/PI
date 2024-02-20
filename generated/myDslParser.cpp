
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
      "dsl", "command", "loadImageCommand", "showImageCommand", "assignementCommand", 
      "operation", "operationType", "blurType", "blurOptions", "arithmeticOperation", 
      "multOp", "addOp", "subOp", "maxValue", "thresholdType", "options"
    },
    std::vector<std::string>{
      "", "'load'", "'from'", "';'", "'show'", "'='", "'on'", "'('", "')'", 
      "'binarization'", "'countors'", "'gaussianBlur'", "'bilateralBlur'", 
      "'medianBlur'", "'with size'", "','", "'*'", "'+'", "'-'", "'maxValue'", 
      "'binary_threshold'", "'binary_inv_threshold'", "'otsu_threshold'", 
      "'otsu_binary_inv_threshold'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "STRING", "INT", "FLOAT", "WS", "VARIABLE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,28,149,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,1,0,5,0,34,8,0,10,0,12,0,37,9,0,1,0,1,0,1,1,1,1,1,1,3,1,
  	44,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,
  	5,1,5,1,5,1,5,1,5,1,5,1,5,3,5,68,8,5,1,5,3,5,71,8,5,1,6,1,6,3,6,75,8,
  	6,1,6,1,6,1,6,3,6,80,8,6,1,6,3,6,83,8,6,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,
  	8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,3,8,101,8,8,1,9,1,9,1,9,1,9,1,9,1,9,
  	3,9,109,8,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,3,9,118,8,9,1,9,1,9,5,9,122,8,
  	9,10,9,12,9,125,9,9,1,10,1,10,1,11,1,11,1,12,1,12,1,13,1,13,1,13,1,13,
  	1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,3,15,147,8,15,1,15,
  	0,1,18,16,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,0,2,1,0,11,13,1,
  	0,20,23,149,0,35,1,0,0,0,2,43,1,0,0,0,4,45,1,0,0,0,6,51,1,0,0,0,8,55,
  	1,0,0,0,10,70,1,0,0,0,12,82,1,0,0,0,14,84,1,0,0,0,16,100,1,0,0,0,18,108,
  	1,0,0,0,20,126,1,0,0,0,22,128,1,0,0,0,24,130,1,0,0,0,26,132,1,0,0,0,28,
  	136,1,0,0,0,30,146,1,0,0,0,32,34,3,2,1,0,33,32,1,0,0,0,34,37,1,0,0,0,
  	35,33,1,0,0,0,35,36,1,0,0,0,36,38,1,0,0,0,37,35,1,0,0,0,38,39,5,0,0,1,
  	39,1,1,0,0,0,40,44,3,4,2,0,41,44,3,6,3,0,42,44,3,8,4,0,43,40,1,0,0,0,
  	43,41,1,0,0,0,43,42,1,0,0,0,44,3,1,0,0,0,45,46,5,1,0,0,46,47,5,28,0,0,
  	47,48,5,2,0,0,48,49,5,24,0,0,49,50,5,3,0,0,50,5,1,0,0,0,51,52,5,4,0,0,
  	52,53,5,28,0,0,53,54,5,3,0,0,54,7,1,0,0,0,55,56,5,28,0,0,56,57,5,5,0,
  	0,57,58,3,10,5,0,58,59,5,3,0,0,59,9,1,0,0,0,60,61,3,12,6,0,61,67,5,6,
  	0,0,62,68,5,28,0,0,63,64,5,7,0,0,64,65,3,10,5,0,65,66,5,8,0,0,66,68,1,
  	0,0,0,67,62,1,0,0,0,67,63,1,0,0,0,68,71,1,0,0,0,69,71,3,18,9,0,70,60,
  	1,0,0,0,70,69,1,0,0,0,71,11,1,0,0,0,72,74,3,14,7,0,73,75,3,16,8,0,74,
  	73,1,0,0,0,74,75,1,0,0,0,75,83,1,0,0,0,76,83,5,9,0,0,77,79,3,28,14,0,
  	78,80,3,26,13,0,79,78,1,0,0,0,79,80,1,0,0,0,80,83,1,0,0,0,81,83,5,10,
  	0,0,82,72,1,0,0,0,82,76,1,0,0,0,82,77,1,0,0,0,82,81,1,0,0,0,83,13,1,0,
  	0,0,84,85,7,0,0,0,85,15,1,0,0,0,86,87,5,14,0,0,87,88,5,7,0,0,88,89,5,
  	25,0,0,89,90,5,15,0,0,90,91,5,25,0,0,91,101,5,8,0,0,92,93,5,7,0,0,93,
  	94,5,25,0,0,94,101,5,8,0,0,95,96,5,7,0,0,96,97,5,25,0,0,97,98,5,15,0,
  	0,98,99,5,25,0,0,99,101,5,8,0,0,100,86,1,0,0,0,100,92,1,0,0,0,100,95,
  	1,0,0,0,101,17,1,0,0,0,102,103,6,9,-1,0,103,104,5,7,0,0,104,105,3,18,
  	9,0,105,106,5,8,0,0,106,109,1,0,0,0,107,109,5,28,0,0,108,102,1,0,0,0,
  	108,107,1,0,0,0,109,123,1,0,0,0,110,111,10,3,0,0,111,112,3,20,10,0,112,
  	113,3,18,9,4,113,122,1,0,0,0,114,117,10,2,0,0,115,118,3,22,11,0,116,118,
  	3,24,12,0,117,115,1,0,0,0,117,116,1,0,0,0,118,119,1,0,0,0,119,120,3,18,
  	9,3,120,122,1,0,0,0,121,110,1,0,0,0,121,114,1,0,0,0,122,125,1,0,0,0,123,
  	121,1,0,0,0,123,124,1,0,0,0,124,19,1,0,0,0,125,123,1,0,0,0,126,127,5,
  	16,0,0,127,21,1,0,0,0,128,129,5,17,0,0,129,23,1,0,0,0,130,131,5,18,0,
  	0,131,25,1,0,0,0,132,133,5,19,0,0,133,134,5,5,0,0,134,135,5,25,0,0,135,
  	27,1,0,0,0,136,137,7,1,0,0,137,29,1,0,0,0,138,139,5,7,0,0,139,140,5,25,
  	0,0,140,141,5,15,0,0,141,142,5,26,0,0,142,147,5,8,0,0,143,144,5,7,0,0,
  	144,145,5,25,0,0,145,147,5,8,0,0,146,138,1,0,0,0,146,143,1,0,0,0,147,
  	31,1,0,0,0,13,35,43,67,70,74,79,82,100,108,117,121,123,146
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
    setState(35);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 268435474) != 0)) {
      setState(32);
      command();
      setState(37);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(38);
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

myDslParser::AssignementCommandContext* myDslParser::CommandContext::assignementCommand() {
  return getRuleContext<myDslParser::AssignementCommandContext>(0);
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
    setState(43);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case myDslParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(40);
        loadImageCommand();
        break;
      }

      case myDslParser::T__3: {
        enterOuterAlt(_localctx, 2);
        setState(41);
        showImageCommand();
        break;
      }

      case myDslParser::VARIABLE: {
        enterOuterAlt(_localctx, 3);
        setState(42);
        assignementCommand();
        break;
      }

    default:
      throw NoViableAltException(this);
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
    setState(45);
    match(myDslParser::T__0);
    setState(46);
    match(myDslParser::VARIABLE);
    setState(47);
    match(myDslParser::T__1);
    setState(48);
    antlrcpp::downCast<LoadImageCommandContext *>(_localctx)->path = match(myDslParser::STRING);
    setState(49);
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
    setState(51);
    match(myDslParser::T__3);
    setState(52);
    match(myDslParser::VARIABLE);
    setState(53);
    match(myDslParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignementCommandContext ------------------------------------------------------------------

myDslParser::AssignementCommandContext::AssignementCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* myDslParser::AssignementCommandContext::VARIABLE() {
  return getToken(myDslParser::VARIABLE, 0);
}

myDslParser::OperationContext* myDslParser::AssignementCommandContext::operation() {
  return getRuleContext<myDslParser::OperationContext>(0);
}


size_t myDslParser::AssignementCommandContext::getRuleIndex() const {
  return myDslParser::RuleAssignementCommand;
}

void myDslParser::AssignementCommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignementCommand(this);
}

void myDslParser::AssignementCommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignementCommand(this);
}

myDslParser::AssignementCommandContext* myDslParser::assignementCommand() {
  AssignementCommandContext *_localctx = _tracker.createInstance<AssignementCommandContext>(_ctx, getState());
  enterRule(_localctx, 8, myDslParser::RuleAssignementCommand);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(55);
    match(myDslParser::VARIABLE);
    setState(56);
    match(myDslParser::T__4);
    setState(57);
    operation();
    setState(58);
    match(myDslParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperationContext ------------------------------------------------------------------

myDslParser::OperationContext::OperationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

myDslParser::OperationTypeContext* myDslParser::OperationContext::operationType() {
  return getRuleContext<myDslParser::OperationTypeContext>(0);
}

tree::TerminalNode* myDslParser::OperationContext::VARIABLE() {
  return getToken(myDslParser::VARIABLE, 0);
}

myDslParser::OperationContext* myDslParser::OperationContext::operation() {
  return getRuleContext<myDslParser::OperationContext>(0);
}

myDslParser::ArithmeticOperationContext* myDslParser::OperationContext::arithmeticOperation() {
  return getRuleContext<myDslParser::ArithmeticOperationContext>(0);
}


size_t myDslParser::OperationContext::getRuleIndex() const {
  return myDslParser::RuleOperation;
}

void myDslParser::OperationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation(this);
}

void myDslParser::OperationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation(this);
}

myDslParser::OperationContext* myDslParser::operation() {
  OperationContext *_localctx = _tracker.createInstance<OperationContext>(_ctx, getState());
  enterRule(_localctx, 10, myDslParser::RuleOperation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(70);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case myDslParser::T__8:
      case myDslParser::T__9:
      case myDslParser::T__10:
      case myDslParser::T__11:
      case myDslParser::T__12:
      case myDslParser::T__19:
      case myDslParser::T__20:
      case myDslParser::T__21:
      case myDslParser::T__22: {
        enterOuterAlt(_localctx, 1);
        setState(60);
        operationType();
        setState(61);
        match(myDslParser::T__5);
        setState(67);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case myDslParser::VARIABLE: {
            setState(62);
            match(myDslParser::VARIABLE);
            break;
          }

          case myDslParser::T__6: {
            setState(63);
            match(myDslParser::T__6);
            setState(64);
            operation();
            setState(65);
            match(myDslParser::T__7);
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        break;
      }

      case myDslParser::T__6:
      case myDslParser::VARIABLE: {
        enterOuterAlt(_localctx, 2);
        setState(69);
        arithmeticOperation(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperationTypeContext ------------------------------------------------------------------

myDslParser::OperationTypeContext::OperationTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

myDslParser::BlurTypeContext* myDslParser::OperationTypeContext::blurType() {
  return getRuleContext<myDslParser::BlurTypeContext>(0);
}

myDslParser::BlurOptionsContext* myDslParser::OperationTypeContext::blurOptions() {
  return getRuleContext<myDslParser::BlurOptionsContext>(0);
}

myDslParser::ThresholdTypeContext* myDslParser::OperationTypeContext::thresholdType() {
  return getRuleContext<myDslParser::ThresholdTypeContext>(0);
}

myDslParser::MaxValueContext* myDslParser::OperationTypeContext::maxValue() {
  return getRuleContext<myDslParser::MaxValueContext>(0);
}


size_t myDslParser::OperationTypeContext::getRuleIndex() const {
  return myDslParser::RuleOperationType;
}

void myDslParser::OperationTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperationType(this);
}

void myDslParser::OperationTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperationType(this);
}

myDslParser::OperationTypeContext* myDslParser::operationType() {
  OperationTypeContext *_localctx = _tracker.createInstance<OperationTypeContext>(_ctx, getState());
  enterRule(_localctx, 12, myDslParser::RuleOperationType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(82);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case myDslParser::T__10:
      case myDslParser::T__11:
      case myDslParser::T__12: {
        enterOuterAlt(_localctx, 1);
        setState(72);
        blurType();
        setState(74);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == myDslParser::T__6

        || _la == myDslParser::T__13) {
          setState(73);
          antlrcpp::downCast<OperationTypeContext *>(_localctx)->blurOpts = blurOptions();
        }
        break;
      }

      case myDslParser::T__8: {
        enterOuterAlt(_localctx, 2);
        setState(76);
        match(myDslParser::T__8);
        break;
      }

      case myDslParser::T__19:
      case myDslParser::T__20:
      case myDslParser::T__21:
      case myDslParser::T__22: {
        enterOuterAlt(_localctx, 3);
        setState(77);
        thresholdType();
        setState(79);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == myDslParser::T__18) {
          setState(78);
          antlrcpp::downCast<OperationTypeContext *>(_localctx)->thresholdOpts = maxValue();
        }
        break;
      }

      case myDslParser::T__9: {
        enterOuterAlt(_localctx, 4);
        setState(81);
        match(myDslParser::T__9);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
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
  enterRule(_localctx, 14, myDslParser::RuleBlurType);
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
    setState(84);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 14336) != 0))) {
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
  enterRule(_localctx, 16, myDslParser::RuleBlurOptions);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(100);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(86);
      match(myDslParser::T__13);
      setState(87);
      match(myDslParser::T__6);
      setState(88);
      antlrcpp::downCast<BlurOptionsContext *>(_localctx)->size1 = match(myDslParser::INT);
      setState(89);
      match(myDslParser::T__14);
      setState(90);
      antlrcpp::downCast<BlurOptionsContext *>(_localctx)->size2 = match(myDslParser::INT);
      setState(91);
      match(myDslParser::T__7);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(92);
      match(myDslParser::T__6);
      setState(93);
      antlrcpp::downCast<BlurOptionsContext *>(_localctx)->ksize = match(myDslParser::INT);
      setState(94);
      match(myDslParser::T__7);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(95);
      match(myDslParser::T__6);
      setState(96);
      antlrcpp::downCast<BlurOptionsContext *>(_localctx)->ksize = match(myDslParser::INT);
      setState(97);
      match(myDslParser::T__14);
      setState(98);
      antlrcpp::downCast<BlurOptionsContext *>(_localctx)->sigma = match(myDslParser::INT);
      setState(99);
      match(myDslParser::T__7);
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

//----------------- ArithmeticOperationContext ------------------------------------------------------------------

myDslParser::ArithmeticOperationContext::ArithmeticOperationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<myDslParser::ArithmeticOperationContext *> myDslParser::ArithmeticOperationContext::arithmeticOperation() {
  return getRuleContexts<myDslParser::ArithmeticOperationContext>();
}

myDslParser::ArithmeticOperationContext* myDslParser::ArithmeticOperationContext::arithmeticOperation(size_t i) {
  return getRuleContext<myDslParser::ArithmeticOperationContext>(i);
}

tree::TerminalNode* myDslParser::ArithmeticOperationContext::VARIABLE() {
  return getToken(myDslParser::VARIABLE, 0);
}

myDslParser::MultOpContext* myDslParser::ArithmeticOperationContext::multOp() {
  return getRuleContext<myDslParser::MultOpContext>(0);
}

myDslParser::AddOpContext* myDslParser::ArithmeticOperationContext::addOp() {
  return getRuleContext<myDslParser::AddOpContext>(0);
}

myDslParser::SubOpContext* myDslParser::ArithmeticOperationContext::subOp() {
  return getRuleContext<myDslParser::SubOpContext>(0);
}


size_t myDslParser::ArithmeticOperationContext::getRuleIndex() const {
  return myDslParser::RuleArithmeticOperation;
}

void myDslParser::ArithmeticOperationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArithmeticOperation(this);
}

void myDslParser::ArithmeticOperationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArithmeticOperation(this);
}


myDslParser::ArithmeticOperationContext* myDslParser::arithmeticOperation() {
   return arithmeticOperation(0);
}

myDslParser::ArithmeticOperationContext* myDslParser::arithmeticOperation(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  myDslParser::ArithmeticOperationContext *_localctx = _tracker.createInstance<ArithmeticOperationContext>(_ctx, parentState);
  myDslParser::ArithmeticOperationContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 18;
  enterRecursionRule(_localctx, 18, myDslParser::RuleArithmeticOperation, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(108);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case myDslParser::T__6: {
        setState(103);
        match(myDslParser::T__6);
        setState(104);
        arithmeticOperation(0);
        setState(105);
        match(myDslParser::T__7);
        break;
      }

      case myDslParser::VARIABLE: {
        setState(107);
        match(myDslParser::VARIABLE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(123);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(121);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ArithmeticOperationContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleArithmeticOperation);
          setState(110);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(111);
          multOp();
          setState(112);
          arithmeticOperation(4);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ArithmeticOperationContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleArithmeticOperation);
          setState(114);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(117);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case myDslParser::T__16: {
              setState(115);
              addOp();
              break;
            }

            case myDslParser::T__17: {
              setState(116);
              subOp();
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(119);
          arithmeticOperation(3);
          break;
        }

        default:
          break;
        } 
      }
      setState(125);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- MultOpContext ------------------------------------------------------------------

myDslParser::MultOpContext::MultOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t myDslParser::MultOpContext::getRuleIndex() const {
  return myDslParser::RuleMultOp;
}

void myDslParser::MultOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultOp(this);
}

void myDslParser::MultOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultOp(this);
}

myDslParser::MultOpContext* myDslParser::multOp() {
  MultOpContext *_localctx = _tracker.createInstance<MultOpContext>(_ctx, getState());
  enterRule(_localctx, 20, myDslParser::RuleMultOp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
    match(myDslParser::T__15);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddOpContext ------------------------------------------------------------------

myDslParser::AddOpContext::AddOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t myDslParser::AddOpContext::getRuleIndex() const {
  return myDslParser::RuleAddOp;
}

void myDslParser::AddOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddOp(this);
}

void myDslParser::AddOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddOp(this);
}

myDslParser::AddOpContext* myDslParser::addOp() {
  AddOpContext *_localctx = _tracker.createInstance<AddOpContext>(_ctx, getState());
  enterRule(_localctx, 22, myDslParser::RuleAddOp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(128);
    match(myDslParser::T__16);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubOpContext ------------------------------------------------------------------

myDslParser::SubOpContext::SubOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t myDslParser::SubOpContext::getRuleIndex() const {
  return myDslParser::RuleSubOp;
}

void myDslParser::SubOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubOp(this);
}

void myDslParser::SubOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubOp(this);
}

myDslParser::SubOpContext* myDslParser::subOp() {
  SubOpContext *_localctx = _tracker.createInstance<SubOpContext>(_ctx, getState());
  enterRule(_localctx, 24, myDslParser::RuleSubOp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(130);
    match(myDslParser::T__17);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MaxValueContext ------------------------------------------------------------------

myDslParser::MaxValueContext::MaxValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* myDslParser::MaxValueContext::INT() {
  return getToken(myDslParser::INT, 0);
}


size_t myDslParser::MaxValueContext::getRuleIndex() const {
  return myDslParser::RuleMaxValue;
}

void myDslParser::MaxValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMaxValue(this);
}

void myDslParser::MaxValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMaxValue(this);
}

myDslParser::MaxValueContext* myDslParser::maxValue() {
  MaxValueContext *_localctx = _tracker.createInstance<MaxValueContext>(_ctx, getState());
  enterRule(_localctx, 26, myDslParser::RuleMaxValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132);
    match(myDslParser::T__18);
    setState(133);
    match(myDslParser::T__4);
    setState(134);
    match(myDslParser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThresholdTypeContext ------------------------------------------------------------------

myDslParser::ThresholdTypeContext::ThresholdTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t myDslParser::ThresholdTypeContext::getRuleIndex() const {
  return myDslParser::RuleThresholdType;
}

void myDslParser::ThresholdTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThresholdType(this);
}

void myDslParser::ThresholdTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThresholdType(this);
}

myDslParser::ThresholdTypeContext* myDslParser::thresholdType() {
  ThresholdTypeContext *_localctx = _tracker.createInstance<ThresholdTypeContext>(_ctx, getState());
  enterRule(_localctx, 28, myDslParser::RuleThresholdType);
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
    setState(136);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 15728640) != 0))) {
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
  enterRule(_localctx, 30, myDslParser::RuleOptions);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(146);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(138);
      match(myDslParser::T__6);
      setState(139);
      antlrcpp::downCast<OptionsContext *>(_localctx)->size = match(myDslParser::INT);
      setState(140);
      match(myDslParser::T__14);
      setState(141);
      antlrcpp::downCast<OptionsContext *>(_localctx)->sigma = match(myDslParser::FLOAT);
      setState(142);
      match(myDslParser::T__7);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(143);
      match(myDslParser::T__6);
      setState(144);
      antlrcpp::downCast<OptionsContext *>(_localctx)->size = match(myDslParser::INT);
      setState(145);
      match(myDslParser::T__7);
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

bool myDslParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 9: return arithmeticOperationSempred(antlrcpp::downCast<ArithmeticOperationContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool myDslParser::arithmeticOperationSempred(ArithmeticOperationContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);
    case 1: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

void myDslParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  mydslParserInitialize();
#else
  ::antlr4::internal::call_once(mydslParserOnceFlag, mydslParserInitialize);
#endif
}
