
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
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
      "T__17", "T__18", "T__19", "T__20", "T__21", "T__22", "STRING", "ESC", 
      "INT", "FLOAT", "WS", "VARIABLE"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,28,294,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,3,1,3,1,3,1,3,
  	1,3,1,4,1,4,1,5,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,
  	8,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,
  	10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,
  	11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,
  	12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,13,1,
  	13,1,13,1,13,1,13,1,14,1,14,1,15,1,15,1,16,1,16,1,17,1,17,1,18,1,18,1,
  	18,1,18,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,
  	19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,20,1,20,1,20,1,20,1,
  	20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,
  	20,1,20,1,20,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,
  	21,1,21,1,21,1,21,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,
  	22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,
  	22,1,22,1,23,1,23,1,23,5,23,255,8,23,10,23,12,23,258,9,23,1,23,1,23,1,
  	24,1,24,1,24,1,25,4,25,266,8,25,11,25,12,25,267,1,26,4,26,271,8,26,11,
  	26,12,26,272,1,26,1,26,4,26,277,8,26,11,26,12,26,278,1,27,4,27,282,8,
  	27,11,27,12,27,283,1,27,1,27,1,28,1,28,5,28,290,8,28,10,28,12,28,293,
  	9,28,1,256,0,29,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,
  	12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,
  	47,24,49,0,51,25,53,26,55,27,57,28,1,0,4,1,0,48,57,3,0,9,10,13,13,32,
  	32,2,0,65,90,97,122,3,0,48,57,65,90,97,122,299,0,1,1,0,0,0,0,3,1,0,0,
  	0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,
  	1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,
  	0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,
  	0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,
  	1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,1,59,1,0,
  	0,0,3,64,1,0,0,0,5,69,1,0,0,0,7,71,1,0,0,0,9,76,1,0,0,0,11,78,1,0,0,0,
  	13,81,1,0,0,0,15,83,1,0,0,0,17,85,1,0,0,0,19,98,1,0,0,0,21,107,1,0,0,
  	0,23,120,1,0,0,0,25,134,1,0,0,0,27,145,1,0,0,0,29,155,1,0,0,0,31,157,
  	1,0,0,0,33,159,1,0,0,0,35,161,1,0,0,0,37,163,1,0,0,0,39,172,1,0,0,0,41,
  	189,1,0,0,0,43,210,1,0,0,0,45,225,1,0,0,0,47,251,1,0,0,0,49,261,1,0,0,
  	0,51,265,1,0,0,0,53,270,1,0,0,0,55,281,1,0,0,0,57,287,1,0,0,0,59,60,5,
  	108,0,0,60,61,5,111,0,0,61,62,5,97,0,0,62,63,5,100,0,0,63,2,1,0,0,0,64,
  	65,5,102,0,0,65,66,5,114,0,0,66,67,5,111,0,0,67,68,5,109,0,0,68,4,1,0,
  	0,0,69,70,5,59,0,0,70,6,1,0,0,0,71,72,5,115,0,0,72,73,5,104,0,0,73,74,
  	5,111,0,0,74,75,5,119,0,0,75,8,1,0,0,0,76,77,5,61,0,0,77,10,1,0,0,0,78,
  	79,5,111,0,0,79,80,5,110,0,0,80,12,1,0,0,0,81,82,5,40,0,0,82,14,1,0,0,
  	0,83,84,5,41,0,0,84,16,1,0,0,0,85,86,5,98,0,0,86,87,5,105,0,0,87,88,5,
  	110,0,0,88,89,5,97,0,0,89,90,5,114,0,0,90,91,5,105,0,0,91,92,5,122,0,
  	0,92,93,5,97,0,0,93,94,5,116,0,0,94,95,5,105,0,0,95,96,5,111,0,0,96,97,
  	5,110,0,0,97,18,1,0,0,0,98,99,5,99,0,0,99,100,5,111,0,0,100,101,5,117,
  	0,0,101,102,5,110,0,0,102,103,5,116,0,0,103,104,5,111,0,0,104,105,5,114,
  	0,0,105,106,5,115,0,0,106,20,1,0,0,0,107,108,5,103,0,0,108,109,5,97,0,
  	0,109,110,5,117,0,0,110,111,5,115,0,0,111,112,5,115,0,0,112,113,5,105,
  	0,0,113,114,5,97,0,0,114,115,5,110,0,0,115,116,5,66,0,0,116,117,5,108,
  	0,0,117,118,5,117,0,0,118,119,5,114,0,0,119,22,1,0,0,0,120,121,5,98,0,
  	0,121,122,5,105,0,0,122,123,5,108,0,0,123,124,5,97,0,0,124,125,5,116,
  	0,0,125,126,5,101,0,0,126,127,5,114,0,0,127,128,5,97,0,0,128,129,5,108,
  	0,0,129,130,5,66,0,0,130,131,5,108,0,0,131,132,5,117,0,0,132,133,5,114,
  	0,0,133,24,1,0,0,0,134,135,5,109,0,0,135,136,5,101,0,0,136,137,5,100,
  	0,0,137,138,5,105,0,0,138,139,5,97,0,0,139,140,5,110,0,0,140,141,5,66,
  	0,0,141,142,5,108,0,0,142,143,5,117,0,0,143,144,5,114,0,0,144,26,1,0,
  	0,0,145,146,5,119,0,0,146,147,5,105,0,0,147,148,5,116,0,0,148,149,5,104,
  	0,0,149,150,5,32,0,0,150,151,5,115,0,0,151,152,5,105,0,0,152,153,5,122,
  	0,0,153,154,5,101,0,0,154,28,1,0,0,0,155,156,5,44,0,0,156,30,1,0,0,0,
  	157,158,5,42,0,0,158,32,1,0,0,0,159,160,5,43,0,0,160,34,1,0,0,0,161,162,
  	5,45,0,0,162,36,1,0,0,0,163,164,5,109,0,0,164,165,5,97,0,0,165,166,5,
  	120,0,0,166,167,5,86,0,0,167,168,5,97,0,0,168,169,5,108,0,0,169,170,5,
  	117,0,0,170,171,5,101,0,0,171,38,1,0,0,0,172,173,5,98,0,0,173,174,5,105,
  	0,0,174,175,5,110,0,0,175,176,5,97,0,0,176,177,5,114,0,0,177,178,5,121,
  	0,0,178,179,5,95,0,0,179,180,5,116,0,0,180,181,5,104,0,0,181,182,5,114,
  	0,0,182,183,5,101,0,0,183,184,5,115,0,0,184,185,5,104,0,0,185,186,5,111,
  	0,0,186,187,5,108,0,0,187,188,5,100,0,0,188,40,1,0,0,0,189,190,5,98,0,
  	0,190,191,5,105,0,0,191,192,5,110,0,0,192,193,5,97,0,0,193,194,5,114,
  	0,0,194,195,5,121,0,0,195,196,5,95,0,0,196,197,5,105,0,0,197,198,5,110,
  	0,0,198,199,5,118,0,0,199,200,5,95,0,0,200,201,5,116,0,0,201,202,5,104,
  	0,0,202,203,5,114,0,0,203,204,5,101,0,0,204,205,5,115,0,0,205,206,5,104,
  	0,0,206,207,5,111,0,0,207,208,5,108,0,0,208,209,5,100,0,0,209,42,1,0,
  	0,0,210,211,5,111,0,0,211,212,5,116,0,0,212,213,5,115,0,0,213,214,5,117,
  	0,0,214,215,5,95,0,0,215,216,5,116,0,0,216,217,5,104,0,0,217,218,5,114,
  	0,0,218,219,5,101,0,0,219,220,5,115,0,0,220,221,5,104,0,0,221,222,5,111,
  	0,0,222,223,5,108,0,0,223,224,5,100,0,0,224,44,1,0,0,0,225,226,5,111,
  	0,0,226,227,5,116,0,0,227,228,5,115,0,0,228,229,5,117,0,0,229,230,5,95,
  	0,0,230,231,5,98,0,0,231,232,5,105,0,0,232,233,5,110,0,0,233,234,5,97,
  	0,0,234,235,5,114,0,0,235,236,5,121,0,0,236,237,5,95,0,0,237,238,5,105,
  	0,0,238,239,5,110,0,0,239,240,5,118,0,0,240,241,5,95,0,0,241,242,5,116,
  	0,0,242,243,5,104,0,0,243,244,5,114,0,0,244,245,5,101,0,0,245,246,5,115,
  	0,0,246,247,5,104,0,0,247,248,5,111,0,0,248,249,5,108,0,0,249,250,5,100,
  	0,0,250,46,1,0,0,0,251,256,5,34,0,0,252,255,3,49,24,0,253,255,9,0,0,0,
  	254,252,1,0,0,0,254,253,1,0,0,0,255,258,1,0,0,0,256,257,1,0,0,0,256,254,
  	1,0,0,0,257,259,1,0,0,0,258,256,1,0,0,0,259,260,5,34,0,0,260,48,1,0,0,
  	0,261,262,5,92,0,0,262,263,9,0,0,0,263,50,1,0,0,0,264,266,7,0,0,0,265,
  	264,1,0,0,0,266,267,1,0,0,0,267,265,1,0,0,0,267,268,1,0,0,0,268,52,1,
  	0,0,0,269,271,7,0,0,0,270,269,1,0,0,0,271,272,1,0,0,0,272,270,1,0,0,0,
  	272,273,1,0,0,0,273,274,1,0,0,0,274,276,5,46,0,0,275,277,7,0,0,0,276,
  	275,1,0,0,0,277,278,1,0,0,0,278,276,1,0,0,0,278,279,1,0,0,0,279,54,1,
  	0,0,0,280,282,7,1,0,0,281,280,1,0,0,0,282,283,1,0,0,0,283,281,1,0,0,0,
  	283,284,1,0,0,0,284,285,1,0,0,0,285,286,6,27,0,0,286,56,1,0,0,0,287,291,
  	7,2,0,0,288,290,7,3,0,0,289,288,1,0,0,0,290,293,1,0,0,0,291,289,1,0,0,
  	0,291,292,1,0,0,0,292,58,1,0,0,0,293,291,1,0,0,0,8,0,254,256,267,272,
  	278,283,291,1,6,0,0
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
