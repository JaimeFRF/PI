
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
      "rotateOperation", "arrayDeclaration", "arrayElement", "show", "loopOperation", 
      "maxValue", "thresholdType", "options"
    },
    std::vector<std::string>{
      "", "'load'", "'show'", "'textRecognition'", "'('", "'>>'", "')'", 
      "'print'", "'='", "'binarization'", "'countors'", "'gaussianBlur'", 
      "'medianBlur'", "','", "'*'", "'+'", "'-'", "'resize'", "'rotate'", 
      "'['", "']'", "'!!'", "'loop'", "'binary_threshold'", "'binary_inv_threshold'", 
      "'otsu_threshold'", "'otsu_binary_inv_threshold'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "STRING", "INT", "FLOAT", 
      "WS", "VARIABLE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,31,230,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,1,0,5,0,56,8,0,10,
  	0,12,0,59,9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,3,1,69,8,1,1,2,1,2,1,2,
  	1,2,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,6,1,6,1,6,1,
  	6,1,6,1,6,3,6,94,8,6,1,7,1,7,3,7,98,8,7,1,7,1,7,1,7,1,7,3,7,104,8,7,1,
  	7,1,7,3,7,108,8,7,1,8,1,8,3,8,112,8,8,1,8,1,8,1,8,3,8,117,8,8,1,8,3,8,
  	120,8,8,1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,3,10,132,8,10,
  	1,11,1,11,1,11,1,11,1,11,1,11,3,11,140,8,11,1,11,1,11,1,11,1,11,1,11,
  	1,11,1,11,3,11,149,8,11,1,11,1,11,5,11,153,8,11,10,11,12,11,156,9,11,
  	1,12,1,12,1,13,1,13,1,14,1,14,1,15,1,15,1,16,1,16,1,17,1,17,3,17,170,
  	8,17,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,20,
  	1,20,1,20,1,20,5,20,188,8,20,10,20,12,20,191,9,20,3,20,193,8,20,1,20,
  	1,20,1,21,1,21,1,21,1,21,1,22,1,22,1,23,1,23,1,23,1,23,1,23,1,23,1,23,
  	3,23,210,8,23,1,23,1,23,1,24,1,24,1,24,1,24,1,25,1,25,1,26,1,26,1,26,
  	1,26,1,26,1,26,1,26,1,26,3,26,228,8,26,1,26,0,1,22,27,0,2,4,6,8,10,12,
  	14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,0,2,1,0,11,
  	12,1,0,23,26,232,0,57,1,0,0,0,2,68,1,0,0,0,4,70,1,0,0,0,6,74,1,0,0,0,
  	8,77,1,0,0,0,10,84,1,0,0,0,12,87,1,0,0,0,14,107,1,0,0,0,16,119,1,0,0,
  	0,18,121,1,0,0,0,20,131,1,0,0,0,22,139,1,0,0,0,24,157,1,0,0,0,26,159,
  	1,0,0,0,28,161,1,0,0,0,30,163,1,0,0,0,32,165,1,0,0,0,34,169,1,0,0,0,36,
  	171,1,0,0,0,38,178,1,0,0,0,40,183,1,0,0,0,42,196,1,0,0,0,44,200,1,0,0,
  	0,46,202,1,0,0,0,48,213,1,0,0,0,50,217,1,0,0,0,52,227,1,0,0,0,54,56,3,
  	2,1,0,55,54,1,0,0,0,56,59,1,0,0,0,57,55,1,0,0,0,57,58,1,0,0,0,58,60,1,
  	0,0,0,59,57,1,0,0,0,60,61,5,0,0,1,61,1,1,0,0,0,62,69,3,4,2,0,63,69,3,
  	6,3,0,64,69,3,12,6,0,65,69,3,8,4,0,66,69,3,10,5,0,67,69,3,46,23,0,68,
  	62,1,0,0,0,68,63,1,0,0,0,68,64,1,0,0,0,68,65,1,0,0,0,68,66,1,0,0,0,68,
  	67,1,0,0,0,69,3,1,0,0,0,70,71,5,1,0,0,71,72,5,31,0,0,72,73,5,27,0,0,73,
  	5,1,0,0,0,74,75,5,2,0,0,75,76,5,31,0,0,76,7,1,0,0,0,77,78,5,3,0,0,78,
  	79,5,4,0,0,79,80,3,30,15,0,80,81,5,5,0,0,81,82,3,32,16,0,82,83,5,6,0,
  	0,83,9,1,0,0,0,84,85,5,7,0,0,85,86,5,31,0,0,86,11,1,0,0,0,87,88,5,31,
  	0,0,88,93,5,8,0,0,89,94,3,14,7,0,90,94,3,40,20,0,91,94,1,0,0,0,92,94,
  	3,42,21,0,93,89,1,0,0,0,93,90,1,0,0,0,93,91,1,0,0,0,93,92,1,0,0,0,94,
  	13,1,0,0,0,95,98,3,16,8,0,96,98,3,34,17,0,97,95,1,0,0,0,97,96,1,0,0,0,
  	98,99,1,0,0,0,99,103,5,5,0,0,100,104,5,31,0,0,101,104,3,14,7,0,102,104,
  	3,42,21,0,103,100,1,0,0,0,103,101,1,0,0,0,103,102,1,0,0,0,104,108,1,0,
  	0,0,105,108,3,22,11,0,106,108,3,46,23,0,107,97,1,0,0,0,107,105,1,0,0,
  	0,107,106,1,0,0,0,108,15,1,0,0,0,109,111,3,18,9,0,110,112,3,20,10,0,111,
  	110,1,0,0,0,111,112,1,0,0,0,112,120,1,0,0,0,113,120,5,9,0,0,114,116,3,
  	50,25,0,115,117,3,48,24,0,116,115,1,0,0,0,116,117,1,0,0,0,117,120,1,0,
  	0,0,118,120,5,10,0,0,119,109,1,0,0,0,119,113,1,0,0,0,119,114,1,0,0,0,
  	119,118,1,0,0,0,120,17,1,0,0,0,121,122,7,0,0,0,122,19,1,0,0,0,123,124,
  	5,4,0,0,124,125,5,28,0,0,125,126,5,13,0,0,126,127,5,28,0,0,127,132,5,
  	6,0,0,128,129,5,4,0,0,129,130,5,28,0,0,130,132,5,6,0,0,131,123,1,0,0,
  	0,131,128,1,0,0,0,132,21,1,0,0,0,133,134,6,11,-1,0,134,135,5,4,0,0,135,
  	136,3,22,11,0,136,137,5,6,0,0,137,140,1,0,0,0,138,140,5,31,0,0,139,133,
  	1,0,0,0,139,138,1,0,0,0,140,154,1,0,0,0,141,142,10,3,0,0,142,143,3,24,
  	12,0,143,144,3,22,11,4,144,153,1,0,0,0,145,148,10,2,0,0,146,149,3,26,
  	13,0,147,149,3,28,14,0,148,146,1,0,0,0,148,147,1,0,0,0,149,150,1,0,0,
  	0,150,151,3,22,11,3,151,153,1,0,0,0,152,141,1,0,0,0,152,145,1,0,0,0,153,
  	156,1,0,0,0,154,152,1,0,0,0,154,155,1,0,0,0,155,23,1,0,0,0,156,154,1,
  	0,0,0,157,158,5,14,0,0,158,25,1,0,0,0,159,160,5,15,0,0,160,27,1,0,0,0,
  	161,162,5,16,0,0,162,29,1,0,0,0,163,164,5,31,0,0,164,31,1,0,0,0,165,166,
  	5,31,0,0,166,33,1,0,0,0,167,170,3,36,18,0,168,170,3,38,19,0,169,167,1,
  	0,0,0,169,168,1,0,0,0,170,35,1,0,0,0,171,172,5,17,0,0,172,173,5,4,0,0,
  	173,174,5,28,0,0,174,175,5,13,0,0,175,176,5,28,0,0,176,177,5,6,0,0,177,
  	37,1,0,0,0,178,179,5,18,0,0,179,180,5,4,0,0,180,181,5,28,0,0,181,182,
  	5,6,0,0,182,39,1,0,0,0,183,192,5,19,0,0,184,189,5,31,0,0,185,186,5,13,
  	0,0,186,188,5,31,0,0,187,185,1,0,0,0,188,191,1,0,0,0,189,187,1,0,0,0,
  	189,190,1,0,0,0,190,193,1,0,0,0,191,189,1,0,0,0,192,184,1,0,0,0,192,193,
  	1,0,0,0,193,194,1,0,0,0,194,195,5,20,0,0,195,41,1,0,0,0,196,197,5,31,
  	0,0,197,198,5,21,0,0,198,199,5,28,0,0,199,43,1,0,0,0,200,201,5,2,0,0,
  	201,45,1,0,0,0,202,203,5,22,0,0,203,204,5,4,0,0,204,205,5,31,0,0,205,
  	209,5,13,0,0,206,210,3,16,8,0,207,210,3,34,17,0,208,210,3,44,22,0,209,
  	206,1,0,0,0,209,207,1,0,0,0,209,208,1,0,0,0,210,211,1,0,0,0,211,212,5,
  	6,0,0,212,47,1,0,0,0,213,214,5,4,0,0,214,215,5,28,0,0,215,216,5,6,0,0,
  	216,49,1,0,0,0,217,218,7,1,0,0,218,51,1,0,0,0,219,220,5,4,0,0,220,221,
  	5,28,0,0,221,222,5,13,0,0,222,223,5,29,0,0,223,228,5,6,0,0,224,225,5,
  	4,0,0,225,226,5,28,0,0,226,228,5,6,0,0,227,219,1,0,0,0,227,224,1,0,0,
  	0,228,53,1,0,0,0,19,57,68,93,97,103,107,111,116,119,131,139,148,152,154,
  	169,189,192,209,227
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
    setState(57);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2151678094) != 0)) {
      setState(54);
      command();
      setState(59);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(60);
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

myDslParser::LoopOperationContext* myDslParser::CommandContext::loopOperation() {
  return getRuleContext<myDslParser::LoopOperationContext>(0);
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
    setState(68);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case myDslParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(62);
        loadImageCommand();
        break;
      }

      case myDslParser::T__1: {
        enterOuterAlt(_localctx, 2);
        setState(63);
        showImageCommand();
        break;
      }

      case myDslParser::VARIABLE: {
        enterOuterAlt(_localctx, 3);
        setState(64);
        assignementCommand();
        break;
      }

      case myDslParser::T__2: {
        enterOuterAlt(_localctx, 4);
        setState(65);
        textRecognitionCommand();
        break;
      }

      case myDslParser::T__6: {
        enterOuterAlt(_localctx, 5);
        setState(66);
        printTextCommand();
        break;
      }

      case myDslParser::T__21: {
        enterOuterAlt(_localctx, 6);
        setState(67);
        loopOperation();
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
    setState(70);
    match(myDslParser::T__0);
    setState(71);
    match(myDslParser::VARIABLE);
    setState(72);
    antlrcpp::downCast<LoadImageCommandContext *>(_localctx)->path = match(myDslParser::STRING);
   
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
    setState(74);
    match(myDslParser::T__1);
    setState(75);
    match(myDslParser::VARIABLE);
   
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
    setState(77);
    match(myDslParser::T__2);
    setState(78);
    match(myDslParser::T__3);
    setState(79);
    source();
    setState(80);
    match(myDslParser::T__4);
    setState(81);
    dest();
    setState(82);
    match(myDslParser::T__5);
   
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
    setState(84);
    match(myDslParser::T__6);
    setState(85);
    match(myDslParser::VARIABLE);
   
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

myDslParser::ArrayDeclarationContext* myDslParser::AssignementCommandContext::arrayDeclaration() {
  return getRuleContext<myDslParser::ArrayDeclarationContext>(0);
}

myDslParser::ArrayElementContext* myDslParser::AssignementCommandContext::arrayElement() {
  return getRuleContext<myDslParser::ArrayElementContext>(0);
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
    setState(87);
    match(myDslParser::VARIABLE);
    setState(88);
    match(myDslParser::T__7);
    setState(93);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      setState(89);
      operation();
      break;
    }

    case 2: {
      setState(90);
      arrayDeclaration();
      break;
    }

    case 3: {
      break;
    }

    case 4: {
      setState(92);
      arrayElement();
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

myDslParser::ArrayElementContext* myDslParser::OperationContext::arrayElement() {
  return getRuleContext<myDslParser::ArrayElementContext>(0);
}

myDslParser::ArithmeticOperationContext* myDslParser::OperationContext::arithmeticOperation() {
  return getRuleContext<myDslParser::ArithmeticOperationContext>(0);
}

myDslParser::LoopOperationContext* myDslParser::OperationContext::loopOperation() {
  return getRuleContext<myDslParser::LoopOperationContext>(0);
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
    setState(107);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case myDslParser::T__8:
      case myDslParser::T__9:
      case myDslParser::T__10:
      case myDslParser::T__11:
      case myDslParser::T__16:
      case myDslParser::T__17:
      case myDslParser::T__22:
      case myDslParser::T__23:
      case myDslParser::T__24:
      case myDslParser::T__25: {
        enterOuterAlt(_localctx, 1);
        setState(97);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case myDslParser::T__8:
          case myDslParser::T__9:
          case myDslParser::T__10:
          case myDslParser::T__11:
          case myDslParser::T__22:
          case myDslParser::T__23:
          case myDslParser::T__24:
          case myDslParser::T__25: {
            setState(95);
            operationType();
            break;
          }

          case myDslParser::T__16:
          case myDslParser::T__17: {
            setState(96);
            imageManipulationType();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(99);
        match(myDslParser::T__4);
        setState(103);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          setState(100);
          match(myDslParser::VARIABLE);
          break;
        }

        case 2: {
          setState(101);
          operation();
          break;
        }

        case 3: {
          setState(102);
          arrayElement();
          break;
        }

        default:
          break;
        }
        break;
      }

      case myDslParser::T__3:
      case myDslParser::VARIABLE: {
        enterOuterAlt(_localctx, 2);
        setState(105);
        arithmeticOperation(0);
        break;
      }

      case myDslParser::T__21: {
        enterOuterAlt(_localctx, 3);
        setState(106);
        loopOperation();
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
    setState(119);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case myDslParser::T__10:
      case myDslParser::T__11: {
        enterOuterAlt(_localctx, 1);
        setState(109);
        blurType();
        setState(111);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == myDslParser::T__3) {
          setState(110);
          antlrcpp::downCast<OperationTypeContext *>(_localctx)->blurOpts = blurOptions();
        }
        break;
      }

      case myDslParser::T__8: {
        enterOuterAlt(_localctx, 2);
        setState(113);
        match(myDslParser::T__8);
        break;
      }

      case myDslParser::T__22:
      case myDslParser::T__23:
      case myDslParser::T__24:
      case myDslParser::T__25: {
        enterOuterAlt(_localctx, 3);
        setState(114);
        thresholdType();
        setState(116);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == myDslParser::T__3) {
          setState(115);
          antlrcpp::downCast<OperationTypeContext *>(_localctx)->thresholdOpts = maxValue();
        }
        break;
      }

      case myDslParser::T__9: {
        enterOuterAlt(_localctx, 4);
        setState(118);
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
    setState(121);
    _la = _input->LA(1);
    if (!(_la == myDslParser::T__10

    || _la == myDslParser::T__11)) {
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
    setState(131);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(123);
      match(myDslParser::T__3);
      setState(124);
      antlrcpp::downCast<BlurOptionsContext *>(_localctx)->size1 = match(myDslParser::INT);
      setState(125);
      match(myDslParser::T__12);
      setState(126);
      antlrcpp::downCast<BlurOptionsContext *>(_localctx)->size2 = match(myDslParser::INT);
      setState(127);
      match(myDslParser::T__5);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(128);
      match(myDslParser::T__3);
      setState(129);
      antlrcpp::downCast<BlurOptionsContext *>(_localctx)->ksize = match(myDslParser::INT);
      setState(130);
      match(myDslParser::T__5);
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
    setState(139);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case myDslParser::T__3: {
        setState(134);
        match(myDslParser::T__3);
        setState(135);
        arithmeticOperation(0);
        setState(136);
        match(myDslParser::T__5);
        break;
      }

      case myDslParser::VARIABLE: {
        setState(138);
        match(myDslParser::VARIABLE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(154);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(152);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ArithmeticOperationContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleArithmeticOperation);
          setState(141);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(142);
          multOp();
          setState(143);
          arithmeticOperation(4);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ArithmeticOperationContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleArithmeticOperation);
          setState(145);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(148);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case myDslParser::T__14: {
              setState(146);
              addOp();
              break;
            }

            case myDslParser::T__15: {
              setState(147);
              subOp();
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(150);
          arithmeticOperation(3);
          break;
        }

        default:
          break;
        } 
      }
      setState(156);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
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
    setState(157);
    match(myDslParser::T__13);
   
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
    setState(159);
    match(myDslParser::T__14);
   
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
    setState(161);
    match(myDslParser::T__15);
   
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
    setState(165);
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
    setState(169);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case myDslParser::T__16: {
        enterOuterAlt(_localctx, 1);
        setState(167);
        resizeOperation();
        break;
      }

      case myDslParser::T__17: {
        enterOuterAlt(_localctx, 2);
        setState(168);
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
    setState(171);
    match(myDslParser::T__16);
    setState(172);
    match(myDslParser::T__3);
    setState(173);
    antlrcpp::downCast<ResizeOperationContext *>(_localctx)->width = match(myDslParser::INT);
    setState(174);
    match(myDslParser::T__12);
    setState(175);
    antlrcpp::downCast<ResizeOperationContext *>(_localctx)->height = match(myDslParser::INT);
    setState(176);
    match(myDslParser::T__5);
   
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
    setState(178);
    match(myDslParser::T__17);
    setState(179);
    match(myDslParser::T__3);
    setState(180);
    antlrcpp::downCast<RotateOperationContext *>(_localctx)->degrees = match(myDslParser::INT);
    setState(181);
    match(myDslParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayDeclarationContext ------------------------------------------------------------------

myDslParser::ArrayDeclarationContext::ArrayDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> myDslParser::ArrayDeclarationContext::VARIABLE() {
  return getTokens(myDslParser::VARIABLE);
}

tree::TerminalNode* myDslParser::ArrayDeclarationContext::VARIABLE(size_t i) {
  return getToken(myDslParser::VARIABLE, i);
}


size_t myDslParser::ArrayDeclarationContext::getRuleIndex() const {
  return myDslParser::RuleArrayDeclaration;
}

void myDslParser::ArrayDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayDeclaration(this);
}

void myDslParser::ArrayDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayDeclaration(this);
}

myDslParser::ArrayDeclarationContext* myDslParser::arrayDeclaration() {
  ArrayDeclarationContext *_localctx = _tracker.createInstance<ArrayDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 40, myDslParser::RuleArrayDeclaration);
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
    setState(183);
    match(myDslParser::T__18);
    setState(192);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == myDslParser::VARIABLE) {
      setState(184);
      match(myDslParser::VARIABLE);
      setState(189);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == myDslParser::T__12) {
        setState(185);
        match(myDslParser::T__12);
        setState(186);
        match(myDslParser::VARIABLE);
        setState(191);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(194);
    match(myDslParser::T__19);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayElementContext ------------------------------------------------------------------

myDslParser::ArrayElementContext::ArrayElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* myDslParser::ArrayElementContext::VARIABLE() {
  return getToken(myDslParser::VARIABLE, 0);
}

tree::TerminalNode* myDslParser::ArrayElementContext::INT() {
  return getToken(myDslParser::INT, 0);
}


size_t myDslParser::ArrayElementContext::getRuleIndex() const {
  return myDslParser::RuleArrayElement;
}

void myDslParser::ArrayElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayElement(this);
}

void myDslParser::ArrayElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayElement(this);
}

myDslParser::ArrayElementContext* myDslParser::arrayElement() {
  ArrayElementContext *_localctx = _tracker.createInstance<ArrayElementContext>(_ctx, getState());
  enterRule(_localctx, 42, myDslParser::RuleArrayElement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(196);
    match(myDslParser::VARIABLE);
    setState(197);
    match(myDslParser::T__20);
    setState(198);
    match(myDslParser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShowContext ------------------------------------------------------------------

myDslParser::ShowContext::ShowContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t myDslParser::ShowContext::getRuleIndex() const {
  return myDslParser::RuleShow;
}

void myDslParser::ShowContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShow(this);
}

void myDslParser::ShowContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShow(this);
}

myDslParser::ShowContext* myDslParser::show() {
  ShowContext *_localctx = _tracker.createInstance<ShowContext>(_ctx, getState());
  enterRule(_localctx, 44, myDslParser::RuleShow);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(200);
    match(myDslParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopOperationContext ------------------------------------------------------------------

myDslParser::LoopOperationContext::LoopOperationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* myDslParser::LoopOperationContext::VARIABLE() {
  return getToken(myDslParser::VARIABLE, 0);
}

myDslParser::OperationTypeContext* myDslParser::LoopOperationContext::operationType() {
  return getRuleContext<myDslParser::OperationTypeContext>(0);
}

myDslParser::ImageManipulationTypeContext* myDslParser::LoopOperationContext::imageManipulationType() {
  return getRuleContext<myDslParser::ImageManipulationTypeContext>(0);
}

myDslParser::ShowContext* myDslParser::LoopOperationContext::show() {
  return getRuleContext<myDslParser::ShowContext>(0);
}


size_t myDslParser::LoopOperationContext::getRuleIndex() const {
  return myDslParser::RuleLoopOperation;
}

void myDslParser::LoopOperationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopOperation(this);
}

void myDslParser::LoopOperationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<myDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopOperation(this);
}

myDslParser::LoopOperationContext* myDslParser::loopOperation() {
  LoopOperationContext *_localctx = _tracker.createInstance<LoopOperationContext>(_ctx, getState());
  enterRule(_localctx, 46, myDslParser::RuleLoopOperation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(202);
    match(myDslParser::T__21);
    setState(203);
    match(myDslParser::T__3);
    setState(204);
    match(myDslParser::VARIABLE);
    setState(205);
    match(myDslParser::T__12);
    setState(209);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case myDslParser::T__8:
      case myDslParser::T__9:
      case myDslParser::T__10:
      case myDslParser::T__11:
      case myDslParser::T__22:
      case myDslParser::T__23:
      case myDslParser::T__24:
      case myDslParser::T__25: {
        setState(206);
        operationType();
        break;
      }

      case myDslParser::T__16:
      case myDslParser::T__17: {
        setState(207);
        imageManipulationType();
        break;
      }

      case myDslParser::T__1: {
        setState(208);
        show();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(211);
    match(myDslParser::T__5);
   
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
  enterRule(_localctx, 48, myDslParser::RuleMaxValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(213);
    match(myDslParser::T__3);
    setState(214);
    match(myDslParser::INT);
    setState(215);
    match(myDslParser::T__5);
   
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
  enterRule(_localctx, 50, myDslParser::RuleThresholdType);
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
    setState(217);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 125829120) != 0))) {
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
  enterRule(_localctx, 52, myDslParser::RuleOptions);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(227);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(219);
      match(myDslParser::T__3);
      setState(220);
      antlrcpp::downCast<OptionsContext *>(_localctx)->size = match(myDslParser::INT);
      setState(221);
      match(myDslParser::T__12);
      setState(222);
      antlrcpp::downCast<OptionsContext *>(_localctx)->sigma = match(myDslParser::FLOAT);
      setState(223);
      match(myDslParser::T__5);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(224);
      match(myDslParser::T__3);
      setState(225);
      antlrcpp::downCast<OptionsContext *>(_localctx)->size = match(myDslParser::INT);
      setState(226);
      match(myDslParser::T__5);
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