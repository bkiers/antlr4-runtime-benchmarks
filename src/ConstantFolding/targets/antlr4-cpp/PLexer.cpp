
// Generated from ./targets/P.g4 by ANTLR 4.13.1


#include "PLexer.h"


using namespace antlr4;

using namespace parsers;


using namespace antlr4;

namespace {

struct PLexerStaticData final {
  PLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  PLexerStaticData(const PLexerStaticData&) = delete;
  PLexerStaticData(PLexerStaticData&&) = delete;
  PLexerStaticData& operator=(const PLexerStaticData&) = delete;
  PLexerStaticData& operator=(PLexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag plexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
PLexerStaticData *plexerLexerStaticData = nullptr;

void plexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (plexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(plexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<PLexerStaticData>(
    std::vector<std::string>{
      "T0", "T1", "T2", "T3", "T4", "T5", "T6", "T7", "T8", "T9", "T10", 
      "T11", "T12", "T13", "T14", "T15", "T16", "T17", "T18", "T19", "T20", 
      "T21", "T22", "T23", "T24", "T25", "T26", "T27", "T28", "T29", "T30", 
      "T31", "T32", "T33", "T34", "T35", "T36", "T37", "T38", "T39", "T40", 
      "T41", "T42", "T43", "T44", "T45", "T46", "T47", "T48", "T49", "T50", 
      "T51", "T52", "T53", "T54", "T55", "T56", "T57", "T58", "T59", "T60", 
      "T61", "T62", "T63", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'T0'", "'T1'", "'T2'", "'T3'", "'T4'", "'T5'", "'T6'", "'T7'", 
      "'T8'", "'T9'", "'T10'", "'T11'", "'T12'", "'T13'", "'T14'", "'T15'", 
      "'T16'", "'T17'", "'T18'", "'T19'", "'T20'", "'T21'", "'T22'", "'T23'", 
      "'T24'", "'T25'", "'T26'", "'T27'", "'T28'", "'T29'", "'T30'", "'T31'", 
      "'T32'", "'T33'", "'T34'", "'T35'", "'T36'", "'T37'", "'T38'", "'T39'", 
      "'T40'", "'T41'", "'T42'", "'T43'", "'T44'", "'T45'", "'T46'", "'T47'", 
      "'T48'", "'T49'", "'T50'", "'T51'", "'T52'", "'T53'", "'T54'", "'T55'", 
      "'T56'", "'T57'", "'T58'", "'T59'", "'T60'", "'T61'", "'T62'", "'T63'"
    },
    std::vector<std::string>{
      "", "T0", "T1", "T2", "T3", "T4", "T5", "T6", "T7", "T8", "T9", "T10", 
      "T11", "T12", "T13", "T14", "T15", "T16", "T17", "T18", "T19", "T20", 
      "T21", "T22", "T23", "T24", "T25", "T26", "T27", "T28", "T29", "T30", 
      "T31", "T32", "T33", "T34", "T35", "T36", "T37", "T38", "T39", "T40", 
      "T41", "T42", "T43", "T44", "T45", "T46", "T47", "T48", "T49", "T50", 
      "T51", "T52", "T53", "T54", "T55", "T56", "T57", "T58", "T59", "T60", 
      "T61", "T62", "T63", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,65,384,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,
  	7,49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,
  	7,56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,2,61,7,61,2,62,7,62,2,63,
  	7,63,2,64,7,64,1,0,1,0,1,0,1,1,1,1,1,1,1,2,1,2,1,2,1,3,1,3,1,3,1,4,1,
  	4,1,4,1,5,1,5,1,5,1,6,1,6,1,6,1,7,1,7,1,7,1,8,1,8,1,8,1,9,1,9,1,9,1,10,
  	1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,13,1,13,1,13,
  	1,13,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,17,
  	1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,20,1,20,1,20,
  	1,20,1,21,1,21,1,21,1,21,1,22,1,22,1,22,1,22,1,23,1,23,1,23,1,23,1,24,
  	1,24,1,24,1,24,1,25,1,25,1,25,1,25,1,26,1,26,1,26,1,26,1,27,1,27,1,27,
  	1,27,1,28,1,28,1,28,1,28,1,29,1,29,1,29,1,29,1,30,1,30,1,30,1,30,1,31,
  	1,31,1,31,1,31,1,32,1,32,1,32,1,32,1,33,1,33,1,33,1,33,1,34,1,34,1,34,
  	1,34,1,35,1,35,1,35,1,35,1,36,1,36,1,36,1,36,1,37,1,37,1,37,1,37,1,38,
  	1,38,1,38,1,38,1,39,1,39,1,39,1,39,1,40,1,40,1,40,1,40,1,41,1,41,1,41,
  	1,41,1,42,1,42,1,42,1,42,1,43,1,43,1,43,1,43,1,44,1,44,1,44,1,44,1,45,
  	1,45,1,45,1,45,1,46,1,46,1,46,1,46,1,47,1,47,1,47,1,47,1,48,1,48,1,48,
  	1,48,1,49,1,49,1,49,1,49,1,50,1,50,1,50,1,50,1,51,1,51,1,51,1,51,1,52,
  	1,52,1,52,1,52,1,53,1,53,1,53,1,53,1,54,1,54,1,54,1,54,1,55,1,55,1,55,
  	1,55,1,56,1,56,1,56,1,56,1,57,1,57,1,57,1,57,1,58,1,58,1,58,1,58,1,59,
  	1,59,1,59,1,59,1,60,1,60,1,60,1,60,1,61,1,61,1,61,1,61,1,62,1,62,1,62,
  	1,62,1,63,1,63,1,63,1,63,1,64,4,64,379,8,64,11,64,12,64,380,1,64,1,64,
  	0,0,65,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,
  	27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,
  	25,51,26,53,27,55,28,57,29,59,30,61,31,63,32,65,33,67,34,69,35,71,36,
  	73,37,75,38,77,39,79,40,81,41,83,42,85,43,87,44,89,45,91,46,93,47,95,
  	48,97,49,99,50,101,51,103,52,105,53,107,54,109,55,111,56,113,57,115,58,
  	117,59,119,60,121,61,123,62,125,63,127,64,129,65,1,0,1,1,0,32,32,384,
  	0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,
  	0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,
  	0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,
  	1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,
  	0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,
  	0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,
  	1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,1,0,0,0,0,73,1,0,0,0,0,75,1,0,
  	0,0,0,77,1,0,0,0,0,79,1,0,0,0,0,81,1,0,0,0,0,83,1,0,0,0,0,85,1,0,0,0,
  	0,87,1,0,0,0,0,89,1,0,0,0,0,91,1,0,0,0,0,93,1,0,0,0,0,95,1,0,0,0,0,97,
  	1,0,0,0,0,99,1,0,0,0,0,101,1,0,0,0,0,103,1,0,0,0,0,105,1,0,0,0,0,107,
  	1,0,0,0,0,109,1,0,0,0,0,111,1,0,0,0,0,113,1,0,0,0,0,115,1,0,0,0,0,117,
  	1,0,0,0,0,119,1,0,0,0,0,121,1,0,0,0,0,123,1,0,0,0,0,125,1,0,0,0,0,127,
  	1,0,0,0,0,129,1,0,0,0,1,131,1,0,0,0,3,134,1,0,0,0,5,137,1,0,0,0,7,140,
  	1,0,0,0,9,143,1,0,0,0,11,146,1,0,0,0,13,149,1,0,0,0,15,152,1,0,0,0,17,
  	155,1,0,0,0,19,158,1,0,0,0,21,161,1,0,0,0,23,165,1,0,0,0,25,169,1,0,0,
  	0,27,173,1,0,0,0,29,177,1,0,0,0,31,181,1,0,0,0,33,185,1,0,0,0,35,189,
  	1,0,0,0,37,193,1,0,0,0,39,197,1,0,0,0,41,201,1,0,0,0,43,205,1,0,0,0,45,
  	209,1,0,0,0,47,213,1,0,0,0,49,217,1,0,0,0,51,221,1,0,0,0,53,225,1,0,0,
  	0,55,229,1,0,0,0,57,233,1,0,0,0,59,237,1,0,0,0,61,241,1,0,0,0,63,245,
  	1,0,0,0,65,249,1,0,0,0,67,253,1,0,0,0,69,257,1,0,0,0,71,261,1,0,0,0,73,
  	265,1,0,0,0,75,269,1,0,0,0,77,273,1,0,0,0,79,277,1,0,0,0,81,281,1,0,0,
  	0,83,285,1,0,0,0,85,289,1,0,0,0,87,293,1,0,0,0,89,297,1,0,0,0,91,301,
  	1,0,0,0,93,305,1,0,0,0,95,309,1,0,0,0,97,313,1,0,0,0,99,317,1,0,0,0,101,
  	321,1,0,0,0,103,325,1,0,0,0,105,329,1,0,0,0,107,333,1,0,0,0,109,337,1,
  	0,0,0,111,341,1,0,0,0,113,345,1,0,0,0,115,349,1,0,0,0,117,353,1,0,0,0,
  	119,357,1,0,0,0,121,361,1,0,0,0,123,365,1,0,0,0,125,369,1,0,0,0,127,373,
  	1,0,0,0,129,378,1,0,0,0,131,132,5,84,0,0,132,133,5,48,0,0,133,2,1,0,0,
  	0,134,135,5,84,0,0,135,136,5,49,0,0,136,4,1,0,0,0,137,138,5,84,0,0,138,
  	139,5,50,0,0,139,6,1,0,0,0,140,141,5,84,0,0,141,142,5,51,0,0,142,8,1,
  	0,0,0,143,144,5,84,0,0,144,145,5,52,0,0,145,10,1,0,0,0,146,147,5,84,0,
  	0,147,148,5,53,0,0,148,12,1,0,0,0,149,150,5,84,0,0,150,151,5,54,0,0,151,
  	14,1,0,0,0,152,153,5,84,0,0,153,154,5,55,0,0,154,16,1,0,0,0,155,156,5,
  	84,0,0,156,157,5,56,0,0,157,18,1,0,0,0,158,159,5,84,0,0,159,160,5,57,
  	0,0,160,20,1,0,0,0,161,162,5,84,0,0,162,163,5,49,0,0,163,164,5,48,0,0,
  	164,22,1,0,0,0,165,166,5,84,0,0,166,167,5,49,0,0,167,168,5,49,0,0,168,
  	24,1,0,0,0,169,170,5,84,0,0,170,171,5,49,0,0,171,172,5,50,0,0,172,26,
  	1,0,0,0,173,174,5,84,0,0,174,175,5,49,0,0,175,176,5,51,0,0,176,28,1,0,
  	0,0,177,178,5,84,0,0,178,179,5,49,0,0,179,180,5,52,0,0,180,30,1,0,0,0,
  	181,182,5,84,0,0,182,183,5,49,0,0,183,184,5,53,0,0,184,32,1,0,0,0,185,
  	186,5,84,0,0,186,187,5,49,0,0,187,188,5,54,0,0,188,34,1,0,0,0,189,190,
  	5,84,0,0,190,191,5,49,0,0,191,192,5,55,0,0,192,36,1,0,0,0,193,194,5,84,
  	0,0,194,195,5,49,0,0,195,196,5,56,0,0,196,38,1,0,0,0,197,198,5,84,0,0,
  	198,199,5,49,0,0,199,200,5,57,0,0,200,40,1,0,0,0,201,202,5,84,0,0,202,
  	203,5,50,0,0,203,204,5,48,0,0,204,42,1,0,0,0,205,206,5,84,0,0,206,207,
  	5,50,0,0,207,208,5,49,0,0,208,44,1,0,0,0,209,210,5,84,0,0,210,211,5,50,
  	0,0,211,212,5,50,0,0,212,46,1,0,0,0,213,214,5,84,0,0,214,215,5,50,0,0,
  	215,216,5,51,0,0,216,48,1,0,0,0,217,218,5,84,0,0,218,219,5,50,0,0,219,
  	220,5,52,0,0,220,50,1,0,0,0,221,222,5,84,0,0,222,223,5,50,0,0,223,224,
  	5,53,0,0,224,52,1,0,0,0,225,226,5,84,0,0,226,227,5,50,0,0,227,228,5,54,
  	0,0,228,54,1,0,0,0,229,230,5,84,0,0,230,231,5,50,0,0,231,232,5,55,0,0,
  	232,56,1,0,0,0,233,234,5,84,0,0,234,235,5,50,0,0,235,236,5,56,0,0,236,
  	58,1,0,0,0,237,238,5,84,0,0,238,239,5,50,0,0,239,240,5,57,0,0,240,60,
  	1,0,0,0,241,242,5,84,0,0,242,243,5,51,0,0,243,244,5,48,0,0,244,62,1,0,
  	0,0,245,246,5,84,0,0,246,247,5,51,0,0,247,248,5,49,0,0,248,64,1,0,0,0,
  	249,250,5,84,0,0,250,251,5,51,0,0,251,252,5,50,0,0,252,66,1,0,0,0,253,
  	254,5,84,0,0,254,255,5,51,0,0,255,256,5,51,0,0,256,68,1,0,0,0,257,258,
  	5,84,0,0,258,259,5,51,0,0,259,260,5,52,0,0,260,70,1,0,0,0,261,262,5,84,
  	0,0,262,263,5,51,0,0,263,264,5,53,0,0,264,72,1,0,0,0,265,266,5,84,0,0,
  	266,267,5,51,0,0,267,268,5,54,0,0,268,74,1,0,0,0,269,270,5,84,0,0,270,
  	271,5,51,0,0,271,272,5,55,0,0,272,76,1,0,0,0,273,274,5,84,0,0,274,275,
  	5,51,0,0,275,276,5,56,0,0,276,78,1,0,0,0,277,278,5,84,0,0,278,279,5,51,
  	0,0,279,280,5,57,0,0,280,80,1,0,0,0,281,282,5,84,0,0,282,283,5,52,0,0,
  	283,284,5,48,0,0,284,82,1,0,0,0,285,286,5,84,0,0,286,287,5,52,0,0,287,
  	288,5,49,0,0,288,84,1,0,0,0,289,290,5,84,0,0,290,291,5,52,0,0,291,292,
  	5,50,0,0,292,86,1,0,0,0,293,294,5,84,0,0,294,295,5,52,0,0,295,296,5,51,
  	0,0,296,88,1,0,0,0,297,298,5,84,0,0,298,299,5,52,0,0,299,300,5,52,0,0,
  	300,90,1,0,0,0,301,302,5,84,0,0,302,303,5,52,0,0,303,304,5,53,0,0,304,
  	92,1,0,0,0,305,306,5,84,0,0,306,307,5,52,0,0,307,308,5,54,0,0,308,94,
  	1,0,0,0,309,310,5,84,0,0,310,311,5,52,0,0,311,312,5,55,0,0,312,96,1,0,
  	0,0,313,314,5,84,0,0,314,315,5,52,0,0,315,316,5,56,0,0,316,98,1,0,0,0,
  	317,318,5,84,0,0,318,319,5,52,0,0,319,320,5,57,0,0,320,100,1,0,0,0,321,
  	322,5,84,0,0,322,323,5,53,0,0,323,324,5,48,0,0,324,102,1,0,0,0,325,326,
  	5,84,0,0,326,327,5,53,0,0,327,328,5,49,0,0,328,104,1,0,0,0,329,330,5,
  	84,0,0,330,331,5,53,0,0,331,332,5,50,0,0,332,106,1,0,0,0,333,334,5,84,
  	0,0,334,335,5,53,0,0,335,336,5,51,0,0,336,108,1,0,0,0,337,338,5,84,0,
  	0,338,339,5,53,0,0,339,340,5,52,0,0,340,110,1,0,0,0,341,342,5,84,0,0,
  	342,343,5,53,0,0,343,344,5,53,0,0,344,112,1,0,0,0,345,346,5,84,0,0,346,
  	347,5,53,0,0,347,348,5,54,0,0,348,114,1,0,0,0,349,350,5,84,0,0,350,351,
  	5,53,0,0,351,352,5,55,0,0,352,116,1,0,0,0,353,354,5,84,0,0,354,355,5,
  	53,0,0,355,356,5,56,0,0,356,118,1,0,0,0,357,358,5,84,0,0,358,359,5,53,
  	0,0,359,360,5,57,0,0,360,120,1,0,0,0,361,362,5,84,0,0,362,363,5,54,0,
  	0,363,364,5,48,0,0,364,122,1,0,0,0,365,366,5,84,0,0,366,367,5,54,0,0,
  	367,368,5,49,0,0,368,124,1,0,0,0,369,370,5,84,0,0,370,371,5,54,0,0,371,
  	372,5,50,0,0,372,126,1,0,0,0,373,374,5,84,0,0,374,375,5,54,0,0,375,376,
  	5,51,0,0,376,128,1,0,0,0,377,379,7,0,0,0,378,377,1,0,0,0,379,380,1,0,
  	0,0,380,378,1,0,0,0,380,381,1,0,0,0,381,382,1,0,0,0,382,383,6,64,0,0,
  	383,130,1,0,0,0,2,0,380,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  plexerLexerStaticData = staticData.release();
}

}

PLexer::PLexer(CharStream *input) : Lexer(input) {
  PLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *plexerLexerStaticData->atn, plexerLexerStaticData->decisionToDFA, plexerLexerStaticData->sharedContextCache);
}

PLexer::~PLexer() {
  delete _interpreter;
}

std::string PLexer::getGrammarFileName() const {
  return "P.g4";
}

const std::vector<std::string>& PLexer::getRuleNames() const {
  return plexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& PLexer::getChannelNames() const {
  return plexerLexerStaticData->channelNames;
}

const std::vector<std::string>& PLexer::getModeNames() const {
  return plexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& PLexer::getVocabulary() const {
  return plexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView PLexer::getSerializedATN() const {
  return plexerLexerStaticData->serializedATN;
}

const atn::ATN& PLexer::getATN() const {
  return *plexerLexerStaticData->atn;
}




void PLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  plexerLexerInitialize();
#else
  ::antlr4::internal::call_once(plexerLexerOnceFlag, plexerLexerInitialize);
#endif
}
