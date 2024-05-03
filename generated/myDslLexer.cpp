
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
      "T__17", "T__18", "T__19", "T__20", "T__21", "T__22", "T__23", "T__24", 
      "T__25", "STRING", "ESC", "INT", "FLOAT", "WS", "VARIABLE"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,31,308,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,
  	1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,3,1,3,1,4,1,4,1,4,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,8,1,8,1,
  	8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,
  	1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,
  	10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,12,1,12,1,
  	13,1,13,1,14,1,14,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,17,1,
  	17,1,17,1,17,1,17,1,17,1,17,1,18,1,18,1,19,1,19,1,20,1,20,1,20,1,21,1,
  	21,1,21,1,21,1,21,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,
  	22,1,22,1,22,1,22,1,22,1,22,1,22,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,
  	23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,
  	24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,
  	24,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,
  	25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,26,1,
  	26,1,26,5,26,269,8,26,10,26,12,26,272,9,26,1,26,1,26,1,27,1,27,1,27,1,
  	28,4,28,280,8,28,11,28,12,28,281,1,29,4,29,285,8,29,11,29,12,29,286,1,
  	29,1,29,4,29,291,8,29,11,29,12,29,292,1,30,4,30,296,8,30,11,30,12,30,
  	297,1,30,1,30,1,31,1,31,5,31,304,8,31,10,31,12,31,307,9,31,1,270,0,32,
  	1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,
  	29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,
  	26,53,27,55,0,57,28,59,29,61,30,63,31,1,0,4,1,0,48,57,3,0,9,10,13,13,
  	32,32,2,0,65,90,97,122,3,0,48,57,65,90,97,122,313,0,1,1,0,0,0,0,3,1,0,
  	0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,
  	1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,
  	0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,
  	0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,
  	1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,57,1,0,0,0,0,59,1,0,
  	0,0,0,61,1,0,0,0,0,63,1,0,0,0,1,65,1,0,0,0,3,70,1,0,0,0,5,75,1,0,0,0,
  	7,91,1,0,0,0,9,93,1,0,0,0,11,96,1,0,0,0,13,98,1,0,0,0,15,104,1,0,0,0,
  	17,106,1,0,0,0,19,119,1,0,0,0,21,128,1,0,0,0,23,141,1,0,0,0,25,152,1,
  	0,0,0,27,154,1,0,0,0,29,156,1,0,0,0,31,158,1,0,0,0,33,160,1,0,0,0,35,
  	167,1,0,0,0,37,174,1,0,0,0,39,176,1,0,0,0,41,178,1,0,0,0,43,181,1,0,0,
  	0,45,186,1,0,0,0,47,203,1,0,0,0,49,224,1,0,0,0,51,239,1,0,0,0,53,265,
  	1,0,0,0,55,275,1,0,0,0,57,279,1,0,0,0,59,284,1,0,0,0,61,295,1,0,0,0,63,
  	301,1,0,0,0,65,66,5,108,0,0,66,67,5,111,0,0,67,68,5,97,0,0,68,69,5,100,
  	0,0,69,2,1,0,0,0,70,71,5,115,0,0,71,72,5,104,0,0,72,73,5,111,0,0,73,74,
  	5,119,0,0,74,4,1,0,0,0,75,76,5,116,0,0,76,77,5,101,0,0,77,78,5,120,0,
  	0,78,79,5,116,0,0,79,80,5,82,0,0,80,81,5,101,0,0,81,82,5,99,0,0,82,83,
  	5,111,0,0,83,84,5,103,0,0,84,85,5,110,0,0,85,86,5,105,0,0,86,87,5,116,
  	0,0,87,88,5,105,0,0,88,89,5,111,0,0,89,90,5,110,0,0,90,6,1,0,0,0,91,92,
  	5,40,0,0,92,8,1,0,0,0,93,94,5,62,0,0,94,95,5,62,0,0,95,10,1,0,0,0,96,
  	97,5,41,0,0,97,12,1,0,0,0,98,99,5,112,0,0,99,100,5,114,0,0,100,101,5,
  	105,0,0,101,102,5,110,0,0,102,103,5,116,0,0,103,14,1,0,0,0,104,105,5,
  	61,0,0,105,16,1,0,0,0,106,107,5,98,0,0,107,108,5,105,0,0,108,109,5,110,
  	0,0,109,110,5,97,0,0,110,111,5,114,0,0,111,112,5,105,0,0,112,113,5,122,
  	0,0,113,114,5,97,0,0,114,115,5,116,0,0,115,116,5,105,0,0,116,117,5,111,
  	0,0,117,118,5,110,0,0,118,18,1,0,0,0,119,120,5,99,0,0,120,121,5,111,0,
  	0,121,122,5,117,0,0,122,123,5,110,0,0,123,124,5,116,0,0,124,125,5,111,
  	0,0,125,126,5,114,0,0,126,127,5,115,0,0,127,20,1,0,0,0,128,129,5,103,
  	0,0,129,130,5,97,0,0,130,131,5,117,0,0,131,132,5,115,0,0,132,133,5,115,
  	0,0,133,134,5,105,0,0,134,135,5,97,0,0,135,136,5,110,0,0,136,137,5,66,
  	0,0,137,138,5,108,0,0,138,139,5,117,0,0,139,140,5,114,0,0,140,22,1,0,
  	0,0,141,142,5,109,0,0,142,143,5,101,0,0,143,144,5,100,0,0,144,145,5,105,
  	0,0,145,146,5,97,0,0,146,147,5,110,0,0,147,148,5,66,0,0,148,149,5,108,
  	0,0,149,150,5,117,0,0,150,151,5,114,0,0,151,24,1,0,0,0,152,153,5,44,0,
  	0,153,26,1,0,0,0,154,155,5,42,0,0,155,28,1,0,0,0,156,157,5,43,0,0,157,
  	30,1,0,0,0,158,159,5,45,0,0,159,32,1,0,0,0,160,161,5,114,0,0,161,162,
  	5,101,0,0,162,163,5,115,0,0,163,164,5,105,0,0,164,165,5,122,0,0,165,166,
  	5,101,0,0,166,34,1,0,0,0,167,168,5,114,0,0,168,169,5,111,0,0,169,170,
  	5,116,0,0,170,171,5,97,0,0,171,172,5,116,0,0,172,173,5,101,0,0,173,36,
  	1,0,0,0,174,175,5,91,0,0,175,38,1,0,0,0,176,177,5,93,0,0,177,40,1,0,0,
  	0,178,179,5,33,0,0,179,180,5,33,0,0,180,42,1,0,0,0,181,182,5,108,0,0,
  	182,183,5,111,0,0,183,184,5,111,0,0,184,185,5,112,0,0,185,44,1,0,0,0,
  	186,187,5,98,0,0,187,188,5,105,0,0,188,189,5,110,0,0,189,190,5,97,0,0,
  	190,191,5,114,0,0,191,192,5,121,0,0,192,193,5,95,0,0,193,194,5,116,0,
  	0,194,195,5,104,0,0,195,196,5,114,0,0,196,197,5,101,0,0,197,198,5,115,
  	0,0,198,199,5,104,0,0,199,200,5,111,0,0,200,201,5,108,0,0,201,202,5,100,
  	0,0,202,46,1,0,0,0,203,204,5,98,0,0,204,205,5,105,0,0,205,206,5,110,0,
  	0,206,207,5,97,0,0,207,208,5,114,0,0,208,209,5,121,0,0,209,210,5,95,0,
  	0,210,211,5,105,0,0,211,212,5,110,0,0,212,213,5,118,0,0,213,214,5,95,
  	0,0,214,215,5,116,0,0,215,216,5,104,0,0,216,217,5,114,0,0,217,218,5,101,
  	0,0,218,219,5,115,0,0,219,220,5,104,0,0,220,221,5,111,0,0,221,222,5,108,
  	0,0,222,223,5,100,0,0,223,48,1,0,0,0,224,225,5,111,0,0,225,226,5,116,
  	0,0,226,227,5,115,0,0,227,228,5,117,0,0,228,229,5,95,0,0,229,230,5,116,
  	0,0,230,231,5,104,0,0,231,232,5,114,0,0,232,233,5,101,0,0,233,234,5,115,
  	0,0,234,235,5,104,0,0,235,236,5,111,0,0,236,237,5,108,0,0,237,238,5,100,
  	0,0,238,50,1,0,0,0,239,240,5,111,0,0,240,241,5,116,0,0,241,242,5,115,
  	0,0,242,243,5,117,0,0,243,244,5,95,0,0,244,245,5,98,0,0,245,246,5,105,
  	0,0,246,247,5,110,0,0,247,248,5,97,0,0,248,249,5,114,0,0,249,250,5,121,
  	0,0,250,251,5,95,0,0,251,252,5,105,0,0,252,253,5,110,0,0,253,254,5,118,
  	0,0,254,255,5,95,0,0,255,256,5,116,0,0,256,257,5,104,0,0,257,258,5,114,
  	0,0,258,259,5,101,0,0,259,260,5,115,0,0,260,261,5,104,0,0,261,262,5,111,
  	0,0,262,263,5,108,0,0,263,264,5,100,0,0,264,52,1,0,0,0,265,270,5,34,0,
  	0,266,269,3,55,27,0,267,269,9,0,0,0,268,266,1,0,0,0,268,267,1,0,0,0,269,
  	272,1,0,0,0,270,271,1,0,0,0,270,268,1,0,0,0,271,273,1,0,0,0,272,270,1,
  	0,0,0,273,274,5,34,0,0,274,54,1,0,0,0,275,276,5,92,0,0,276,277,9,0,0,
  	0,277,56,1,0,0,0,278,280,7,0,0,0,279,278,1,0,0,0,280,281,1,0,0,0,281,
  	279,1,0,0,0,281,282,1,0,0,0,282,58,1,0,0,0,283,285,7,0,0,0,284,283,1,
  	0,0,0,285,286,1,0,0,0,286,284,1,0,0,0,286,287,1,0,0,0,287,288,1,0,0,0,
  	288,290,5,46,0,0,289,291,7,0,0,0,290,289,1,0,0,0,291,292,1,0,0,0,292,
  	290,1,0,0,0,292,293,1,0,0,0,293,60,1,0,0,0,294,296,7,1,0,0,295,294,1,
  	0,0,0,296,297,1,0,0,0,297,295,1,0,0,0,297,298,1,0,0,0,298,299,1,0,0,0,
  	299,300,6,30,0,0,300,62,1,0,0,0,301,305,7,2,0,0,302,304,7,3,0,0,303,302,
  	1,0,0,0,304,307,1,0,0,0,305,303,1,0,0,0,305,306,1,0,0,0,306,64,1,0,0,
  	0,307,305,1,0,0,0,8,0,268,270,281,286,292,297,305,1,6,0,0
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
