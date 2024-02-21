
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
      "dsl", "command", "loadImageCommand", "showImageCommand", "textRecognitionCommand", 
      "printTextCommand", "assignementCommand", "operation", "operationType", 
      "blurType", "blurOptions", "arithmeticOperation", "multOp", "addOp", 
      "subOp", "source", "dest", "imageManipulationType", "resizeOperation", 
      "rotateOperation", "maxValue", "thresholdType", "options"
    },
    std::vector<std::string>{
      "", "'load'", "'from'", "';'", "'show'", "'recognise text from'", 
      "'to'", "'print'", "'='", "'on'", "'('", "')'", "'binarization'", 
      "'countors'", "'gaussianBlur'", "'bilateralBlur'", "'medianBlur'", 
      "'with size'", "','", "'*'", "'+'", "'-'", "'resize'", "'with ('", 
      "'rotate'", "'degrees'", "'maxValue'", "'binary_threshold'", "'binary_inv_threshold'", 
      "'otsu_threshold'", "'otsu_binary_inv_threshold'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "STRING", 
      "INT", "FLOAT", "WS", "VARIABLE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,35,197,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,1,0,5,0,48,8,0,10,0,12,0,51,9,0,1,0,1,0,1,1,1,1,1,1,1,1,
  	1,1,3,1,60,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,
  	4,1,4,1,4,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,7,1,7,3,7,89,8,7,1,7,
  	1,7,1,7,1,7,1,7,1,7,3,7,97,8,7,1,7,3,7,100,8,7,1,8,1,8,3,8,104,8,8,1,
  	8,1,8,1,8,3,8,109,8,8,1,8,3,8,112,8,8,1,9,1,9,1,10,1,10,1,10,1,10,1,10,
  	1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,3,10,130,8,10,1,11,1,11,
  	1,11,1,11,1,11,1,11,3,11,138,8,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,
  	3,11,147,8,11,1,11,1,11,5,11,151,8,11,10,11,12,11,154,9,11,1,12,1,12,
  	1,13,1,13,1,14,1,14,1,15,1,15,1,16,1,16,1,17,1,17,3,17,168,8,17,1,18,
  	1,18,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,20,1,20,1,20,1,20,
  	1,21,1,21,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,3,22,195,8,22,1,22,
  	0,1,22,23,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,
  	44,0,2,1,0,14,16,1,0,27,30,194,0,49,1,0,0,0,2,59,1,0,0,0,4,61,1,0,0,0,
  	6,67,1,0,0,0,8,71,1,0,0,0,10,77,1,0,0,0,12,81,1,0,0,0,14,99,1,0,0,0,16,
  	111,1,0,0,0,18,113,1,0,0,0,20,129,1,0,0,0,22,137,1,0,0,0,24,155,1,0,0,
  	0,26,157,1,0,0,0,28,159,1,0,0,0,30,161,1,0,0,0,32,163,1,0,0,0,34,167,
  	1,0,0,0,36,169,1,0,0,0,38,176,1,0,0,0,40,180,1,0,0,0,42,184,1,0,0,0,44,
  	194,1,0,0,0,46,48,3,2,1,0,47,46,1,0,0,0,48,51,1,0,0,0,49,47,1,0,0,0,49,
  	50,1,0,0,0,50,52,1,0,0,0,51,49,1,0,0,0,52,53,5,0,0,1,53,1,1,0,0,0,54,
  	60,3,4,2,0,55,60,3,6,3,0,56,60,3,12,6,0,57,60,3,8,4,0,58,60,3,10,5,0,
  	59,54,1,0,0,0,59,55,1,0,0,0,59,56,1,0,0,0,59,57,1,0,0,0,59,58,1,0,0,0,
  	60,3,1,0,0,0,61,62,5,1,0,0,62,63,5,35,0,0,63,64,5,2,0,0,64,65,5,31,0,
  	0,65,66,5,3,0,0,66,5,1,0,0,0,67,68,5,4,0,0,68,69,5,35,0,0,69,70,5,3,0,
  	0,70,7,1,0,0,0,71,72,5,5,0,0,72,73,3,30,15,0,73,74,5,6,0,0,74,75,3,32,
  	16,0,75,76,5,3,0,0,76,9,1,0,0,0,77,78,5,7,0,0,78,79,5,35,0,0,79,80,5,
  	3,0,0,80,11,1,0,0,0,81,82,5,35,0,0,82,83,5,8,0,0,83,84,3,14,7,0,84,85,
  	5,3,0,0,85,13,1,0,0,0,86,89,3,16,8,0,87,89,3,34,17,0,88,86,1,0,0,0,88,
  	87,1,0,0,0,89,90,1,0,0,0,90,96,5,9,0,0,91,97,5,35,0,0,92,93,5,10,0,0,
  	93,94,3,14,7,0,94,95,5,11,0,0,95,97,1,0,0,0,96,91,1,0,0,0,96,92,1,0,0,
  	0,97,100,1,0,0,0,98,100,3,22,11,0,99,88,1,0,0,0,99,98,1,0,0,0,100,15,
  	1,0,0,0,101,103,3,18,9,0,102,104,3,20,10,0,103,102,1,0,0,0,103,104,1,
  	0,0,0,104,112,1,0,0,0,105,112,5,12,0,0,106,108,3,42,21,0,107,109,3,40,
  	20,0,108,107,1,0,0,0,108,109,1,0,0,0,109,112,1,0,0,0,110,112,5,13,0,0,
  	111,101,1,0,0,0,111,105,1,0,0,0,111,106,1,0,0,0,111,110,1,0,0,0,112,17,
  	1,0,0,0,113,114,7,0,0,0,114,19,1,0,0,0,115,116,5,17,0,0,116,117,5,10,
  	0,0,117,118,5,32,0,0,118,119,5,18,0,0,119,120,5,32,0,0,120,130,5,11,0,
  	0,121,122,5,10,0,0,122,123,5,32,0,0,123,130,5,11,0,0,124,125,5,10,0,0,
  	125,126,5,32,0,0,126,127,5,18,0,0,127,128,5,32,0,0,128,130,5,11,0,0,129,
  	115,1,0,0,0,129,121,1,0,0,0,129,124,1,0,0,0,130,21,1,0,0,0,131,132,6,
  	11,-1,0,132,133,5,10,0,0,133,134,3,22,11,0,134,135,5,11,0,0,135,138,1,
  	0,0,0,136,138,5,35,0,0,137,131,1,0,0,0,137,136,1,0,0,0,138,152,1,0,0,
  	0,139,140,10,3,0,0,140,141,3,24,12,0,141,142,3,22,11,4,142,151,1,0,0,
  	0,143,146,10,2,0,0,144,147,3,26,13,0,145,147,3,28,14,0,146,144,1,0,0,
  	0,146,145,1,0,0,0,147,148,1,0,0,0,148,149,3,22,11,3,149,151,1,0,0,0,150,
  	139,1,0,0,0,150,143,1,0,0,0,151,154,1,0,0,0,152,150,1,0,0,0,152,153,1,
  	0,0,0,153,23,1,0,0,0,154,152,1,0,0,0,155,156,5,19,0,0,156,25,1,0,0,0,
  	157,158,5,20,0,0,158,27,1,0,0,0,159,160,5,21,0,0,160,29,1,0,0,0,161,162,
  	5,35,0,0,162,31,1,0,0,0,163,164,5,35,0,0,164,33,1,0,0,0,165,168,3,36,
  	18,0,166,168,3,38,19,0,167,165,1,0,0,0,167,166,1,0,0,0,168,35,1,0,0,0,
  	169,170,5,22,0,0,170,171,5,23,0,0,171,172,5,32,0,0,172,173,5,18,0,0,173,
  	174,5,32,0,0,174,175,5,11,0,0,175,37,1,0,0,0,176,177,5,24,0,0,177,178,
  	5,32,0,0,178,179,5,25,0,0,179,39,1,0,0,0,180,181,5,26,0,0,181,182,5,8,
  	0,0,182,183,5,32,0,0,183,41,1,0,0,0,184,185,7,1,0,0,185,43,1,0,0,0,186,
  	187,5,10,0,0,187,188,5,32,0,0,188,189,5,18,0,0,189,190,5,33,0,0,190,195,
  	5,11,0,0,191,192,5,10,0,0,192,193,5,32,0,0,193,195,5,11,0,0,194,186,1,
  	0,0,0,194,191,1,0,0,0,195,45,1,0,0,0,15,49,59,88,96,99,103,108,111,129,
  	137,146,150,152,167,194
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
    setState(49);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 34359738546) != 0)) {
      setState(46);
      command();
      setState(51);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(52);
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

myDslParser::TextRecognitionCommandContext* myDslParser::CommandContext::textRecognitionCommand() {
  return getRuleContext<myDslParser::TextRecognitionCommandContext>(0);
}

myDslParser::PrintTextCommandContext* myDslParser::CommandContext::printTextCommand() {
  return getRuleContext<myDslParser::PrintTextCommandContext>(0);
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
    setState(59);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case myDslParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(54);
        loadImageCommand();
        break;
      }

      case myDslParser::T__3: {
        enterOuterAlt(_localctx, 2);
        setState(55);
        showImageCommand();
        break;
      }

      case myDslParser::VARIABLE: {
        enterOuterAlt(_localctx, 3);
        setState(56);
        assignementCommand();
        break;
      }

      case myDslParser::T__4: {
        enterOuterAlt(_localctx, 4);
        setState(57);
        textRecognitionCommand();
        break;
      }

      case myDslParser::T__6: {
        enterOuterAlt(_localctx, 5);
        setState(58);
        printTextCommand();
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
    setState(61);
    match(myDslParser::T__0);
    setState(62);
    match(myDslParser::VARIABLE);
    setState(63);
    match(myDslParser::T__1);
    setState(64);
    antlrcpp::downCast<LoadImageCommandContext *>(_localctx)->path = match(myDslParser::STRING);
    setState(65);
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
    setState(67);
    match(myDslParser::T__3);
    setState(68);
    match(myDslParser::VARIABLE);
    setState(69);
    match(myDslParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TextRecognitionCommandContext ------------------------------------------------------------------

myDslParser::TextRecognitionCommandContext::TextRecognitionCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

myDslParser::SourceContext* myDslParser::TextRecognitionCommandContext::source() {
  return getRuleContext<myDslParser::SourceContext>(0);
}

myDslParser::DestContext* myDslParser::TextRecognitionCommandContext::dest() {
  return getRuleContext<myDslParser::DestContext>(0);
}


size_t myDslParser::TextRecognitionCommandContext::getRuleIndex() const {
  return myDslParser::RuleTextRecognitionCommand;
}

void myDslParser::TextRecognitionCommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTextRecognitionCommand(this);
}

void myDslParser::TextRecognitionCommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTextRecognitionCommand(this);
}

myDslParser::TextRecognitionCommandContext* myDslParser::textRecognitionCommand() {
  TextRecognitionCommandContext *_localctx = _tracker.createInstance<TextRecognitionCommandContext>(_ctx, getState());
  enterRule(_localctx, 8, myDslParser::RuleTextRecognitionCommand);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    match(myDslParser::T__4);
    setState(72);
    source();
    setState(73);
    match(myDslParser::T__5);
    setState(74);
    dest();
    setState(75);
    match(myDslParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintTextCommandContext ------------------------------------------------------------------

myDslParser::PrintTextCommandContext::PrintTextCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* myDslParser::PrintTextCommandContext::VARIABLE() {
  return getToken(myDslParser::VARIABLE, 0);
}


size_t myDslParser::PrintTextCommandContext::getRuleIndex() const {
  return myDslParser::RulePrintTextCommand;
}

void myDslParser::PrintTextCommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrintTextCommand(this);
}

void myDslParser::PrintTextCommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrintTextCommand(this);
}

myDslParser::PrintTextCommandContext* myDslParser::printTextCommand() {
  PrintTextCommandContext *_localctx = _tracker.createInstance<PrintTextCommandContext>(_ctx, getState());
  enterRule(_localctx, 10, myDslParser::RulePrintTextCommand);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(77);
    match(myDslParser::T__6);
    setState(78);
    match(myDslParser::VARIABLE);
    setState(79);
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
  enterRule(_localctx, 12, myDslParser::RuleAssignementCommand);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81);
    match(myDslParser::VARIABLE);
    setState(82);
    match(myDslParser::T__7);
    setState(83);
    operation();
    setState(84);
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

myDslParser::ImageManipulationTypeContext* myDslParser::OperationContext::imageManipulationType() {
  return getRuleContext<myDslParser::ImageManipulationTypeContext>(0);
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
  enterRule(_localctx, 14, myDslParser::RuleOperation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(99);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case myDslParser::T__11:
      case myDslParser::T__12:
      case myDslParser::T__13:
      case myDslParser::T__14:
      case myDslParser::T__15:
      case myDslParser::T__21:
      case myDslParser::T__23:
      case myDslParser::T__26:
      case myDslParser::T__27:
      case myDslParser::T__28:
      case myDslParser::T__29: {
        enterOuterAlt(_localctx, 1);
        setState(88);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case myDslParser::T__11:
          case myDslParser::T__12:
          case myDslParser::T__13:
          case myDslParser::T__14:
          case myDslParser::T__15:
          case myDslParser::T__26:
          case myDslParser::T__27:
          case myDslParser::T__28:
          case myDslParser::T__29: {
            setState(86);
            operationType();
            break;
          }

          case myDslParser::T__21:
          case myDslParser::T__23: {
            setState(87);
            imageManipulationType();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(90);
        match(myDslParser::T__8);
        setState(96);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case myDslParser::VARIABLE: {
            setState(91);
            match(myDslParser::VARIABLE);
            break;
          }

          case myDslParser::T__9: {
            setState(92);
            match(myDslParser::T__9);
            setState(93);
            operation();
            setState(94);
            match(myDslParser::T__10);
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        break;
      }

      case myDslParser::T__9:
      case myDslParser::VARIABLE: {
        enterOuterAlt(_localctx, 2);
        setState(98);
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
  enterRule(_localctx, 16, myDslParser::RuleOperationType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(111);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case myDslParser::T__13:
      case myDslParser::T__14:
      case myDslParser::T__15: {
        enterOuterAlt(_localctx, 1);
        setState(101);
        blurType();
        setState(103);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == myDslParser::T__9

        || _la == myDslParser::T__16) {
          setState(102);
          antlrcpp::downCast<OperationTypeContext *>(_localctx)->blurOpts = blurOptions();
        }
        break;
      }

      case myDslParser::T__11: {
        enterOuterAlt(_localctx, 2);
        setState(105);
        match(myDslParser::T__11);
        break;
      }

      case myDslParser::T__26:
      case myDslParser::T__27:
      case myDslParser::T__28:
      case myDslParser::T__29: {
        enterOuterAlt(_localctx, 3);
        setState(106);
        thresholdType();
        setState(108);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == myDslParser::T__25) {
          setState(107);
          antlrcpp::downCast<OperationTypeContext *>(_localctx)->thresholdOpts = maxValue();
        }
        break;
      }

      case myDslParser::T__12: {
        enterOuterAlt(_localctx, 4);
        setState(110);
        match(myDslParser::T__12);
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
  enterRule(_localctx, 18, myDslParser::RuleBlurType);
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
    setState(113);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 114688) != 0))) {
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
  enterRule(_localctx, 20, myDslParser::RuleBlurOptions);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(129);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(115);
      match(myDslParser::T__16);
      setState(116);
      match(myDslParser::T__9);
      setState(117);
      antlrcpp::downCast<BlurOptionsContext *>(_localctx)->size1 = match(myDslParser::INT);
      setState(118);
      match(myDslParser::T__17);
      setState(119);
      antlrcpp::downCast<BlurOptionsContext *>(_localctx)->size2 = match(myDslParser::INT);
      setState(120);
      match(myDslParser::T__10);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(121);
      match(myDslParser::T__9);
      setState(122);
      antlrcpp::downCast<BlurOptionsContext *>(_localctx)->ksize = match(myDslParser::INT);
      setState(123);
      match(myDslParser::T__10);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(124);
      match(myDslParser::T__9);
      setState(125);
      antlrcpp::downCast<BlurOptionsContext *>(_localctx)->ksize = match(myDslParser::INT);
      setState(126);
      match(myDslParser::T__17);
      setState(127);
      antlrcpp::downCast<BlurOptionsContext *>(_localctx)->sigma = match(myDslParser::INT);
      setState(128);
      match(myDslParser::T__10);
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
  size_t startState = 22;
  enterRecursionRule(_localctx, 22, myDslParser::RuleArithmeticOperation, precedence);

    

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
    setState(137);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case myDslParser::T__9: {
        setState(132);
        match(myDslParser::T__9);
        setState(133);
        arithmeticOperation(0);
        setState(134);
        match(myDslParser::T__10);
        break;
      }

      case myDslParser::VARIABLE: {
        setState(136);
        match(myDslParser::VARIABLE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(152);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(150);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ArithmeticOperationContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleArithmeticOperation);
          setState(139);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(140);
          multOp();
          setState(141);
          arithmeticOperation(4);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ArithmeticOperationContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleArithmeticOperation);
          setState(143);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(146);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case myDslParser::T__19: {
              setState(144);
              addOp();
              break;
            }

            case myDslParser::T__20: {
              setState(145);
              subOp();
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(148);
          arithmeticOperation(3);
          break;
        }

        default:
          break;
        } 
      }
      setState(154);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
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
  enterRule(_localctx, 24, myDslParser::RuleMultOp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(155);
    match(myDslParser::T__18);
   
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
  enterRule(_localctx, 26, myDslParser::RuleAddOp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(157);
    match(myDslParser::T__19);
   
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
  enterRule(_localctx, 28, myDslParser::RuleSubOp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(159);
    match(myDslParser::T__20);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SourceContext ------------------------------------------------------------------

myDslParser::SourceContext::SourceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* myDslParser::SourceContext::VARIABLE() {
  return getToken(myDslParser::VARIABLE, 0);
}


size_t myDslParser::SourceContext::getRuleIndex() const {
  return myDslParser::RuleSource;
}

void myDslParser::SourceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSource(this);
}

void myDslParser::SourceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSource(this);
}

myDslParser::SourceContext* myDslParser::source() {
  SourceContext *_localctx = _tracker.createInstance<SourceContext>(_ctx, getState());
  enterRule(_localctx, 30, myDslParser::RuleSource);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(161);
    match(myDslParser::VARIABLE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DestContext ------------------------------------------------------------------

myDslParser::DestContext::DestContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* myDslParser::DestContext::VARIABLE() {
  return getToken(myDslParser::VARIABLE, 0);
}


size_t myDslParser::DestContext::getRuleIndex() const {
  return myDslParser::RuleDest;
}

void myDslParser::DestContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDest(this);
}

void myDslParser::DestContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDest(this);
}

myDslParser::DestContext* myDslParser::dest() {
  DestContext *_localctx = _tracker.createInstance<DestContext>(_ctx, getState());
  enterRule(_localctx, 32, myDslParser::RuleDest);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(163);
    match(myDslParser::VARIABLE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImageManipulationTypeContext ------------------------------------------------------------------

myDslParser::ImageManipulationTypeContext::ImageManipulationTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

myDslParser::ResizeOperationContext* myDslParser::ImageManipulationTypeContext::resizeOperation() {
  return getRuleContext<myDslParser::ResizeOperationContext>(0);
}

myDslParser::RotateOperationContext* myDslParser::ImageManipulationTypeContext::rotateOperation() {
  return getRuleContext<myDslParser::RotateOperationContext>(0);
}


size_t myDslParser::ImageManipulationTypeContext::getRuleIndex() const {
  return myDslParser::RuleImageManipulationType;
}

void myDslParser::ImageManipulationTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImageManipulationType(this);
}

void myDslParser::ImageManipulationTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImageManipulationType(this);
}

myDslParser::ImageManipulationTypeContext* myDslParser::imageManipulationType() {
  ImageManipulationTypeContext *_localctx = _tracker.createInstance<ImageManipulationTypeContext>(_ctx, getState());
  enterRule(_localctx, 34, myDslParser::RuleImageManipulationType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(167);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case myDslParser::T__21: {
        enterOuterAlt(_localctx, 1);
        setState(165);
        resizeOperation();
        break;
      }

      case myDslParser::T__23: {
        enterOuterAlt(_localctx, 2);
        setState(166);
        rotateOperation();
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

//----------------- ResizeOperationContext ------------------------------------------------------------------

myDslParser::ResizeOperationContext::ResizeOperationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> myDslParser::ResizeOperationContext::INT() {
  return getTokens(myDslParser::INT);
}

tree::TerminalNode* myDslParser::ResizeOperationContext::INT(size_t i) {
  return getToken(myDslParser::INT, i);
}


size_t myDslParser::ResizeOperationContext::getRuleIndex() const {
  return myDslParser::RuleResizeOperation;
}

void myDslParser::ResizeOperationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResizeOperation(this);
}

void myDslParser::ResizeOperationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResizeOperation(this);
}

myDslParser::ResizeOperationContext* myDslParser::resizeOperation() {
  ResizeOperationContext *_localctx = _tracker.createInstance<ResizeOperationContext>(_ctx, getState());
  enterRule(_localctx, 36, myDslParser::RuleResizeOperation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(169);
    match(myDslParser::T__21);
    setState(170);
    match(myDslParser::T__22);
    setState(171);
    antlrcpp::downCast<ResizeOperationContext *>(_localctx)->width = match(myDslParser::INT);
    setState(172);
    match(myDslParser::T__17);
    setState(173);
    antlrcpp::downCast<ResizeOperationContext *>(_localctx)->height = match(myDslParser::INT);
    setState(174);
    match(myDslParser::T__10);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RotateOperationContext ------------------------------------------------------------------

myDslParser::RotateOperationContext::RotateOperationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* myDslParser::RotateOperationContext::INT() {
  return getToken(myDslParser::INT, 0);
}


size_t myDslParser::RotateOperationContext::getRuleIndex() const {
  return myDslParser::RuleRotateOperation;
}

void myDslParser::RotateOperationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRotateOperation(this);
}

void myDslParser::RotateOperationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRotateOperation(this);
}

myDslParser::RotateOperationContext* myDslParser::rotateOperation() {
  RotateOperationContext *_localctx = _tracker.createInstance<RotateOperationContext>(_ctx, getState());
  enterRule(_localctx, 38, myDslParser::RuleRotateOperation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(176);
    match(myDslParser::T__23);
    setState(177);
    antlrcpp::downCast<RotateOperationContext *>(_localctx)->degrees = match(myDslParser::INT);
    setState(178);
    match(myDslParser::T__24);
   
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
  enterRule(_localctx, 40, myDslParser::RuleMaxValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(180);
    match(myDslParser::T__25);
    setState(181);
    match(myDslParser::T__7);
    setState(182);
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
  enterRule(_localctx, 42, myDslParser::RuleThresholdType);
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
    setState(184);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2013265920) != 0))) {
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
  enterRule(_localctx, 44, myDslParser::RuleOptions);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(194);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(186);
      match(myDslParser::T__9);
      setState(187);
      antlrcpp::downCast<OptionsContext *>(_localctx)->size = match(myDslParser::INT);
      setState(188);
      match(myDslParser::T__17);
      setState(189);
      antlrcpp::downCast<OptionsContext *>(_localctx)->sigma = match(myDslParser::FLOAT);
      setState(190);
      match(myDslParser::T__10);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(191);
      match(myDslParser::T__9);
      setState(192);
      antlrcpp::downCast<OptionsContext *>(_localctx)->size = match(myDslParser::INT);
      setState(193);
      match(myDslParser::T__10);
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
    case 11: return arithmeticOperationSempred(antlrcpp::downCast<ArithmeticOperationContext *>(context), predicateIndex);

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
