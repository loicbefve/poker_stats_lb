
// Generated from /media/loic/Data/Users/Loïc/Documents/poker_stats_lb/grammar/HistoryLexer.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpptest {


class  HistoryLexer : public antlr4::Lexer {
public:
  enum {
    WINAMAXPOKER = 1, MINUS = 2, TOURNAMENT = 3, QUOTE = 4, BUYIN = 5, EURO = 6, 
    PLUS = 7, LEVEL = 8, HANDID = 9, HNL = 10, SLASH = 11, UTC = 12, TABLE = 13, 
    SQUOTE = 14, HASHTAG = 15, REALMONEY = 16, SEATALONE = 17, ISBUTTON = 18, 
    ANTEBLIND = 19, POSTANTE = 20, ISALLIN = 21, POSTSB = 22, POSTBB = 23, 
    DEALTTO = 24, PREFLOP = 25, RAISE = 26, TO = 27, FOLD = 28, BET = 29, 
    CHECK = 30, CALL = 31, COLLECTED = 32, FROMPOT = 33, FLOP = 34, TURN = 35, 
    RIVER = 36, SHOWDOWN = 37, SHOW = 38, FROMSP = 39, FROMMP = 40, SUMMARY = 41, 
    TOTALPOT = 42, OU = 43, NORAKE = 44, BOARD = 45, SHOWED = 46, BUTTON = 47, 
    SMALLBLIND = 48, BIGBLIND = 49, WITH = 50, AND = 51, WON = 52, LOST = 53, 
    DIGIT = 54, NUMBER = 55, LPAREN = 56, RPAREN = 57, LCROCH = 58, RCROCH = 59, 
    SEAT = 60, COLON = 61, MOT = 62, WS = 63
  };

  HistoryLexer(antlr4::CharStream *input);
  ~HistoryLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace antlrcpptest
