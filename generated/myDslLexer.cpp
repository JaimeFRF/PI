
// Generated from myDsl.g4 by ANTLR 4.13.1


#include "myDslLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct MyDslLexerStaticData final {
  MyDslLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MyDslLexerStaticData(const MyDslLexerStaticData&) = delete;
  MyDslLexerStaticData(MyDslLexerStaticData&&) = delete;
  MyDslLexerStaticData& operator=(const MyDslLexerStaticData&) = delete;
  MyDslLexerStaticData& operator=(MyDslLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag mydsllexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
MyDslLexerStaticData *mydsllexerLexerStaticData = nullptr;

void mydsllexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (mydsllexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(mydsllexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<MyDslLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "T__13", "STRING", "ESC", "INT", 
      "FLOAT", "WS", "VARIABLE"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,19,170,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,1,0,1,0,1,0,1,
  	0,1,0,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,5,1,5,
  	1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,
  	7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,
  	1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,11,
  	1,11,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,14,
  	1,14,1,14,5,14,131,8,14,10,14,12,14,134,9,14,1,14,1,14,1,15,1,15,1,15,
  	1,16,4,16,142,8,16,11,16,12,16,143,1,17,4,17,147,8,17,11,17,12,17,148,
  	1,17,1,17,4,17,153,8,17,11,17,12,17,154,1,18,4,18,158,8,18,11,18,12,18,
  	159,1,18,1,18,1,19,1,19,5,19,166,8,19,10,19,12,19,169,9,19,1,132,0,20,
  	1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,
  	29,15,31,0,33,16,35,17,37,18,39,19,1,0,4,1,0,48,57,3,0,9,10,13,13,32,
  	32,2,0,65,90,97,122,3,0,48,57,65,90,97,122,175,0,1,1,0,0,0,0,3,1,0,0,
  	0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,
  	1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,
  	0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,
  	0,39,1,0,0,0,1,41,1,0,0,0,3,46,1,0,0,0,5,51,1,0,0,0,7,53,1,0,0,0,9,58,
  	1,0,0,0,11,60,1,0,0,0,13,63,1,0,0,0,15,76,1,0,0,0,17,90,1,0,0,0,19,101,
  	1,0,0,0,21,111,1,0,0,0,23,113,1,0,0,0,25,115,1,0,0,0,27,117,1,0,0,0,29,
  	127,1,0,0,0,31,137,1,0,0,0,33,141,1,0,0,0,35,146,1,0,0,0,37,157,1,0,0,
  	0,39,163,1,0,0,0,41,42,5,108,0,0,42,43,5,111,0,0,43,44,5,97,0,0,44,45,
  	5,100,0,0,45,2,1,0,0,0,46,47,5,102,0,0,47,48,5,114,0,0,48,49,5,111,0,
  	0,49,50,5,109,0,0,50,4,1,0,0,0,51,52,5,59,0,0,52,6,1,0,0,0,53,54,5,115,
  	0,0,54,55,5,104,0,0,55,56,5,111,0,0,56,57,5,119,0,0,57,8,1,0,0,0,58,59,
  	5,61,0,0,59,10,1,0,0,0,60,61,5,111,0,0,61,62,5,110,0,0,62,12,1,0,0,0,
  	63,64,5,103,0,0,64,65,5,97,0,0,65,66,5,117,0,0,66,67,5,115,0,0,67,68,
  	5,115,0,0,68,69,5,105,0,0,69,70,5,97,0,0,70,71,5,110,0,0,71,72,5,66,0,
  	0,72,73,5,108,0,0,73,74,5,117,0,0,74,75,5,114,0,0,75,14,1,0,0,0,76,77,
  	5,98,0,0,77,78,5,105,0,0,78,79,5,108,0,0,79,80,5,97,0,0,80,81,5,116,0,
  	0,81,82,5,101,0,0,82,83,5,114,0,0,83,84,5,97,0,0,84,85,5,108,0,0,85,86,
  	5,66,0,0,86,87,5,108,0,0,87,88,5,117,0,0,88,89,5,114,0,0,89,16,1,0,0,
  	0,90,91,5,109,0,0,91,92,5,101,0,0,92,93,5,100,0,0,93,94,5,105,0,0,94,
  	95,5,97,0,0,95,96,5,110,0,0,96,97,5,66,0,0,97,98,5,108,0,0,98,99,5,117,
  	0,0,99,100,5,114,0,0,100,18,1,0,0,0,101,102,5,119,0,0,102,103,5,105,0,
  	0,103,104,5,116,0,0,104,105,5,104,0,0,105,106,5,32,0,0,106,107,5,115,
  	0,0,107,108,5,105,0,0,108,109,5,122,0,0,109,110,5,101,0,0,110,20,1,0,
  	0,0,111,112,5,40,0,0,112,22,1,0,0,0,113,114,5,44,0,0,114,24,1,0,0,0,115,
  	116,5,41,0,0,116,26,1,0,0,0,117,118,5,116,0,0,118,119,5,104,0,0,119,120,
  	5,114,0,0,120,121,5,101,0,0,121,122,5,115,0,0,122,123,5,104,0,0,123,124,
  	5,111,0,0,124,125,5,108,0,0,125,126,5,100,0,0,126,28,1,0,0,0,127,132,
  	5,34,0,0,128,131,3,31,15,0,129,131,9,0,0,0,130,128,1,0,0,0,130,129,1,
  	0,0,0,131,134,1,0,0,0,132,133,1,0,0,0,132,130,1,0,0,0,133,135,1,0,0,0,
  	134,132,1,0,0,0,135,136,5,34,0,0,136,30,1,0,0,0,137,138,5,92,0,0,138,
  	139,9,0,0,0,139,32,1,0,0,0,140,142,7,0,0,0,141,140,1,0,0,0,142,143,1,
  	0,0,0,143,141,1,0,0,0,143,144,1,0,0,0,144,34,1,0,0,0,145,147,7,0,0,0,
  	146,145,1,0,0,0,147,148,1,0,0,0,148,146,1,0,0,0,148,149,1,0,0,0,149,150,
  	1,0,0,0,150,152,5,46,0,0,151,153,7,0,0,0,152,151,1,0,0,0,153,154,1,0,
  	0,0,154,152,1,0,0,0,154,155,1,0,0,0,155,36,1,0,0,0,156,158,7,1,0,0,157,
  	156,1,0,0,0,158,159,1,0,0,0,159,157,1,0,0,0,159,160,1,0,0,0,160,161,1,
  	0,0,0,161,162,6,18,0,0,162,38,1,0,0,0,163,167,7,2,0,0,164,166,7,3,0,0,
  	165,164,1,0,0,0,166,169,1,0,0,0,167,165,1,0,0,0,167,168,1,0,0,0,168,40,
  	1,0,0,0,169,167,1,0,0,0,8,0,130,132,143,148,154,159,167,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  mydsllexerLexerStaticData = staticData.release();
}

}

myDslLexer::myDslLexer(CharStream *input) : Lexer(input) {
  myDslLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *mydsllexerLexerStaticData->atn, mydsllexerLexerStaticData->decisionToDFA, mydsllexerLexerStaticData->sharedContextCache);
}

myDslLexer::~myDslLexer() {
  delete _interpreter;
}

std::string myDslLexer::getGrammarFileName() const {
  return "myDsl.g4";
}

const std::vector<std::string>& myDslLexer::getRuleNames() const {
  return mydsllexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& myDslLexer::getChannelNames() const {
  return mydsllexerLexerStaticData->channelNames;
}

const std::vector<std::string>& myDslLexer::getModeNames() const {
  return mydsllexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& myDslLexer::getVocabulary() const {
  return mydsllexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView myDslLexer::getSerializedATN() const {
  return mydsllexerLexerStaticData->serializedATN;
}

const atn::ATN& myDslLexer::getATN() const {
  return *mydsllexerLexerStaticData->atn;
}




void myDslLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  mydsllexerLexerInitialize();
#else
  ::antlr4::internal::call_once(mydsllexerLexerOnceFlag, mydsllexerLexerInitialize);
#endif
}
