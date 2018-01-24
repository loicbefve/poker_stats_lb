
// Generated from /media/loic/Data/Users/Loïc/Documents/poker_stats_lb/grammar/HistoryParser.g4 by ANTLR 4.7.1


#include "HistoryParserListener.h"
#include "HistoryParserVisitor.h"

#include "HistoryParser.h"


using namespace antlrcpp;
using namespace antlrcpptest;
using namespace antlr4;

HistoryParser::HistoryParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

HistoryParser::~HistoryParser() {
  delete _interpreter;
}

std::string HistoryParser::getGrammarFileName() const {
  return "HistoryParser.g4";
}

const std::vector<std::string>& HistoryParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& HistoryParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- FichierContext ------------------------------------------------------------------

HistoryParser::FichierContext::FichierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HistoryParser::HandContext *> HistoryParser::FichierContext::hand() {
  return getRuleContexts<HistoryParser::HandContext>();
}

HistoryParser::HandContext* HistoryParser::FichierContext::hand(size_t i) {
  return getRuleContext<HistoryParser::HandContext>(i);
}


size_t HistoryParser::FichierContext::getRuleIndex() const {
  return HistoryParser::RuleFichier;
}

void HistoryParser::FichierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFichier(this);
}

void HistoryParser::FichierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFichier(this);
}


antlrcpp::Any HistoryParser::FichierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitFichier(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::FichierContext* HistoryParser::fichier() {
  FichierContext *_localctx = _tracker.createInstance<FichierContext>(_ctx, getState());
  enterRule(_localctx, 0, HistoryParser::RuleFichier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(187); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(186);
      hand();
      setState(189); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == HistoryParser::WINAMAXPOKER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HandContext ------------------------------------------------------------------

HistoryParser::HandContext::HandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryParser::HandHeaderContext* HistoryParser::HandContext::handHeader() {
  return getRuleContext<HistoryParser::HandHeaderContext>(0);
}

HistoryParser::PositionsContext* HistoryParser::HandContext::positions() {
  return getRuleContext<HistoryParser::PositionsContext>(0);
}

HistoryParser::JeuContext* HistoryParser::HandContext::jeu() {
  return getRuleContext<HistoryParser::JeuContext>(0);
}

HistoryParser::SummarySectionContext* HistoryParser::HandContext::summarySection() {
  return getRuleContext<HistoryParser::SummarySectionContext>(0);
}


size_t HistoryParser::HandContext::getRuleIndex() const {
  return HistoryParser::RuleHand;
}

void HistoryParser::HandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHand(this);
}

void HistoryParser::HandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHand(this);
}


antlrcpp::Any HistoryParser::HandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitHand(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::HandContext* HistoryParser::hand() {
  HandContext *_localctx = _tracker.createInstance<HandContext>(_ctx, getState());
  enterRule(_localctx, 2, HistoryParser::RuleHand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(191);
    handHeader();
    setState(192);
    positions();
    setState(193);
    jeu();
    setState(194);
    summarySection();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HandHeaderContext ------------------------------------------------------------------

HistoryParser::HandHeaderContext::HandHeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryParser::FirstLineContext* HistoryParser::HandHeaderContext::firstLine() {
  return getRuleContext<HistoryParser::FirstLineContext>(0);
}

HistoryParser::SecondLineContext* HistoryParser::HandHeaderContext::secondLine() {
  return getRuleContext<HistoryParser::SecondLineContext>(0);
}


size_t HistoryParser::HandHeaderContext::getRuleIndex() const {
  return HistoryParser::RuleHandHeader;
}

void HistoryParser::HandHeaderContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHandHeader(this);
}

void HistoryParser::HandHeaderContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHandHeader(this);
}


antlrcpp::Any HistoryParser::HandHeaderContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitHandHeader(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::HandHeaderContext* HistoryParser::handHeader() {
  HandHeaderContext *_localctx = _tracker.createInstance<HandHeaderContext>(_ctx, getState());
  enterRule(_localctx, 4, HistoryParser::RuleHandHeader);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(196);
    firstLine();
    setState(197);
    secondLine();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JeuContext ------------------------------------------------------------------

HistoryParser::JeuContext::JeuContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryParser::AnteblindSectionContext* HistoryParser::JeuContext::anteblindSection() {
  return getRuleContext<HistoryParser::AnteblindSectionContext>(0);
}

HistoryParser::PreflopSectionContext* HistoryParser::JeuContext::preflopSection() {
  return getRuleContext<HistoryParser::PreflopSectionContext>(0);
}

HistoryParser::FlopSectionContext* HistoryParser::JeuContext::flopSection() {
  return getRuleContext<HistoryParser::FlopSectionContext>(0);
}

HistoryParser::TurnSectionContext* HistoryParser::JeuContext::turnSection() {
  return getRuleContext<HistoryParser::TurnSectionContext>(0);
}

HistoryParser::RiverSectionContext* HistoryParser::JeuContext::riverSection() {
  return getRuleContext<HistoryParser::RiverSectionContext>(0);
}

HistoryParser::ShowdownSectionContext* HistoryParser::JeuContext::showdownSection() {
  return getRuleContext<HistoryParser::ShowdownSectionContext>(0);
}


size_t HistoryParser::JeuContext::getRuleIndex() const {
  return HistoryParser::RuleJeu;
}

void HistoryParser::JeuContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJeu(this);
}

void HistoryParser::JeuContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJeu(this);
}


antlrcpp::Any HistoryParser::JeuContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitJeu(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::JeuContext* HistoryParser::jeu() {
  JeuContext *_localctx = _tracker.createInstance<JeuContext>(_ctx, getState());
  enterRule(_localctx, 6, HistoryParser::RuleJeu);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(199);
    anteblindSection();
    setState(200);
    preflopSection();
    setState(202);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryParser::FLOP) {
      setState(201);
      flopSection();
    }
    setState(205);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryParser::TURN) {
      setState(204);
      turnSection();
    }
    setState(208);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryParser::RIVER) {
      setState(207);
      riverSection();
    }
    setState(211);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryParser::SHOWDOWN) {
      setState(210);
      showdownSection();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FirstLineContext ------------------------------------------------------------------

HistoryParser::FirstLineContext::FirstLineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::FirstLineContext::WINAMAXPOKER() {
  return getToken(HistoryParser::WINAMAXPOKER, 0);
}

std::vector<tree::TerminalNode *> HistoryParser::FirstLineContext::MINUS() {
  return getTokens(HistoryParser::MINUS);
}

tree::TerminalNode* HistoryParser::FirstLineContext::MINUS(size_t i) {
  return getToken(HistoryParser::MINUS, i);
}

HistoryParser::GameInfoContext* HistoryParser::FirstLineContext::gameInfo() {
  return getRuleContext<HistoryParser::GameInfoContext>(0);
}

HistoryParser::HandIdContext* HistoryParser::FirstLineContext::handId() {
  return getRuleContext<HistoryParser::HandIdContext>(0);
}

HistoryParser::TypePlayContext* HistoryParser::FirstLineContext::typePlay() {
  return getRuleContext<HistoryParser::TypePlayContext>(0);
}

HistoryParser::DateContext* HistoryParser::FirstLineContext::date() {
  return getRuleContext<HistoryParser::DateContext>(0);
}


size_t HistoryParser::FirstLineContext::getRuleIndex() const {
  return HistoryParser::RuleFirstLine;
}

void HistoryParser::FirstLineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFirstLine(this);
}

void HistoryParser::FirstLineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFirstLine(this);
}


antlrcpp::Any HistoryParser::FirstLineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitFirstLine(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::FirstLineContext* HistoryParser::firstLine() {
  FirstLineContext *_localctx = _tracker.createInstance<FirstLineContext>(_ctx, getState());
  enterRule(_localctx, 8, HistoryParser::RuleFirstLine);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(213);
    match(HistoryParser::WINAMAXPOKER);
    setState(214);
    match(HistoryParser::MINUS);
    setState(215);
    gameInfo();
    setState(216);
    match(HistoryParser::MINUS);
    setState(217);
    handId();
    setState(218);
    match(HistoryParser::MINUS);
    setState(219);
    typePlay();
    setState(220);
    match(HistoryParser::MINUS);
    setState(221);
    date();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GameInfoContext ------------------------------------------------------------------

HistoryParser::GameInfoContext::GameInfoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryParser::TypeOfGameContext* HistoryParser::GameInfoContext::typeOfGame() {
  return getRuleContext<HistoryParser::TypeOfGameContext>(0);
}

HistoryParser::NameOfGameContext* HistoryParser::GameInfoContext::nameOfGame() {
  return getRuleContext<HistoryParser::NameOfGameContext>(0);
}

HistoryParser::BuyinContext* HistoryParser::GameInfoContext::buyin() {
  return getRuleContext<HistoryParser::BuyinContext>(0);
}

HistoryParser::LevelContext* HistoryParser::GameInfoContext::level() {
  return getRuleContext<HistoryParser::LevelContext>(0);
}


size_t HistoryParser::GameInfoContext::getRuleIndex() const {
  return HistoryParser::RuleGameInfo;
}

void HistoryParser::GameInfoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGameInfo(this);
}

void HistoryParser::GameInfoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGameInfo(this);
}


antlrcpp::Any HistoryParser::GameInfoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitGameInfo(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::GameInfoContext* HistoryParser::gameInfo() {
  GameInfoContext *_localctx = _tracker.createInstance<GameInfoContext>(_ctx, getState());
  enterRule(_localctx, 10, HistoryParser::RuleGameInfo);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(223);
    typeOfGame();
    setState(224);
    nameOfGame();
    setState(225);
    buyin();
    setState(226);
    level();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeOfGameContext ------------------------------------------------------------------

HistoryParser::TypeOfGameContext::TypeOfGameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::TypeOfGameContext::TOURNAMENT() {
  return getToken(HistoryParser::TOURNAMENT, 0);
}


size_t HistoryParser::TypeOfGameContext::getRuleIndex() const {
  return HistoryParser::RuleTypeOfGame;
}

void HistoryParser::TypeOfGameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeOfGame(this);
}

void HistoryParser::TypeOfGameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeOfGame(this);
}


antlrcpp::Any HistoryParser::TypeOfGameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitTypeOfGame(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::TypeOfGameContext* HistoryParser::typeOfGame() {
  TypeOfGameContext *_localctx = _tracker.createInstance<TypeOfGameContext>(_ctx, getState());
  enterRule(_localctx, 12, HistoryParser::RuleTypeOfGame);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(228);
    match(HistoryParser::TOURNAMENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NameOfGameContext ------------------------------------------------------------------

HistoryParser::NameOfGameContext::NameOfGameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> HistoryParser::NameOfGameContext::QUOTE() {
  return getTokens(HistoryParser::QUOTE);
}

tree::TerminalNode* HistoryParser::NameOfGameContext::QUOTE(size_t i) {
  return getToken(HistoryParser::QUOTE, i);
}

std::vector<tree::TerminalNode *> HistoryParser::NameOfGameContext::MOT() {
  return getTokens(HistoryParser::MOT);
}

tree::TerminalNode* HistoryParser::NameOfGameContext::MOT(size_t i) {
  return getToken(HistoryParser::MOT, i);
}


size_t HistoryParser::NameOfGameContext::getRuleIndex() const {
  return HistoryParser::RuleNameOfGame;
}

void HistoryParser::NameOfGameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNameOfGame(this);
}

void HistoryParser::NameOfGameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNameOfGame(this);
}


antlrcpp::Any HistoryParser::NameOfGameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitNameOfGame(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::NameOfGameContext* HistoryParser::nameOfGame() {
  NameOfGameContext *_localctx = _tracker.createInstance<NameOfGameContext>(_ctx, getState());
  enterRule(_localctx, 14, HistoryParser::RuleNameOfGame);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(230);
    match(HistoryParser::QUOTE);
    setState(232); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(231);
      match(HistoryParser::MOT);
      setState(234); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == HistoryParser::MOT);
    setState(236);
    match(HistoryParser::QUOTE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BuyinContext ------------------------------------------------------------------

HistoryParser::BuyinContext::BuyinContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::BuyinContext::BUYIN() {
  return getToken(HistoryParser::BUYIN, 0);
}

HistoryParser::BuyValueContext* HistoryParser::BuyinContext::buyValue() {
  return getRuleContext<HistoryParser::BuyValueContext>(0);
}

std::vector<tree::TerminalNode *> HistoryParser::BuyinContext::EURO() {
  return getTokens(HistoryParser::EURO);
}

tree::TerminalNode* HistoryParser::BuyinContext::EURO(size_t i) {
  return getToken(HistoryParser::EURO, i);
}

tree::TerminalNode* HistoryParser::BuyinContext::PLUS() {
  return getToken(HistoryParser::PLUS, 0);
}

HistoryParser::RakeBuyValueContext* HistoryParser::BuyinContext::rakeBuyValue() {
  return getRuleContext<HistoryParser::RakeBuyValueContext>(0);
}


size_t HistoryParser::BuyinContext::getRuleIndex() const {
  return HistoryParser::RuleBuyin;
}

void HistoryParser::BuyinContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBuyin(this);
}

void HistoryParser::BuyinContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBuyin(this);
}


antlrcpp::Any HistoryParser::BuyinContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitBuyin(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::BuyinContext* HistoryParser::buyin() {
  BuyinContext *_localctx = _tracker.createInstance<BuyinContext>(_ctx, getState());
  enterRule(_localctx, 16, HistoryParser::RuleBuyin);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(238);
    match(HistoryParser::BUYIN);
    setState(239);
    buyValue();
    setState(240);
    match(HistoryParser::EURO);
    setState(241);
    match(HistoryParser::PLUS);
    setState(242);
    rakeBuyValue();
    setState(243);
    match(HistoryParser::EURO);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BuyValueContext ------------------------------------------------------------------

HistoryParser::BuyValueContext::BuyValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::BuyValueContext::NUMBER() {
  return getToken(HistoryParser::NUMBER, 0);
}

tree::TerminalNode* HistoryParser::BuyValueContext::DIGIT() {
  return getToken(HistoryParser::DIGIT, 0);
}


size_t HistoryParser::BuyValueContext::getRuleIndex() const {
  return HistoryParser::RuleBuyValue;
}

void HistoryParser::BuyValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBuyValue(this);
}

void HistoryParser::BuyValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBuyValue(this);
}


antlrcpp::Any HistoryParser::BuyValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitBuyValue(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::BuyValueContext* HistoryParser::buyValue() {
  BuyValueContext *_localctx = _tracker.createInstance<BuyValueContext>(_ctx, getState());
  enterRule(_localctx, 18, HistoryParser::RuleBuyValue);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(245);
    _la = _input->LA(1);
    if (!(_la == HistoryParser::DIGIT

    || _la == HistoryParser::NUMBER)) {
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

//----------------- RakeBuyValueContext ------------------------------------------------------------------

HistoryParser::RakeBuyValueContext::RakeBuyValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::RakeBuyValueContext::NUMBER() {
  return getToken(HistoryParser::NUMBER, 0);
}

tree::TerminalNode* HistoryParser::RakeBuyValueContext::DIGIT() {
  return getToken(HistoryParser::DIGIT, 0);
}


size_t HistoryParser::RakeBuyValueContext::getRuleIndex() const {
  return HistoryParser::RuleRakeBuyValue;
}

void HistoryParser::RakeBuyValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRakeBuyValue(this);
}

void HistoryParser::RakeBuyValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRakeBuyValue(this);
}


antlrcpp::Any HistoryParser::RakeBuyValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitRakeBuyValue(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::RakeBuyValueContext* HistoryParser::rakeBuyValue() {
  RakeBuyValueContext *_localctx = _tracker.createInstance<RakeBuyValueContext>(_ctx, getState());
  enterRule(_localctx, 20, HistoryParser::RuleRakeBuyValue);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(247);
    _la = _input->LA(1);
    if (!(_la == HistoryParser::DIGIT

    || _la == HistoryParser::NUMBER)) {
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

//----------------- LevelContext ------------------------------------------------------------------

HistoryParser::LevelContext::LevelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::LevelContext::LEVEL() {
  return getToken(HistoryParser::LEVEL, 0);
}

HistoryParser::LevelValueContext* HistoryParser::LevelContext::levelValue() {
  return getRuleContext<HistoryParser::LevelValueContext>(0);
}


size_t HistoryParser::LevelContext::getRuleIndex() const {
  return HistoryParser::RuleLevel;
}

void HistoryParser::LevelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLevel(this);
}

void HistoryParser::LevelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLevel(this);
}


antlrcpp::Any HistoryParser::LevelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitLevel(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::LevelContext* HistoryParser::level() {
  LevelContext *_localctx = _tracker.createInstance<LevelContext>(_ctx, getState());
  enterRule(_localctx, 22, HistoryParser::RuleLevel);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(249);
    match(HistoryParser::LEVEL);
    setState(250);
    levelValue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LevelValueContext ------------------------------------------------------------------

HistoryParser::LevelValueContext::LevelValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::LevelValueContext::NUMBER() {
  return getToken(HistoryParser::NUMBER, 0);
}

tree::TerminalNode* HistoryParser::LevelValueContext::DIGIT() {
  return getToken(HistoryParser::DIGIT, 0);
}


size_t HistoryParser::LevelValueContext::getRuleIndex() const {
  return HistoryParser::RuleLevelValue;
}

void HistoryParser::LevelValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLevelValue(this);
}

void HistoryParser::LevelValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLevelValue(this);
}


antlrcpp::Any HistoryParser::LevelValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitLevelValue(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::LevelValueContext* HistoryParser::levelValue() {
  LevelValueContext *_localctx = _tracker.createInstance<LevelValueContext>(_ctx, getState());
  enterRule(_localctx, 24, HistoryParser::RuleLevelValue);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(252);
    _la = _input->LA(1);
    if (!(_la == HistoryParser::DIGIT

    || _la == HistoryParser::NUMBER)) {
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

//----------------- HandIdContext ------------------------------------------------------------------

HistoryParser::HandIdContext::HandIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::HandIdContext::HANDID() {
  return getToken(HistoryParser::HANDID, 0);
}

HistoryParser::HandIdValueContext* HistoryParser::HandIdContext::handIdValue() {
  return getRuleContext<HistoryParser::HandIdValueContext>(0);
}


size_t HistoryParser::HandIdContext::getRuleIndex() const {
  return HistoryParser::RuleHandId;
}

void HistoryParser::HandIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHandId(this);
}

void HistoryParser::HandIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHandId(this);
}


antlrcpp::Any HistoryParser::HandIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitHandId(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::HandIdContext* HistoryParser::handId() {
  HandIdContext *_localctx = _tracker.createInstance<HandIdContext>(_ctx, getState());
  enterRule(_localctx, 26, HistoryParser::RuleHandId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(254);
    match(HistoryParser::HANDID);
    setState(255);
    handIdValue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HandIdValueContext ------------------------------------------------------------------

HistoryParser::HandIdValueContext::HandIdValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::HandIdValueContext::MOT() {
  return getToken(HistoryParser::MOT, 0);
}


size_t HistoryParser::HandIdValueContext::getRuleIndex() const {
  return HistoryParser::RuleHandIdValue;
}

void HistoryParser::HandIdValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHandIdValue(this);
}

void HistoryParser::HandIdValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHandIdValue(this);
}


antlrcpp::Any HistoryParser::HandIdValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitHandIdValue(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::HandIdValueContext* HistoryParser::handIdValue() {
  HandIdValueContext *_localctx = _tracker.createInstance<HandIdValueContext>(_ctx, getState());
  enterRule(_localctx, 28, HistoryParser::RuleHandIdValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(257);
    match(HistoryParser::MOT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypePlayContext ------------------------------------------------------------------

HistoryParser::TypePlayContext::TypePlayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::TypePlayContext::HNL() {
  return getToken(HistoryParser::HNL, 0);
}

tree::TerminalNode* HistoryParser::TypePlayContext::LPAREN() {
  return getToken(HistoryParser::LPAREN, 0);
}

HistoryParser::AnteValueContext* HistoryParser::TypePlayContext::anteValue() {
  return getRuleContext<HistoryParser::AnteValueContext>(0);
}

std::vector<tree::TerminalNode *> HistoryParser::TypePlayContext::SLASH() {
  return getTokens(HistoryParser::SLASH);
}

tree::TerminalNode* HistoryParser::TypePlayContext::SLASH(size_t i) {
  return getToken(HistoryParser::SLASH, i);
}

HistoryParser::SmallblindValueContext* HistoryParser::TypePlayContext::smallblindValue() {
  return getRuleContext<HistoryParser::SmallblindValueContext>(0);
}

HistoryParser::BigblindValueContext* HistoryParser::TypePlayContext::bigblindValue() {
  return getRuleContext<HistoryParser::BigblindValueContext>(0);
}

tree::TerminalNode* HistoryParser::TypePlayContext::RPAREN() {
  return getToken(HistoryParser::RPAREN, 0);
}


size_t HistoryParser::TypePlayContext::getRuleIndex() const {
  return HistoryParser::RuleTypePlay;
}

void HistoryParser::TypePlayContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypePlay(this);
}

void HistoryParser::TypePlayContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypePlay(this);
}


antlrcpp::Any HistoryParser::TypePlayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitTypePlay(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::TypePlayContext* HistoryParser::typePlay() {
  TypePlayContext *_localctx = _tracker.createInstance<TypePlayContext>(_ctx, getState());
  enterRule(_localctx, 30, HistoryParser::RuleTypePlay);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(259);
    match(HistoryParser::HNL);
    setState(260);
    match(HistoryParser::LPAREN);
    setState(261);
    anteValue();
    setState(262);
    match(HistoryParser::SLASH);
    setState(263);
    smallblindValue();
    setState(264);
    match(HistoryParser::SLASH);
    setState(265);
    bigblindValue();
    setState(266);
    match(HistoryParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnteValueContext ------------------------------------------------------------------

HistoryParser::AnteValueContext::AnteValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::AnteValueContext::NUMBER() {
  return getToken(HistoryParser::NUMBER, 0);
}

tree::TerminalNode* HistoryParser::AnteValueContext::DIGIT() {
  return getToken(HistoryParser::DIGIT, 0);
}


size_t HistoryParser::AnteValueContext::getRuleIndex() const {
  return HistoryParser::RuleAnteValue;
}

void HistoryParser::AnteValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnteValue(this);
}

void HistoryParser::AnteValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnteValue(this);
}


antlrcpp::Any HistoryParser::AnteValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitAnteValue(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::AnteValueContext* HistoryParser::anteValue() {
  AnteValueContext *_localctx = _tracker.createInstance<AnteValueContext>(_ctx, getState());
  enterRule(_localctx, 32, HistoryParser::RuleAnteValue);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(268);
    _la = _input->LA(1);
    if (!(_la == HistoryParser::DIGIT

    || _la == HistoryParser::NUMBER)) {
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

//----------------- SmallblindValueContext ------------------------------------------------------------------

HistoryParser::SmallblindValueContext::SmallblindValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::SmallblindValueContext::NUMBER() {
  return getToken(HistoryParser::NUMBER, 0);
}

tree::TerminalNode* HistoryParser::SmallblindValueContext::DIGIT() {
  return getToken(HistoryParser::DIGIT, 0);
}


size_t HistoryParser::SmallblindValueContext::getRuleIndex() const {
  return HistoryParser::RuleSmallblindValue;
}

void HistoryParser::SmallblindValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSmallblindValue(this);
}

void HistoryParser::SmallblindValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSmallblindValue(this);
}


antlrcpp::Any HistoryParser::SmallblindValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitSmallblindValue(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::SmallblindValueContext* HistoryParser::smallblindValue() {
  SmallblindValueContext *_localctx = _tracker.createInstance<SmallblindValueContext>(_ctx, getState());
  enterRule(_localctx, 34, HistoryParser::RuleSmallblindValue);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(270);
    _la = _input->LA(1);
    if (!(_la == HistoryParser::DIGIT

    || _la == HistoryParser::NUMBER)) {
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

//----------------- BigblindValueContext ------------------------------------------------------------------

HistoryParser::BigblindValueContext::BigblindValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::BigblindValueContext::NUMBER() {
  return getToken(HistoryParser::NUMBER, 0);
}

tree::TerminalNode* HistoryParser::BigblindValueContext::DIGIT() {
  return getToken(HistoryParser::DIGIT, 0);
}


size_t HistoryParser::BigblindValueContext::getRuleIndex() const {
  return HistoryParser::RuleBigblindValue;
}

void HistoryParser::BigblindValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBigblindValue(this);
}

void HistoryParser::BigblindValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBigblindValue(this);
}


antlrcpp::Any HistoryParser::BigblindValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitBigblindValue(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::BigblindValueContext* HistoryParser::bigblindValue() {
  BigblindValueContext *_localctx = _tracker.createInstance<BigblindValueContext>(_ctx, getState());
  enterRule(_localctx, 36, HistoryParser::RuleBigblindValue);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(272);
    _la = _input->LA(1);
    if (!(_la == HistoryParser::DIGIT

    || _la == HistoryParser::NUMBER)) {
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

//----------------- DateContext ------------------------------------------------------------------

HistoryParser::DateContext::DateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryParser::AnneeContext* HistoryParser::DateContext::annee() {
  return getRuleContext<HistoryParser::AnneeContext>(0);
}

std::vector<tree::TerminalNode *> HistoryParser::DateContext::SLASH() {
  return getTokens(HistoryParser::SLASH);
}

tree::TerminalNode* HistoryParser::DateContext::SLASH(size_t i) {
  return getToken(HistoryParser::SLASH, i);
}

HistoryParser::MoisContext* HistoryParser::DateContext::mois() {
  return getRuleContext<HistoryParser::MoisContext>(0);
}

HistoryParser::JourContext* HistoryParser::DateContext::jour() {
  return getRuleContext<HistoryParser::JourContext>(0);
}

HistoryParser::HeureContext* HistoryParser::DateContext::heure() {
  return getRuleContext<HistoryParser::HeureContext>(0);
}

std::vector<tree::TerminalNode *> HistoryParser::DateContext::COLON() {
  return getTokens(HistoryParser::COLON);
}

tree::TerminalNode* HistoryParser::DateContext::COLON(size_t i) {
  return getToken(HistoryParser::COLON, i);
}

HistoryParser::MinutesContext* HistoryParser::DateContext::minutes() {
  return getRuleContext<HistoryParser::MinutesContext>(0);
}

HistoryParser::SecondesContext* HistoryParser::DateContext::secondes() {
  return getRuleContext<HistoryParser::SecondesContext>(0);
}

tree::TerminalNode* HistoryParser::DateContext::UTC() {
  return getToken(HistoryParser::UTC, 0);
}


size_t HistoryParser::DateContext::getRuleIndex() const {
  return HistoryParser::RuleDate;
}

void HistoryParser::DateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDate(this);
}

void HistoryParser::DateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDate(this);
}


antlrcpp::Any HistoryParser::DateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitDate(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::DateContext* HistoryParser::date() {
  DateContext *_localctx = _tracker.createInstance<DateContext>(_ctx, getState());
  enterRule(_localctx, 38, HistoryParser::RuleDate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(274);
    annee();
    setState(275);
    match(HistoryParser::SLASH);
    setState(276);
    mois();
    setState(277);
    match(HistoryParser::SLASH);
    setState(278);
    jour();
    setState(279);
    heure();
    setState(280);
    match(HistoryParser::COLON);
    setState(281);
    minutes();
    setState(282);
    match(HistoryParser::COLON);
    setState(283);
    secondes();
    setState(284);
    match(HistoryParser::UTC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnneeContext ------------------------------------------------------------------

HistoryParser::AnneeContext::AnneeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::AnneeContext::NUMBER() {
  return getToken(HistoryParser::NUMBER, 0);
}


size_t HistoryParser::AnneeContext::getRuleIndex() const {
  return HistoryParser::RuleAnnee;
}

void HistoryParser::AnneeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnnee(this);
}

void HistoryParser::AnneeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnnee(this);
}


antlrcpp::Any HistoryParser::AnneeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitAnnee(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::AnneeContext* HistoryParser::annee() {
  AnneeContext *_localctx = _tracker.createInstance<AnneeContext>(_ctx, getState());
  enterRule(_localctx, 40, HistoryParser::RuleAnnee);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(286);
    match(HistoryParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MoisContext ------------------------------------------------------------------

HistoryParser::MoisContext::MoisContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::MoisContext::NUMBER() {
  return getToken(HistoryParser::NUMBER, 0);
}


size_t HistoryParser::MoisContext::getRuleIndex() const {
  return HistoryParser::RuleMois;
}

void HistoryParser::MoisContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMois(this);
}

void HistoryParser::MoisContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMois(this);
}


antlrcpp::Any HistoryParser::MoisContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitMois(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::MoisContext* HistoryParser::mois() {
  MoisContext *_localctx = _tracker.createInstance<MoisContext>(_ctx, getState());
  enterRule(_localctx, 42, HistoryParser::RuleMois);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(288);
    match(HistoryParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JourContext ------------------------------------------------------------------

HistoryParser::JourContext::JourContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::JourContext::NUMBER() {
  return getToken(HistoryParser::NUMBER, 0);
}


size_t HistoryParser::JourContext::getRuleIndex() const {
  return HistoryParser::RuleJour;
}

void HistoryParser::JourContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJour(this);
}

void HistoryParser::JourContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJour(this);
}


antlrcpp::Any HistoryParser::JourContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitJour(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::JourContext* HistoryParser::jour() {
  JourContext *_localctx = _tracker.createInstance<JourContext>(_ctx, getState());
  enterRule(_localctx, 44, HistoryParser::RuleJour);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(290);
    match(HistoryParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HeureContext ------------------------------------------------------------------

HistoryParser::HeureContext::HeureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::HeureContext::NUMBER() {
  return getToken(HistoryParser::NUMBER, 0);
}


size_t HistoryParser::HeureContext::getRuleIndex() const {
  return HistoryParser::RuleHeure;
}

void HistoryParser::HeureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHeure(this);
}

void HistoryParser::HeureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHeure(this);
}


antlrcpp::Any HistoryParser::HeureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitHeure(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::HeureContext* HistoryParser::heure() {
  HeureContext *_localctx = _tracker.createInstance<HeureContext>(_ctx, getState());
  enterRule(_localctx, 46, HistoryParser::RuleHeure);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(292);
    match(HistoryParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MinutesContext ------------------------------------------------------------------

HistoryParser::MinutesContext::MinutesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::MinutesContext::NUMBER() {
  return getToken(HistoryParser::NUMBER, 0);
}


size_t HistoryParser::MinutesContext::getRuleIndex() const {
  return HistoryParser::RuleMinutes;
}

void HistoryParser::MinutesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMinutes(this);
}

void HistoryParser::MinutesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMinutes(this);
}


antlrcpp::Any HistoryParser::MinutesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitMinutes(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::MinutesContext* HistoryParser::minutes() {
  MinutesContext *_localctx = _tracker.createInstance<MinutesContext>(_ctx, getState());
  enterRule(_localctx, 48, HistoryParser::RuleMinutes);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(294);
    match(HistoryParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SecondesContext ------------------------------------------------------------------

HistoryParser::SecondesContext::SecondesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::SecondesContext::NUMBER() {
  return getToken(HistoryParser::NUMBER, 0);
}


size_t HistoryParser::SecondesContext::getRuleIndex() const {
  return HistoryParser::RuleSecondes;
}

void HistoryParser::SecondesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSecondes(this);
}

void HistoryParser::SecondesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSecondes(this);
}


antlrcpp::Any HistoryParser::SecondesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitSecondes(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::SecondesContext* HistoryParser::secondes() {
  SecondesContext *_localctx = _tracker.createInstance<SecondesContext>(_ctx, getState());
  enterRule(_localctx, 50, HistoryParser::RuleSecondes);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(296);
    match(HistoryParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SecondLineContext ------------------------------------------------------------------

HistoryParser::SecondLineContext::SecondLineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::SecondLineContext::TABLE() {
  return getToken(HistoryParser::TABLE, 0);
}

HistoryParser::TableInfoContext* HistoryParser::SecondLineContext::tableInfo() {
  return getRuleContext<HistoryParser::TableInfoContext>(0);
}

HistoryParser::FormatContext* HistoryParser::SecondLineContext::format() {
  return getRuleContext<HistoryParser::FormatContext>(0);
}

HistoryParser::WhoIsButtonContext* HistoryParser::SecondLineContext::whoIsButton() {
  return getRuleContext<HistoryParser::WhoIsButtonContext>(0);
}


size_t HistoryParser::SecondLineContext::getRuleIndex() const {
  return HistoryParser::RuleSecondLine;
}

void HistoryParser::SecondLineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSecondLine(this);
}

void HistoryParser::SecondLineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSecondLine(this);
}


antlrcpp::Any HistoryParser::SecondLineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitSecondLine(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::SecondLineContext* HistoryParser::secondLine() {
  SecondLineContext *_localctx = _tracker.createInstance<SecondLineContext>(_ctx, getState());
  enterRule(_localctx, 52, HistoryParser::RuleSecondLine);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(298);
    match(HistoryParser::TABLE);
    setState(299);
    tableInfo();
    setState(300);
    format();
    setState(301);
    whoIsButton();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TableInfoContext ------------------------------------------------------------------

HistoryParser::TableInfoContext::TableInfoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> HistoryParser::TableInfoContext::SQUOTE() {
  return getTokens(HistoryParser::SQUOTE);
}

tree::TerminalNode* HistoryParser::TableInfoContext::SQUOTE(size_t i) {
  return getToken(HistoryParser::SQUOTE, i);
}

tree::TerminalNode* HistoryParser::TableInfoContext::LPAREN() {
  return getToken(HistoryParser::LPAREN, 0);
}

HistoryParser::IdTableContext* HistoryParser::TableInfoContext::idTable() {
  return getRuleContext<HistoryParser::IdTableContext>(0);
}

tree::TerminalNode* HistoryParser::TableInfoContext::RPAREN() {
  return getToken(HistoryParser::RPAREN, 0);
}

tree::TerminalNode* HistoryParser::TableInfoContext::HASHTAG() {
  return getToken(HistoryParser::HASHTAG, 0);
}

HistoryParser::DiezContext* HistoryParser::TableInfoContext::diez() {
  return getRuleContext<HistoryParser::DiezContext>(0);
}

std::vector<tree::TerminalNode *> HistoryParser::TableInfoContext::MOT() {
  return getTokens(HistoryParser::MOT);
}

tree::TerminalNode* HistoryParser::TableInfoContext::MOT(size_t i) {
  return getToken(HistoryParser::MOT, i);
}


size_t HistoryParser::TableInfoContext::getRuleIndex() const {
  return HistoryParser::RuleTableInfo;
}

void HistoryParser::TableInfoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTableInfo(this);
}

void HistoryParser::TableInfoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTableInfo(this);
}


antlrcpp::Any HistoryParser::TableInfoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitTableInfo(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::TableInfoContext* HistoryParser::tableInfo() {
  TableInfoContext *_localctx = _tracker.createInstance<TableInfoContext>(_ctx, getState());
  enterRule(_localctx, 54, HistoryParser::RuleTableInfo);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(303);
    match(HistoryParser::SQUOTE);
    setState(305); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(304);
      match(HistoryParser::MOT);
      setState(307); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == HistoryParser::MOT);
    setState(309);
    match(HistoryParser::LPAREN);
    setState(310);
    idTable();
    setState(311);
    match(HistoryParser::RPAREN);
    setState(312);
    match(HistoryParser::HASHTAG);
    setState(313);
    diez();
    setState(314);
    match(HistoryParser::SQUOTE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdTableContext ------------------------------------------------------------------

HistoryParser::IdTableContext::IdTableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::IdTableContext::NUMBER() {
  return getToken(HistoryParser::NUMBER, 0);
}


size_t HistoryParser::IdTableContext::getRuleIndex() const {
  return HistoryParser::RuleIdTable;
}

void HistoryParser::IdTableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdTable(this);
}

void HistoryParser::IdTableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdTable(this);
}


antlrcpp::Any HistoryParser::IdTableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitIdTable(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::IdTableContext* HistoryParser::idTable() {
  IdTableContext *_localctx = _tracker.createInstance<IdTableContext>(_ctx, getState());
  enterRule(_localctx, 56, HistoryParser::RuleIdTable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(316);
    match(HistoryParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DiezContext ------------------------------------------------------------------

HistoryParser::DiezContext::DiezContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::DiezContext::NUMBER() {
  return getToken(HistoryParser::NUMBER, 0);
}


size_t HistoryParser::DiezContext::getRuleIndex() const {
  return HistoryParser::RuleDiez;
}

void HistoryParser::DiezContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDiez(this);
}

void HistoryParser::DiezContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDiez(this);
}


antlrcpp::Any HistoryParser::DiezContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitDiez(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::DiezContext* HistoryParser::diez() {
  DiezContext *_localctx = _tracker.createInstance<DiezContext>(_ctx, getState());
  enterRule(_localctx, 58, HistoryParser::RuleDiez);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(318);
    match(HistoryParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormatContext ------------------------------------------------------------------

HistoryParser::FormatContext::FormatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryParser::NumberOfPlayerContext* HistoryParser::FormatContext::numberOfPlayer() {
  return getRuleContext<HistoryParser::NumberOfPlayerContext>(0);
}

tree::TerminalNode* HistoryParser::FormatContext::LPAREN() {
  return getToken(HistoryParser::LPAREN, 0);
}

tree::TerminalNode* HistoryParser::FormatContext::REALMONEY() {
  return getToken(HistoryParser::REALMONEY, 0);
}

tree::TerminalNode* HistoryParser::FormatContext::RPAREN() {
  return getToken(HistoryParser::RPAREN, 0);
}


size_t HistoryParser::FormatContext::getRuleIndex() const {
  return HistoryParser::RuleFormat;
}

void HistoryParser::FormatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormat(this);
}

void HistoryParser::FormatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormat(this);
}


antlrcpp::Any HistoryParser::FormatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitFormat(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::FormatContext* HistoryParser::format() {
  FormatContext *_localctx = _tracker.createInstance<FormatContext>(_ctx, getState());
  enterRule(_localctx, 60, HistoryParser::RuleFormat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(320);
    numberOfPlayer();
    setState(321);
    match(HistoryParser::LPAREN);
    setState(322);
    match(HistoryParser::REALMONEY);
    setState(323);
    match(HistoryParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberOfPlayerContext ------------------------------------------------------------------

HistoryParser::NumberOfPlayerContext::NumberOfPlayerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::NumberOfPlayerContext::MOT() {
  return getToken(HistoryParser::MOT, 0);
}


size_t HistoryParser::NumberOfPlayerContext::getRuleIndex() const {
  return HistoryParser::RuleNumberOfPlayer;
}

void HistoryParser::NumberOfPlayerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumberOfPlayer(this);
}

void HistoryParser::NumberOfPlayerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumberOfPlayer(this);
}


antlrcpp::Any HistoryParser::NumberOfPlayerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitNumberOfPlayer(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::NumberOfPlayerContext* HistoryParser::numberOfPlayer() {
  NumberOfPlayerContext *_localctx = _tracker.createInstance<NumberOfPlayerContext>(_ctx, getState());
  enterRule(_localctx, 62, HistoryParser::RuleNumberOfPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(325);
    match(HistoryParser::MOT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhoIsButtonContext ------------------------------------------------------------------

HistoryParser::WhoIsButtonContext::WhoIsButtonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::WhoIsButtonContext::SEATALONE() {
  return getToken(HistoryParser::SEATALONE, 0);
}

tree::TerminalNode* HistoryParser::WhoIsButtonContext::HASHTAG() {
  return getToken(HistoryParser::HASHTAG, 0);
}

HistoryParser::ButtonIdContext* HistoryParser::WhoIsButtonContext::buttonId() {
  return getRuleContext<HistoryParser::ButtonIdContext>(0);
}

tree::TerminalNode* HistoryParser::WhoIsButtonContext::ISBUTTON() {
  return getToken(HistoryParser::ISBUTTON, 0);
}


size_t HistoryParser::WhoIsButtonContext::getRuleIndex() const {
  return HistoryParser::RuleWhoIsButton;
}

void HistoryParser::WhoIsButtonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhoIsButton(this);
}

void HistoryParser::WhoIsButtonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhoIsButton(this);
}


antlrcpp::Any HistoryParser::WhoIsButtonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitWhoIsButton(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::WhoIsButtonContext* HistoryParser::whoIsButton() {
  WhoIsButtonContext *_localctx = _tracker.createInstance<WhoIsButtonContext>(_ctx, getState());
  enterRule(_localctx, 64, HistoryParser::RuleWhoIsButton);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(327);
    match(HistoryParser::SEATALONE);
    setState(328);
    match(HistoryParser::HASHTAG);
    setState(329);
    buttonId();
    setState(330);
    match(HistoryParser::ISBUTTON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ButtonIdContext ------------------------------------------------------------------

HistoryParser::ButtonIdContext::ButtonIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::ButtonIdContext::DIGIT() {
  return getToken(HistoryParser::DIGIT, 0);
}


size_t HistoryParser::ButtonIdContext::getRuleIndex() const {
  return HistoryParser::RuleButtonId;
}

void HistoryParser::ButtonIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterButtonId(this);
}

void HistoryParser::ButtonIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitButtonId(this);
}


antlrcpp::Any HistoryParser::ButtonIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitButtonId(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::ButtonIdContext* HistoryParser::buttonId() {
  ButtonIdContext *_localctx = _tracker.createInstance<ButtonIdContext>(_ctx, getState());
  enterRule(_localctx, 66, HistoryParser::RuleButtonId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(332);
    match(HistoryParser::DIGIT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PositionsContext ------------------------------------------------------------------

HistoryParser::PositionsContext::PositionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HistoryParser::RecapPlaceContext *> HistoryParser::PositionsContext::recapPlace() {
  return getRuleContexts<HistoryParser::RecapPlaceContext>();
}

HistoryParser::RecapPlaceContext* HistoryParser::PositionsContext::recapPlace(size_t i) {
  return getRuleContext<HistoryParser::RecapPlaceContext>(i);
}


size_t HistoryParser::PositionsContext::getRuleIndex() const {
  return HistoryParser::RulePositions;
}

void HistoryParser::PositionsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPositions(this);
}

void HistoryParser::PositionsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPositions(this);
}


antlrcpp::Any HistoryParser::PositionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitPositions(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::PositionsContext* HistoryParser::positions() {
  PositionsContext *_localctx = _tracker.createInstance<PositionsContext>(_ctx, getState());
  enterRule(_localctx, 68, HistoryParser::RulePositions);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(335); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(334);
      recapPlace();
      setState(337); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == HistoryParser::SEAT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RecapPlaceContext ------------------------------------------------------------------

HistoryParser::RecapPlaceContext::RecapPlaceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryParser::SiegeContext* HistoryParser::RecapPlaceContext::siege() {
  return getRuleContext<HistoryParser::SiegeContext>(0);
}

HistoryParser::PseudoContext* HistoryParser::RecapPlaceContext::pseudo() {
  return getRuleContext<HistoryParser::PseudoContext>(0);
}

HistoryParser::TapisContext* HistoryParser::RecapPlaceContext::tapis() {
  return getRuleContext<HistoryParser::TapisContext>(0);
}


size_t HistoryParser::RecapPlaceContext::getRuleIndex() const {
  return HistoryParser::RuleRecapPlace;
}

void HistoryParser::RecapPlaceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRecapPlace(this);
}

void HistoryParser::RecapPlaceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRecapPlace(this);
}


antlrcpp::Any HistoryParser::RecapPlaceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitRecapPlace(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::RecapPlaceContext* HistoryParser::recapPlace() {
  RecapPlaceContext *_localctx = _tracker.createInstance<RecapPlaceContext>(_ctx, getState());
  enterRule(_localctx, 70, HistoryParser::RuleRecapPlace);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(339);
    siege();
    setState(340);
    pseudo();
    setState(341);
    tapis();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SiegeContext ------------------------------------------------------------------

HistoryParser::SiegeContext::SiegeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::SiegeContext::SEAT() {
  return getToken(HistoryParser::SEAT, 0);
}

tree::TerminalNode* HistoryParser::SiegeContext::COLON() {
  return getToken(HistoryParser::COLON, 0);
}


size_t HistoryParser::SiegeContext::getRuleIndex() const {
  return HistoryParser::RuleSiege;
}

void HistoryParser::SiegeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSiege(this);
}

void HistoryParser::SiegeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSiege(this);
}


antlrcpp::Any HistoryParser::SiegeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitSiege(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::SiegeContext* HistoryParser::siege() {
  SiegeContext *_localctx = _tracker.createInstance<SiegeContext>(_ctx, getState());
  enterRule(_localctx, 72, HistoryParser::RuleSiege);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(343);
    match(HistoryParser::SEAT);
    setState(344);
    match(HistoryParser::COLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PseudoContext ------------------------------------------------------------------

HistoryParser::PseudoContext::PseudoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> HistoryParser::PseudoContext::MOT() {
  return getTokens(HistoryParser::MOT);
}

tree::TerminalNode* HistoryParser::PseudoContext::MOT(size_t i) {
  return getToken(HistoryParser::MOT, i);
}

std::vector<tree::TerminalNode *> HistoryParser::PseudoContext::NUMBER() {
  return getTokens(HistoryParser::NUMBER);
}

tree::TerminalNode* HistoryParser::PseudoContext::NUMBER(size_t i) {
  return getToken(HistoryParser::NUMBER, i);
}


size_t HistoryParser::PseudoContext::getRuleIndex() const {
  return HistoryParser::RulePseudo;
}

void HistoryParser::PseudoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPseudo(this);
}

void HistoryParser::PseudoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPseudo(this);
}


antlrcpp::Any HistoryParser::PseudoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitPseudo(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::PseudoContext* HistoryParser::pseudo() {
  PseudoContext *_localctx = _tracker.createInstance<PseudoContext>(_ctx, getState());
  enterRule(_localctx, 74, HistoryParser::RulePseudo);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(347); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(346);
      _la = _input->LA(1);
      if (!(_la == HistoryParser::NUMBER

      || _la == HistoryParser::MOT)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(349); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == HistoryParser::NUMBER

    || _la == HistoryParser::MOT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TapisContext ------------------------------------------------------------------

HistoryParser::TapisContext::TapisContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::TapisContext::LPAREN() {
  return getToken(HistoryParser::LPAREN, 0);
}

tree::TerminalNode* HistoryParser::TapisContext::NUMBER() {
  return getToken(HistoryParser::NUMBER, 0);
}

tree::TerminalNode* HistoryParser::TapisContext::RPAREN() {
  return getToken(HistoryParser::RPAREN, 0);
}


size_t HistoryParser::TapisContext::getRuleIndex() const {
  return HistoryParser::RuleTapis;
}

void HistoryParser::TapisContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTapis(this);
}

void HistoryParser::TapisContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTapis(this);
}


antlrcpp::Any HistoryParser::TapisContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitTapis(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::TapisContext* HistoryParser::tapis() {
  TapisContext *_localctx = _tracker.createInstance<TapisContext>(_ctx, getState());
  enterRule(_localctx, 76, HistoryParser::RuleTapis);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(351);
    match(HistoryParser::LPAREN);
    setState(352);
    match(HistoryParser::NUMBER);
    setState(353);
    match(HistoryParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnteblindSectionContext ------------------------------------------------------------------

HistoryParser::AnteblindSectionContext::AnteblindSectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryParser::AnteblindHeaderContext* HistoryParser::AnteblindSectionContext::anteblindHeader() {
  return getRuleContext<HistoryParser::AnteblindHeaderContext>(0);
}

HistoryParser::SmallblindligneContext* HistoryParser::AnteblindSectionContext::smallblindligne() {
  return getRuleContext<HistoryParser::SmallblindligneContext>(0);
}

HistoryParser::BigblindligneContext* HistoryParser::AnteblindSectionContext::bigblindligne() {
  return getRuleContext<HistoryParser::BigblindligneContext>(0);
}

HistoryParser::CardligneContext* HistoryParser::AnteblindSectionContext::cardligne() {
  return getRuleContext<HistoryParser::CardligneContext>(0);
}

std::vector<HistoryParser::AnteligneContext *> HistoryParser::AnteblindSectionContext::anteligne() {
  return getRuleContexts<HistoryParser::AnteligneContext>();
}

HistoryParser::AnteligneContext* HistoryParser::AnteblindSectionContext::anteligne(size_t i) {
  return getRuleContext<HistoryParser::AnteligneContext>(i);
}


size_t HistoryParser::AnteblindSectionContext::getRuleIndex() const {
  return HistoryParser::RuleAnteblindSection;
}

void HistoryParser::AnteblindSectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnteblindSection(this);
}

void HistoryParser::AnteblindSectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnteblindSection(this);
}


antlrcpp::Any HistoryParser::AnteblindSectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitAnteblindSection(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::AnteblindSectionContext* HistoryParser::anteblindSection() {
  AnteblindSectionContext *_localctx = _tracker.createInstance<AnteblindSectionContext>(_ctx, getState());
  enterRule(_localctx, 78, HistoryParser::RuleAnteblindSection);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(355);
    anteblindHeader();
    setState(357); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(356);
              anteligne();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(359); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(361);
    smallblindligne();
    setState(362);
    bigblindligne();
    setState(363);
    cardligne();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnteblindHeaderContext ------------------------------------------------------------------

HistoryParser::AnteblindHeaderContext::AnteblindHeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::AnteblindHeaderContext::ANTEBLIND() {
  return getToken(HistoryParser::ANTEBLIND, 0);
}


size_t HistoryParser::AnteblindHeaderContext::getRuleIndex() const {
  return HistoryParser::RuleAnteblindHeader;
}

void HistoryParser::AnteblindHeaderContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnteblindHeader(this);
}

void HistoryParser::AnteblindHeaderContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnteblindHeader(this);
}


antlrcpp::Any HistoryParser::AnteblindHeaderContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitAnteblindHeader(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::AnteblindHeaderContext* HistoryParser::anteblindHeader() {
  AnteblindHeaderContext *_localctx = _tracker.createInstance<AnteblindHeaderContext>(_ctx, getState());
  enterRule(_localctx, 80, HistoryParser::RuleAnteblindHeader);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(365);
    match(HistoryParser::ANTEBLIND);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnteligneContext ------------------------------------------------------------------

HistoryParser::AnteligneContext::AnteligneContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryParser::PseudoContext* HistoryParser::AnteligneContext::pseudo() {
  return getRuleContext<HistoryParser::PseudoContext>(0);
}

tree::TerminalNode* HistoryParser::AnteligneContext::POSTANTE() {
  return getToken(HistoryParser::POSTANTE, 0);
}

HistoryParser::AnteSommeContext* HistoryParser::AnteligneContext::anteSomme() {
  return getRuleContext<HistoryParser::AnteSommeContext>(0);
}

tree::TerminalNode* HistoryParser::AnteligneContext::ISALLIN() {
  return getToken(HistoryParser::ISALLIN, 0);
}


size_t HistoryParser::AnteligneContext::getRuleIndex() const {
  return HistoryParser::RuleAnteligne;
}

void HistoryParser::AnteligneContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnteligne(this);
}

void HistoryParser::AnteligneContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnteligne(this);
}


antlrcpp::Any HistoryParser::AnteligneContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitAnteligne(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::AnteligneContext* HistoryParser::anteligne() {
  AnteligneContext *_localctx = _tracker.createInstance<AnteligneContext>(_ctx, getState());
  enterRule(_localctx, 82, HistoryParser::RuleAnteligne);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(367);
    pseudo();
    setState(368);
    match(HistoryParser::POSTANTE);
    setState(369);
    anteSomme();
    setState(371);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryParser::ISALLIN) {
      setState(370);
      match(HistoryParser::ISALLIN);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnteSommeContext ------------------------------------------------------------------

HistoryParser::AnteSommeContext::AnteSommeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::AnteSommeContext::NUMBER() {
  return getToken(HistoryParser::NUMBER, 0);
}

tree::TerminalNode* HistoryParser::AnteSommeContext::DIGIT() {
  return getToken(HistoryParser::DIGIT, 0);
}


size_t HistoryParser::AnteSommeContext::getRuleIndex() const {
  return HistoryParser::RuleAnteSomme;
}

void HistoryParser::AnteSommeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnteSomme(this);
}

void HistoryParser::AnteSommeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnteSomme(this);
}


antlrcpp::Any HistoryParser::AnteSommeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitAnteSomme(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::AnteSommeContext* HistoryParser::anteSomme() {
  AnteSommeContext *_localctx = _tracker.createInstance<AnteSommeContext>(_ctx, getState());
  enterRule(_localctx, 84, HistoryParser::RuleAnteSomme);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(373);
    _la = _input->LA(1);
    if (!(_la == HistoryParser::DIGIT

    || _la == HistoryParser::NUMBER)) {
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

//----------------- SmallblindligneContext ------------------------------------------------------------------

HistoryParser::SmallblindligneContext::SmallblindligneContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryParser::PseudoContext* HistoryParser::SmallblindligneContext::pseudo() {
  return getRuleContext<HistoryParser::PseudoContext>(0);
}

tree::TerminalNode* HistoryParser::SmallblindligneContext::POSTSB() {
  return getToken(HistoryParser::POSTSB, 0);
}

HistoryParser::SmallblindSommeContext* HistoryParser::SmallblindligneContext::smallblindSomme() {
  return getRuleContext<HistoryParser::SmallblindSommeContext>(0);
}

tree::TerminalNode* HistoryParser::SmallblindligneContext::ISALLIN() {
  return getToken(HistoryParser::ISALLIN, 0);
}


size_t HistoryParser::SmallblindligneContext::getRuleIndex() const {
  return HistoryParser::RuleSmallblindligne;
}

void HistoryParser::SmallblindligneContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSmallblindligne(this);
}

void HistoryParser::SmallblindligneContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSmallblindligne(this);
}


antlrcpp::Any HistoryParser::SmallblindligneContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitSmallblindligne(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::SmallblindligneContext* HistoryParser::smallblindligne() {
  SmallblindligneContext *_localctx = _tracker.createInstance<SmallblindligneContext>(_ctx, getState());
  enterRule(_localctx, 86, HistoryParser::RuleSmallblindligne);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(375);
    pseudo();
    setState(376);
    match(HistoryParser::POSTSB);
    setState(377);
    smallblindSomme();
    setState(379);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryParser::ISALLIN) {
      setState(378);
      match(HistoryParser::ISALLIN);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SmallblindSommeContext ------------------------------------------------------------------

HistoryParser::SmallblindSommeContext::SmallblindSommeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::SmallblindSommeContext::NUMBER() {
  return getToken(HistoryParser::NUMBER, 0);
}


size_t HistoryParser::SmallblindSommeContext::getRuleIndex() const {
  return HistoryParser::RuleSmallblindSomme;
}

void HistoryParser::SmallblindSommeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSmallblindSomme(this);
}

void HistoryParser::SmallblindSommeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSmallblindSomme(this);
}


antlrcpp::Any HistoryParser::SmallblindSommeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitSmallblindSomme(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::SmallblindSommeContext* HistoryParser::smallblindSomme() {
  SmallblindSommeContext *_localctx = _tracker.createInstance<SmallblindSommeContext>(_ctx, getState());
  enterRule(_localctx, 88, HistoryParser::RuleSmallblindSomme);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(381);
    match(HistoryParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BigblindligneContext ------------------------------------------------------------------

HistoryParser::BigblindligneContext::BigblindligneContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryParser::PseudoContext* HistoryParser::BigblindligneContext::pseudo() {
  return getRuleContext<HistoryParser::PseudoContext>(0);
}

tree::TerminalNode* HistoryParser::BigblindligneContext::POSTBB() {
  return getToken(HistoryParser::POSTBB, 0);
}

HistoryParser::BigblindSommeContext* HistoryParser::BigblindligneContext::bigblindSomme() {
  return getRuleContext<HistoryParser::BigblindSommeContext>(0);
}

tree::TerminalNode* HistoryParser::BigblindligneContext::ISALLIN() {
  return getToken(HistoryParser::ISALLIN, 0);
}


size_t HistoryParser::BigblindligneContext::getRuleIndex() const {
  return HistoryParser::RuleBigblindligne;
}

void HistoryParser::BigblindligneContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBigblindligne(this);
}

void HistoryParser::BigblindligneContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBigblindligne(this);
}


antlrcpp::Any HistoryParser::BigblindligneContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitBigblindligne(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::BigblindligneContext* HistoryParser::bigblindligne() {
  BigblindligneContext *_localctx = _tracker.createInstance<BigblindligneContext>(_ctx, getState());
  enterRule(_localctx, 90, HistoryParser::RuleBigblindligne);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(383);
    pseudo();
    setState(384);
    match(HistoryParser::POSTBB);
    setState(385);
    bigblindSomme();
    setState(387);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryParser::ISALLIN) {
      setState(386);
      match(HistoryParser::ISALLIN);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BigblindSommeContext ------------------------------------------------------------------

HistoryParser::BigblindSommeContext::BigblindSommeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::BigblindSommeContext::NUMBER() {
  return getToken(HistoryParser::NUMBER, 0);
}


size_t HistoryParser::BigblindSommeContext::getRuleIndex() const {
  return HistoryParser::RuleBigblindSomme;
}

void HistoryParser::BigblindSommeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBigblindSomme(this);
}

void HistoryParser::BigblindSommeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBigblindSomme(this);
}


antlrcpp::Any HistoryParser::BigblindSommeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitBigblindSomme(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::BigblindSommeContext* HistoryParser::bigblindSomme() {
  BigblindSommeContext *_localctx = _tracker.createInstance<BigblindSommeContext>(_ctx, getState());
  enterRule(_localctx, 92, HistoryParser::RuleBigblindSomme);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(389);
    match(HistoryParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CardligneContext ------------------------------------------------------------------

HistoryParser::CardligneContext::CardligneContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::CardligneContext::DEALTTO() {
  return getToken(HistoryParser::DEALTTO, 0);
}

HistoryParser::PseudoContext* HistoryParser::CardligneContext::pseudo() {
  return getRuleContext<HistoryParser::PseudoContext>(0);
}

HistoryParser::CartePersoContext* HistoryParser::CardligneContext::cartePerso() {
  return getRuleContext<HistoryParser::CartePersoContext>(0);
}


size_t HistoryParser::CardligneContext::getRuleIndex() const {
  return HistoryParser::RuleCardligne;
}

void HistoryParser::CardligneContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCardligne(this);
}

void HistoryParser::CardligneContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCardligne(this);
}


antlrcpp::Any HistoryParser::CardligneContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitCardligne(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::CardligneContext* HistoryParser::cardligne() {
  CardligneContext *_localctx = _tracker.createInstance<CardligneContext>(_ctx, getState());
  enterRule(_localctx, 94, HistoryParser::RuleCardligne);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(391);
    match(HistoryParser::DEALTTO);
    setState(392);
    pseudo();
    setState(393);
    cartePerso();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CartePersoContext ------------------------------------------------------------------

HistoryParser::CartePersoContext::CartePersoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::CartePersoContext::LCROCH() {
  return getToken(HistoryParser::LCROCH, 0);
}

std::vector<tree::TerminalNode *> HistoryParser::CartePersoContext::MOT() {
  return getTokens(HistoryParser::MOT);
}

tree::TerminalNode* HistoryParser::CartePersoContext::MOT(size_t i) {
  return getToken(HistoryParser::MOT, i);
}

tree::TerminalNode* HistoryParser::CartePersoContext::RCROCH() {
  return getToken(HistoryParser::RCROCH, 0);
}


size_t HistoryParser::CartePersoContext::getRuleIndex() const {
  return HistoryParser::RuleCartePerso;
}

void HistoryParser::CartePersoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCartePerso(this);
}

void HistoryParser::CartePersoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCartePerso(this);
}


antlrcpp::Any HistoryParser::CartePersoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitCartePerso(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::CartePersoContext* HistoryParser::cartePerso() {
  CartePersoContext *_localctx = _tracker.createInstance<CartePersoContext>(_ctx, getState());
  enterRule(_localctx, 96, HistoryParser::RuleCartePerso);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(395);
    match(HistoryParser::LCROCH);
    setState(396);
    match(HistoryParser::MOT);
    setState(397);
    match(HistoryParser::MOT);
    setState(398);
    match(HistoryParser::RCROCH);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PreflopSectionContext ------------------------------------------------------------------

HistoryParser::PreflopSectionContext::PreflopSectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryParser::PreflopHeaderContext* HistoryParser::PreflopSectionContext::preflopHeader() {
  return getRuleContext<HistoryParser::PreflopHeaderContext>(0);
}

HistoryParser::CombinaisonLigneContext* HistoryParser::PreflopSectionContext::combinaisonLigne() {
  return getRuleContext<HistoryParser::CombinaisonLigneContext>(0);
}

HistoryParser::WinContext* HistoryParser::PreflopSectionContext::win() {
  return getRuleContext<HistoryParser::WinContext>(0);
}

std::vector<HistoryParser::PlayActionContext *> HistoryParser::PreflopSectionContext::playAction() {
  return getRuleContexts<HistoryParser::PlayActionContext>();
}

HistoryParser::PlayActionContext* HistoryParser::PreflopSectionContext::playAction(size_t i) {
  return getRuleContext<HistoryParser::PlayActionContext>(i);
}


size_t HistoryParser::PreflopSectionContext::getRuleIndex() const {
  return HistoryParser::RulePreflopSection;
}

void HistoryParser::PreflopSectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreflopSection(this);
}

void HistoryParser::PreflopSectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreflopSection(this);
}


antlrcpp::Any HistoryParser::PreflopSectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitPreflopSection(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::PreflopSectionContext* HistoryParser::preflopSection() {
  PreflopSectionContext *_localctx = _tracker.createInstance<PreflopSectionContext>(_ctx, getState());
  enterRule(_localctx, 98, HistoryParser::RulePreflopSection);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(400);
    preflopHeader();
    setState(406);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      setState(402); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(401);
                playAction();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(404); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    }
    setState(409);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      setState(408);
      combinaisonLigne();
      break;
    }

    }
    setState(412);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryParser::NUMBER

    || _la == HistoryParser::MOT) {
      setState(411);
      win();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PreflopHeaderContext ------------------------------------------------------------------

HistoryParser::PreflopHeaderContext::PreflopHeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::PreflopHeaderContext::PREFLOP() {
  return getToken(HistoryParser::PREFLOP, 0);
}


size_t HistoryParser::PreflopHeaderContext::getRuleIndex() const {
  return HistoryParser::RulePreflopHeader;
}

void HistoryParser::PreflopHeaderContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreflopHeader(this);
}

void HistoryParser::PreflopHeaderContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreflopHeader(this);
}


antlrcpp::Any HistoryParser::PreflopHeaderContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitPreflopHeader(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::PreflopHeaderContext* HistoryParser::preflopHeader() {
  PreflopHeaderContext *_localctx = _tracker.createInstance<PreflopHeaderContext>(_ctx, getState());
  enterRule(_localctx, 100, HistoryParser::RulePreflopHeader);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(414);
    match(HistoryParser::PREFLOP);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PlayActionContext ------------------------------------------------------------------

HistoryParser::PlayActionContext::PlayActionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryParser::RaiseActionContext* HistoryParser::PlayActionContext::raiseAction() {
  return getRuleContext<HistoryParser::RaiseActionContext>(0);
}

HistoryParser::FoldActionContext* HistoryParser::PlayActionContext::foldAction() {
  return getRuleContext<HistoryParser::FoldActionContext>(0);
}

HistoryParser::BetActionContext* HistoryParser::PlayActionContext::betAction() {
  return getRuleContext<HistoryParser::BetActionContext>(0);
}

HistoryParser::CheckActionContext* HistoryParser::PlayActionContext::checkAction() {
  return getRuleContext<HistoryParser::CheckActionContext>(0);
}

HistoryParser::CallActionContext* HistoryParser::PlayActionContext::callAction() {
  return getRuleContext<HistoryParser::CallActionContext>(0);
}


size_t HistoryParser::PlayActionContext::getRuleIndex() const {
  return HistoryParser::RulePlayAction;
}

void HistoryParser::PlayActionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPlayAction(this);
}

void HistoryParser::PlayActionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPlayAction(this);
}


antlrcpp::Any HistoryParser::PlayActionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitPlayAction(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::PlayActionContext* HistoryParser::playAction() {
  PlayActionContext *_localctx = _tracker.createInstance<PlayActionContext>(_ctx, getState());
  enterRule(_localctx, 102, HistoryParser::RulePlayAction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(421);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      setState(416);
      raiseAction();
      break;
    }

    case 2: {
      setState(417);
      foldAction();
      break;
    }

    case 3: {
      setState(418);
      betAction();
      break;
    }

    case 4: {
      setState(419);
      checkAction();
      break;
    }

    case 5: {
      setState(420);
      callAction();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RaiseActionContext ------------------------------------------------------------------

HistoryParser::RaiseActionContext::RaiseActionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryParser::PseudoContext* HistoryParser::RaiseActionContext::pseudo() {
  return getRuleContext<HistoryParser::PseudoContext>(0);
}

tree::TerminalNode* HistoryParser::RaiseActionContext::RAISE() {
  return getToken(HistoryParser::RAISE, 0);
}

HistoryParser::InitialRaiseValueContext* HistoryParser::RaiseActionContext::initialRaiseValue() {
  return getRuleContext<HistoryParser::InitialRaiseValueContext>(0);
}

tree::TerminalNode* HistoryParser::RaiseActionContext::TO() {
  return getToken(HistoryParser::TO, 0);
}

HistoryParser::FinalraiseValueContext* HistoryParser::RaiseActionContext::finalraiseValue() {
  return getRuleContext<HistoryParser::FinalraiseValueContext>(0);
}

tree::TerminalNode* HistoryParser::RaiseActionContext::ISALLIN() {
  return getToken(HistoryParser::ISALLIN, 0);
}


size_t HistoryParser::RaiseActionContext::getRuleIndex() const {
  return HistoryParser::RuleRaiseAction;
}

void HistoryParser::RaiseActionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRaiseAction(this);
}

void HistoryParser::RaiseActionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRaiseAction(this);
}


antlrcpp::Any HistoryParser::RaiseActionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitRaiseAction(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::RaiseActionContext* HistoryParser::raiseAction() {
  RaiseActionContext *_localctx = _tracker.createInstance<RaiseActionContext>(_ctx, getState());
  enterRule(_localctx, 104, HistoryParser::RuleRaiseAction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(423);
    pseudo();
    setState(424);
    match(HistoryParser::RAISE);
    setState(425);
    initialRaiseValue();
    setState(426);
    match(HistoryParser::TO);
    setState(427);
    finalraiseValue();
    setState(429);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryParser::ISALLIN) {
      setState(428);
      match(HistoryParser::ISALLIN);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FoldActionContext ------------------------------------------------------------------

HistoryParser::FoldActionContext::FoldActionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryParser::PseudoContext* HistoryParser::FoldActionContext::pseudo() {
  return getRuleContext<HistoryParser::PseudoContext>(0);
}

tree::TerminalNode* HistoryParser::FoldActionContext::FOLD() {
  return getToken(HistoryParser::FOLD, 0);
}


size_t HistoryParser::FoldActionContext::getRuleIndex() const {
  return HistoryParser::RuleFoldAction;
}

void HistoryParser::FoldActionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFoldAction(this);
}

void HistoryParser::FoldActionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFoldAction(this);
}


antlrcpp::Any HistoryParser::FoldActionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitFoldAction(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::FoldActionContext* HistoryParser::foldAction() {
  FoldActionContext *_localctx = _tracker.createInstance<FoldActionContext>(_ctx, getState());
  enterRule(_localctx, 106, HistoryParser::RuleFoldAction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(431);
    pseudo();
    setState(432);
    match(HistoryParser::FOLD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BetActionContext ------------------------------------------------------------------

HistoryParser::BetActionContext::BetActionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryParser::PseudoContext* HistoryParser::BetActionContext::pseudo() {
  return getRuleContext<HistoryParser::PseudoContext>(0);
}

tree::TerminalNode* HistoryParser::BetActionContext::BET() {
  return getToken(HistoryParser::BET, 0);
}

HistoryParser::BetValueContext* HistoryParser::BetActionContext::betValue() {
  return getRuleContext<HistoryParser::BetValueContext>(0);
}

tree::TerminalNode* HistoryParser::BetActionContext::ISALLIN() {
  return getToken(HistoryParser::ISALLIN, 0);
}


size_t HistoryParser::BetActionContext::getRuleIndex() const {
  return HistoryParser::RuleBetAction;
}

void HistoryParser::BetActionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBetAction(this);
}

void HistoryParser::BetActionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBetAction(this);
}


antlrcpp::Any HistoryParser::BetActionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitBetAction(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::BetActionContext* HistoryParser::betAction() {
  BetActionContext *_localctx = _tracker.createInstance<BetActionContext>(_ctx, getState());
  enterRule(_localctx, 108, HistoryParser::RuleBetAction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(434);
    pseudo();
    setState(435);
    match(HistoryParser::BET);
    setState(436);
    betValue();
    setState(438);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryParser::ISALLIN) {
      setState(437);
      match(HistoryParser::ISALLIN);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CheckActionContext ------------------------------------------------------------------

HistoryParser::CheckActionContext::CheckActionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryParser::PseudoContext* HistoryParser::CheckActionContext::pseudo() {
  return getRuleContext<HistoryParser::PseudoContext>(0);
}

tree::TerminalNode* HistoryParser::CheckActionContext::CHECK() {
  return getToken(HistoryParser::CHECK, 0);
}


size_t HistoryParser::CheckActionContext::getRuleIndex() const {
  return HistoryParser::RuleCheckAction;
}

void HistoryParser::CheckActionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCheckAction(this);
}

void HistoryParser::CheckActionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCheckAction(this);
}


antlrcpp::Any HistoryParser::CheckActionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitCheckAction(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::CheckActionContext* HistoryParser::checkAction() {
  CheckActionContext *_localctx = _tracker.createInstance<CheckActionContext>(_ctx, getState());
  enterRule(_localctx, 110, HistoryParser::RuleCheckAction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(440);
    pseudo();
    setState(441);
    match(HistoryParser::CHECK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallActionContext ------------------------------------------------------------------

HistoryParser::CallActionContext::CallActionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryParser::PseudoContext* HistoryParser::CallActionContext::pseudo() {
  return getRuleContext<HistoryParser::PseudoContext>(0);
}

tree::TerminalNode* HistoryParser::CallActionContext::CALL() {
  return getToken(HistoryParser::CALL, 0);
}

HistoryParser::CallValueContext* HistoryParser::CallActionContext::callValue() {
  return getRuleContext<HistoryParser::CallValueContext>(0);
}

tree::TerminalNode* HistoryParser::CallActionContext::ISALLIN() {
  return getToken(HistoryParser::ISALLIN, 0);
}


size_t HistoryParser::CallActionContext::getRuleIndex() const {
  return HistoryParser::RuleCallAction;
}

void HistoryParser::CallActionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCallAction(this);
}

void HistoryParser::CallActionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCallAction(this);
}


antlrcpp::Any HistoryParser::CallActionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitCallAction(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::CallActionContext* HistoryParser::callAction() {
  CallActionContext *_localctx = _tracker.createInstance<CallActionContext>(_ctx, getState());
  enterRule(_localctx, 112, HistoryParser::RuleCallAction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(443);
    pseudo();
    setState(444);
    match(HistoryParser::CALL);
    setState(445);
    callValue();
    setState(447);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryParser::ISALLIN) {
      setState(446);
      match(HistoryParser::ISALLIN);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitialRaiseValueContext ------------------------------------------------------------------

HistoryParser::InitialRaiseValueContext::InitialRaiseValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::InitialRaiseValueContext::NUMBER() {
  return getToken(HistoryParser::NUMBER, 0);
}


size_t HistoryParser::InitialRaiseValueContext::getRuleIndex() const {
  return HistoryParser::RuleInitialRaiseValue;
}

void HistoryParser::InitialRaiseValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitialRaiseValue(this);
}

void HistoryParser::InitialRaiseValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitialRaiseValue(this);
}


antlrcpp::Any HistoryParser::InitialRaiseValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitInitialRaiseValue(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::InitialRaiseValueContext* HistoryParser::initialRaiseValue() {
  InitialRaiseValueContext *_localctx = _tracker.createInstance<InitialRaiseValueContext>(_ctx, getState());
  enterRule(_localctx, 114, HistoryParser::RuleInitialRaiseValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(449);
    match(HistoryParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FinalraiseValueContext ------------------------------------------------------------------

HistoryParser::FinalraiseValueContext::FinalraiseValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::FinalraiseValueContext::NUMBER() {
  return getToken(HistoryParser::NUMBER, 0);
}


size_t HistoryParser::FinalraiseValueContext::getRuleIndex() const {
  return HistoryParser::RuleFinalraiseValue;
}

void HistoryParser::FinalraiseValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFinalraiseValue(this);
}

void HistoryParser::FinalraiseValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFinalraiseValue(this);
}


antlrcpp::Any HistoryParser::FinalraiseValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitFinalraiseValue(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::FinalraiseValueContext* HistoryParser::finalraiseValue() {
  FinalraiseValueContext *_localctx = _tracker.createInstance<FinalraiseValueContext>(_ctx, getState());
  enterRule(_localctx, 116, HistoryParser::RuleFinalraiseValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(451);
    match(HistoryParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BetValueContext ------------------------------------------------------------------

HistoryParser::BetValueContext::BetValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::BetValueContext::NUMBER() {
  return getToken(HistoryParser::NUMBER, 0);
}


size_t HistoryParser::BetValueContext::getRuleIndex() const {
  return HistoryParser::RuleBetValue;
}

void HistoryParser::BetValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBetValue(this);
}

void HistoryParser::BetValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBetValue(this);
}


antlrcpp::Any HistoryParser::BetValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitBetValue(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::BetValueContext* HistoryParser::betValue() {
  BetValueContext *_localctx = _tracker.createInstance<BetValueContext>(_ctx, getState());
  enterRule(_localctx, 118, HistoryParser::RuleBetValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(453);
    match(HistoryParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallValueContext ------------------------------------------------------------------

HistoryParser::CallValueContext::CallValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::CallValueContext::NUMBER() {
  return getToken(HistoryParser::NUMBER, 0);
}


size_t HistoryParser::CallValueContext::getRuleIndex() const {
  return HistoryParser::RuleCallValue;
}

void HistoryParser::CallValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCallValue(this);
}

void HistoryParser::CallValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCallValue(this);
}


antlrcpp::Any HistoryParser::CallValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitCallValue(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::CallValueContext* HistoryParser::callValue() {
  CallValueContext *_localctx = _tracker.createInstance<CallValueContext>(_ctx, getState());
  enterRule(_localctx, 120, HistoryParser::RuleCallValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(455);
    match(HistoryParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WinContext ------------------------------------------------------------------

HistoryParser::WinContext::WinContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryParser::PseudoContext* HistoryParser::WinContext::pseudo() {
  return getRuleContext<HistoryParser::PseudoContext>(0);
}

tree::TerminalNode* HistoryParser::WinContext::COLLECTED() {
  return getToken(HistoryParser::COLLECTED, 0);
}

tree::TerminalNode* HistoryParser::WinContext::NUMBER() {
  return getToken(HistoryParser::NUMBER, 0);
}

tree::TerminalNode* HistoryParser::WinContext::FROMPOT() {
  return getToken(HistoryParser::FROMPOT, 0);
}


size_t HistoryParser::WinContext::getRuleIndex() const {
  return HistoryParser::RuleWin;
}

void HistoryParser::WinContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWin(this);
}

void HistoryParser::WinContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWin(this);
}


antlrcpp::Any HistoryParser::WinContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitWin(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::WinContext* HistoryParser::win() {
  WinContext *_localctx = _tracker.createInstance<WinContext>(_ctx, getState());
  enterRule(_localctx, 122, HistoryParser::RuleWin);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(457);
    pseudo();
    setState(458);
    match(HistoryParser::COLLECTED);
    setState(459);
    match(HistoryParser::NUMBER);
    setState(460);
    match(HistoryParser::FROMPOT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FlopSectionContext ------------------------------------------------------------------

HistoryParser::FlopSectionContext::FlopSectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryParser::FlopHeaderContext* HistoryParser::FlopSectionContext::flopHeader() {
  return getRuleContext<HistoryParser::FlopHeaderContext>(0);
}

HistoryParser::CombinaisonLigneContext* HistoryParser::FlopSectionContext::combinaisonLigne() {
  return getRuleContext<HistoryParser::CombinaisonLigneContext>(0);
}

HistoryParser::WinContext* HistoryParser::FlopSectionContext::win() {
  return getRuleContext<HistoryParser::WinContext>(0);
}

std::vector<HistoryParser::PlayActionContext *> HistoryParser::FlopSectionContext::playAction() {
  return getRuleContexts<HistoryParser::PlayActionContext>();
}

HistoryParser::PlayActionContext* HistoryParser::FlopSectionContext::playAction(size_t i) {
  return getRuleContext<HistoryParser::PlayActionContext>(i);
}


size_t HistoryParser::FlopSectionContext::getRuleIndex() const {
  return HistoryParser::RuleFlopSection;
}

void HistoryParser::FlopSectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFlopSection(this);
}

void HistoryParser::FlopSectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFlopSection(this);
}


antlrcpp::Any HistoryParser::FlopSectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitFlopSection(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::FlopSectionContext* HistoryParser::flopSection() {
  FlopSectionContext *_localctx = _tracker.createInstance<FlopSectionContext>(_ctx, getState());
  enterRule(_localctx, 124, HistoryParser::RuleFlopSection);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(462);
    flopHeader();
    setState(468);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      setState(464); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(463);
                playAction();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(466); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    }
    setState(471);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      setState(470);
      combinaisonLigne();
      break;
    }

    }
    setState(474);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryParser::NUMBER

    || _la == HistoryParser::MOT) {
      setState(473);
      win();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FlopHeaderContext ------------------------------------------------------------------

HistoryParser::FlopHeaderContext::FlopHeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::FlopHeaderContext::FLOP() {
  return getToken(HistoryParser::FLOP, 0);
}

HistoryParser::FlopcardsContext* HistoryParser::FlopHeaderContext::flopcards() {
  return getRuleContext<HistoryParser::FlopcardsContext>(0);
}


size_t HistoryParser::FlopHeaderContext::getRuleIndex() const {
  return HistoryParser::RuleFlopHeader;
}

void HistoryParser::FlopHeaderContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFlopHeader(this);
}

void HistoryParser::FlopHeaderContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFlopHeader(this);
}


antlrcpp::Any HistoryParser::FlopHeaderContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitFlopHeader(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::FlopHeaderContext* HistoryParser::flopHeader() {
  FlopHeaderContext *_localctx = _tracker.createInstance<FlopHeaderContext>(_ctx, getState());
  enterRule(_localctx, 126, HistoryParser::RuleFlopHeader);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(476);
    match(HistoryParser::FLOP);
    setState(477);
    flopcards();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FlopcardsContext ------------------------------------------------------------------

HistoryParser::FlopcardsContext::FlopcardsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::FlopcardsContext::LCROCH() {
  return getToken(HistoryParser::LCROCH, 0);
}

std::vector<tree::TerminalNode *> HistoryParser::FlopcardsContext::MOT() {
  return getTokens(HistoryParser::MOT);
}

tree::TerminalNode* HistoryParser::FlopcardsContext::MOT(size_t i) {
  return getToken(HistoryParser::MOT, i);
}

tree::TerminalNode* HistoryParser::FlopcardsContext::RCROCH() {
  return getToken(HistoryParser::RCROCH, 0);
}


size_t HistoryParser::FlopcardsContext::getRuleIndex() const {
  return HistoryParser::RuleFlopcards;
}

void HistoryParser::FlopcardsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFlopcards(this);
}

void HistoryParser::FlopcardsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFlopcards(this);
}


antlrcpp::Any HistoryParser::FlopcardsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitFlopcards(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::FlopcardsContext* HistoryParser::flopcards() {
  FlopcardsContext *_localctx = _tracker.createInstance<FlopcardsContext>(_ctx, getState());
  enterRule(_localctx, 128, HistoryParser::RuleFlopcards);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(479);
    match(HistoryParser::LCROCH);
    setState(480);
    match(HistoryParser::MOT);
    setState(481);
    match(HistoryParser::MOT);
    setState(482);
    match(HistoryParser::MOT);
    setState(483);
    match(HistoryParser::RCROCH);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TurnSectionContext ------------------------------------------------------------------

HistoryParser::TurnSectionContext::TurnSectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryParser::TurnHeaderContext* HistoryParser::TurnSectionContext::turnHeader() {
  return getRuleContext<HistoryParser::TurnHeaderContext>(0);
}

HistoryParser::CombinaisonLigneContext* HistoryParser::TurnSectionContext::combinaisonLigne() {
  return getRuleContext<HistoryParser::CombinaisonLigneContext>(0);
}

HistoryParser::WinContext* HistoryParser::TurnSectionContext::win() {
  return getRuleContext<HistoryParser::WinContext>(0);
}

std::vector<HistoryParser::PlayActionContext *> HistoryParser::TurnSectionContext::playAction() {
  return getRuleContexts<HistoryParser::PlayActionContext>();
}

HistoryParser::PlayActionContext* HistoryParser::TurnSectionContext::playAction(size_t i) {
  return getRuleContext<HistoryParser::PlayActionContext>(i);
}


size_t HistoryParser::TurnSectionContext::getRuleIndex() const {
  return HistoryParser::RuleTurnSection;
}

void HistoryParser::TurnSectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTurnSection(this);
}

void HistoryParser::TurnSectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTurnSection(this);
}


antlrcpp::Any HistoryParser::TurnSectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitTurnSection(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::TurnSectionContext* HistoryParser::turnSection() {
  TurnSectionContext *_localctx = _tracker.createInstance<TurnSectionContext>(_ctx, getState());
  enterRule(_localctx, 130, HistoryParser::RuleTurnSection);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(485);
    turnHeader();
    setState(491);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      setState(487); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(486);
                playAction();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(489); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    }
    setState(494);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      setState(493);
      combinaisonLigne();
      break;
    }

    }
    setState(497);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryParser::NUMBER

    || _la == HistoryParser::MOT) {
      setState(496);
      win();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TurnHeaderContext ------------------------------------------------------------------

HistoryParser::TurnHeaderContext::TurnHeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::TurnHeaderContext::TURN() {
  return getToken(HistoryParser::TURN, 0);
}

HistoryParser::TurnCardsContext* HistoryParser::TurnHeaderContext::turnCards() {
  return getRuleContext<HistoryParser::TurnCardsContext>(0);
}


size_t HistoryParser::TurnHeaderContext::getRuleIndex() const {
  return HistoryParser::RuleTurnHeader;
}

void HistoryParser::TurnHeaderContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTurnHeader(this);
}

void HistoryParser::TurnHeaderContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTurnHeader(this);
}


antlrcpp::Any HistoryParser::TurnHeaderContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitTurnHeader(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::TurnHeaderContext* HistoryParser::turnHeader() {
  TurnHeaderContext *_localctx = _tracker.createInstance<TurnHeaderContext>(_ctx, getState());
  enterRule(_localctx, 132, HistoryParser::RuleTurnHeader);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(499);
    match(HistoryParser::TURN);
    setState(500);
    turnCards();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TurnCardsContext ------------------------------------------------------------------

HistoryParser::TurnCardsContext::TurnCardsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> HistoryParser::TurnCardsContext::LCROCH() {
  return getTokens(HistoryParser::LCROCH);
}

tree::TerminalNode* HistoryParser::TurnCardsContext::LCROCH(size_t i) {
  return getToken(HistoryParser::LCROCH, i);
}

std::vector<tree::TerminalNode *> HistoryParser::TurnCardsContext::MOT() {
  return getTokens(HistoryParser::MOT);
}

tree::TerminalNode* HistoryParser::TurnCardsContext::MOT(size_t i) {
  return getToken(HistoryParser::MOT, i);
}

std::vector<tree::TerminalNode *> HistoryParser::TurnCardsContext::RCROCH() {
  return getTokens(HistoryParser::RCROCH);
}

tree::TerminalNode* HistoryParser::TurnCardsContext::RCROCH(size_t i) {
  return getToken(HistoryParser::RCROCH, i);
}


size_t HistoryParser::TurnCardsContext::getRuleIndex() const {
  return HistoryParser::RuleTurnCards;
}

void HistoryParser::TurnCardsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTurnCards(this);
}

void HistoryParser::TurnCardsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTurnCards(this);
}


antlrcpp::Any HistoryParser::TurnCardsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitTurnCards(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::TurnCardsContext* HistoryParser::turnCards() {
  TurnCardsContext *_localctx = _tracker.createInstance<TurnCardsContext>(_ctx, getState());
  enterRule(_localctx, 134, HistoryParser::RuleTurnCards);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(502);
    match(HistoryParser::LCROCH);
    setState(503);
    match(HistoryParser::MOT);
    setState(504);
    match(HistoryParser::MOT);
    setState(505);
    match(HistoryParser::MOT);
    setState(506);
    match(HistoryParser::RCROCH);
    setState(507);
    match(HistoryParser::LCROCH);
    setState(508);
    match(HistoryParser::MOT);
    setState(509);
    match(HistoryParser::RCROCH);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RiverSectionContext ------------------------------------------------------------------

HistoryParser::RiverSectionContext::RiverSectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryParser::RiverHeaderContext* HistoryParser::RiverSectionContext::riverHeader() {
  return getRuleContext<HistoryParser::RiverHeaderContext>(0);
}

HistoryParser::CombinaisonLigneContext* HistoryParser::RiverSectionContext::combinaisonLigne() {
  return getRuleContext<HistoryParser::CombinaisonLigneContext>(0);
}

HistoryParser::WinContext* HistoryParser::RiverSectionContext::win() {
  return getRuleContext<HistoryParser::WinContext>(0);
}

std::vector<HistoryParser::PlayActionContext *> HistoryParser::RiverSectionContext::playAction() {
  return getRuleContexts<HistoryParser::PlayActionContext>();
}

HistoryParser::PlayActionContext* HistoryParser::RiverSectionContext::playAction(size_t i) {
  return getRuleContext<HistoryParser::PlayActionContext>(i);
}


size_t HistoryParser::RiverSectionContext::getRuleIndex() const {
  return HistoryParser::RuleRiverSection;
}

void HistoryParser::RiverSectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRiverSection(this);
}

void HistoryParser::RiverSectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRiverSection(this);
}


antlrcpp::Any HistoryParser::RiverSectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitRiverSection(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::RiverSectionContext* HistoryParser::riverSection() {
  RiverSectionContext *_localctx = _tracker.createInstance<RiverSectionContext>(_ctx, getState());
  enterRule(_localctx, 136, HistoryParser::RuleRiverSection);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(511);
    riverHeader();
    setState(517);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      setState(513); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(512);
                playAction();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(515); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    }
    setState(520);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      setState(519);
      combinaisonLigne();
      break;
    }

    }
    setState(523);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryParser::NUMBER

    || _la == HistoryParser::MOT) {
      setState(522);
      win();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RiverHeaderContext ------------------------------------------------------------------

HistoryParser::RiverHeaderContext::RiverHeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::RiverHeaderContext::RIVER() {
  return getToken(HistoryParser::RIVER, 0);
}

HistoryParser::RiverCardsContext* HistoryParser::RiverHeaderContext::riverCards() {
  return getRuleContext<HistoryParser::RiverCardsContext>(0);
}


size_t HistoryParser::RiverHeaderContext::getRuleIndex() const {
  return HistoryParser::RuleRiverHeader;
}

void HistoryParser::RiverHeaderContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRiverHeader(this);
}

void HistoryParser::RiverHeaderContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRiverHeader(this);
}


antlrcpp::Any HistoryParser::RiverHeaderContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitRiverHeader(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::RiverHeaderContext* HistoryParser::riverHeader() {
  RiverHeaderContext *_localctx = _tracker.createInstance<RiverHeaderContext>(_ctx, getState());
  enterRule(_localctx, 138, HistoryParser::RuleRiverHeader);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(525);
    match(HistoryParser::RIVER);
    setState(526);
    riverCards();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RiverCardsContext ------------------------------------------------------------------

HistoryParser::RiverCardsContext::RiverCardsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> HistoryParser::RiverCardsContext::LCROCH() {
  return getTokens(HistoryParser::LCROCH);
}

tree::TerminalNode* HistoryParser::RiverCardsContext::LCROCH(size_t i) {
  return getToken(HistoryParser::LCROCH, i);
}

std::vector<tree::TerminalNode *> HistoryParser::RiverCardsContext::MOT() {
  return getTokens(HistoryParser::MOT);
}

tree::TerminalNode* HistoryParser::RiverCardsContext::MOT(size_t i) {
  return getToken(HistoryParser::MOT, i);
}

std::vector<tree::TerminalNode *> HistoryParser::RiverCardsContext::RCROCH() {
  return getTokens(HistoryParser::RCROCH);
}

tree::TerminalNode* HistoryParser::RiverCardsContext::RCROCH(size_t i) {
  return getToken(HistoryParser::RCROCH, i);
}


size_t HistoryParser::RiverCardsContext::getRuleIndex() const {
  return HistoryParser::RuleRiverCards;
}

void HistoryParser::RiverCardsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRiverCards(this);
}

void HistoryParser::RiverCardsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRiverCards(this);
}


antlrcpp::Any HistoryParser::RiverCardsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitRiverCards(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::RiverCardsContext* HistoryParser::riverCards() {
  RiverCardsContext *_localctx = _tracker.createInstance<RiverCardsContext>(_ctx, getState());
  enterRule(_localctx, 140, HistoryParser::RuleRiverCards);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(528);
    match(HistoryParser::LCROCH);
    setState(529);
    match(HistoryParser::MOT);
    setState(530);
    match(HistoryParser::MOT);
    setState(531);
    match(HistoryParser::MOT);
    setState(532);
    match(HistoryParser::MOT);
    setState(533);
    match(HistoryParser::RCROCH);
    setState(534);
    match(HistoryParser::LCROCH);
    setState(535);
    match(HistoryParser::MOT);
    setState(536);
    match(HistoryParser::RCROCH);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShowdownSectionContext ------------------------------------------------------------------

HistoryParser::ShowdownSectionContext::ShowdownSectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryParser::ShowdownHeaderContext* HistoryParser::ShowdownSectionContext::showdownHeader() {
  return getRuleContext<HistoryParser::ShowdownHeaderContext>(0);
}

std::vector<HistoryParser::CombinaisonLigneContext *> HistoryParser::ShowdownSectionContext::combinaisonLigne() {
  return getRuleContexts<HistoryParser::CombinaisonLigneContext>();
}

HistoryParser::CombinaisonLigneContext* HistoryParser::ShowdownSectionContext::combinaisonLigne(size_t i) {
  return getRuleContext<HistoryParser::CombinaisonLigneContext>(i);
}

std::vector<HistoryParser::ResultLigneContext *> HistoryParser::ShowdownSectionContext::resultLigne() {
  return getRuleContexts<HistoryParser::ResultLigneContext>();
}

HistoryParser::ResultLigneContext* HistoryParser::ShowdownSectionContext::resultLigne(size_t i) {
  return getRuleContext<HistoryParser::ResultLigneContext>(i);
}


size_t HistoryParser::ShowdownSectionContext::getRuleIndex() const {
  return HistoryParser::RuleShowdownSection;
}

void HistoryParser::ShowdownSectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShowdownSection(this);
}

void HistoryParser::ShowdownSectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShowdownSection(this);
}


antlrcpp::Any HistoryParser::ShowdownSectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitShowdownSection(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::ShowdownSectionContext* HistoryParser::showdownSection() {
  ShowdownSectionContext *_localctx = _tracker.createInstance<ShowdownSectionContext>(_ctx, getState());
  enterRule(_localctx, 142, HistoryParser::RuleShowdownSection);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(538);
    showdownHeader();
    setState(540); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(539);
              combinaisonLigne();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(542); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(545); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(544);
      resultLigne();
      setState(547); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == HistoryParser::NUMBER

    || _la == HistoryParser::MOT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShowdownHeaderContext ------------------------------------------------------------------

HistoryParser::ShowdownHeaderContext::ShowdownHeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::ShowdownHeaderContext::SHOWDOWN() {
  return getToken(HistoryParser::SHOWDOWN, 0);
}


size_t HistoryParser::ShowdownHeaderContext::getRuleIndex() const {
  return HistoryParser::RuleShowdownHeader;
}

void HistoryParser::ShowdownHeaderContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShowdownHeader(this);
}

void HistoryParser::ShowdownHeaderContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShowdownHeader(this);
}


antlrcpp::Any HistoryParser::ShowdownHeaderContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitShowdownHeader(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::ShowdownHeaderContext* HistoryParser::showdownHeader() {
  ShowdownHeaderContext *_localctx = _tracker.createInstance<ShowdownHeaderContext>(_ctx, getState());
  enterRule(_localctx, 144, HistoryParser::RuleShowdownHeader);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(549);
    match(HistoryParser::SHOWDOWN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CombinaisonLigneContext ------------------------------------------------------------------

HistoryParser::CombinaisonLigneContext::CombinaisonLigneContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryParser::PseudoContext* HistoryParser::CombinaisonLigneContext::pseudo() {
  return getRuleContext<HistoryParser::PseudoContext>(0);
}

tree::TerminalNode* HistoryParser::CombinaisonLigneContext::SHOW() {
  return getToken(HistoryParser::SHOW, 0);
}

HistoryParser::CartePersoContext* HistoryParser::CombinaisonLigneContext::cartePerso() {
  return getRuleContext<HistoryParser::CartePersoContext>(0);
}

HistoryParser::CombinaisonContext* HistoryParser::CombinaisonLigneContext::combinaison() {
  return getRuleContext<HistoryParser::CombinaisonContext>(0);
}


size_t HistoryParser::CombinaisonLigneContext::getRuleIndex() const {
  return HistoryParser::RuleCombinaisonLigne;
}

void HistoryParser::CombinaisonLigneContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCombinaisonLigne(this);
}

void HistoryParser::CombinaisonLigneContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCombinaisonLigne(this);
}


antlrcpp::Any HistoryParser::CombinaisonLigneContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitCombinaisonLigne(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::CombinaisonLigneContext* HistoryParser::combinaisonLigne() {
  CombinaisonLigneContext *_localctx = _tracker.createInstance<CombinaisonLigneContext>(_ctx, getState());
  enterRule(_localctx, 146, HistoryParser::RuleCombinaisonLigne);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(551);
    pseudo();
    setState(552);
    match(HistoryParser::SHOW);
    setState(553);
    cartePerso();
    setState(554);
    combinaison();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CombinaisonContext ------------------------------------------------------------------

HistoryParser::CombinaisonContext::CombinaisonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::CombinaisonContext::LPAREN() {
  return getToken(HistoryParser::LPAREN, 0);
}

tree::TerminalNode* HistoryParser::CombinaisonContext::RPAREN() {
  return getToken(HistoryParser::RPAREN, 0);
}

tree::TerminalNode* HistoryParser::CombinaisonContext::COLON() {
  return getToken(HistoryParser::COLON, 0);
}

std::vector<tree::TerminalNode *> HistoryParser::CombinaisonContext::MOT() {
  return getTokens(HistoryParser::MOT);
}

tree::TerminalNode* HistoryParser::CombinaisonContext::MOT(size_t i) {
  return getToken(HistoryParser::MOT, i);
}

std::vector<tree::TerminalNode *> HistoryParser::CombinaisonContext::DIGIT() {
  return getTokens(HistoryParser::DIGIT);
}

tree::TerminalNode* HistoryParser::CombinaisonContext::DIGIT(size_t i) {
  return getToken(HistoryParser::DIGIT, i);
}


size_t HistoryParser::CombinaisonContext::getRuleIndex() const {
  return HistoryParser::RuleCombinaison;
}

void HistoryParser::CombinaisonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCombinaison(this);
}

void HistoryParser::CombinaisonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCombinaison(this);
}


antlrcpp::Any HistoryParser::CombinaisonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitCombinaison(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::CombinaisonContext* HistoryParser::combinaison() {
  CombinaisonContext *_localctx = _tracker.createInstance<CombinaisonContext>(_ctx, getState());
  enterRule(_localctx, 148, HistoryParser::RuleCombinaison);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(556);
    match(HistoryParser::LPAREN);
    setState(558); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(557);
      _la = _input->LA(1);
      if (!(_la == HistoryParser::DIGIT

      || _la == HistoryParser::MOT)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(560); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == HistoryParser::DIGIT

    || _la == HistoryParser::MOT);
    setState(568);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryParser::COLON) {
      setState(562);
      match(HistoryParser::COLON);
      setState(564); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(563);
        _la = _input->LA(1);
        if (!(_la == HistoryParser::DIGIT

        || _la == HistoryParser::MOT)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(566); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == HistoryParser::DIGIT

      || _la == HistoryParser::MOT);
    }
    setState(570);
    match(HistoryParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResultLigneContext ------------------------------------------------------------------

HistoryParser::ResultLigneContext::ResultLigneContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryParser::PseudoContext* HistoryParser::ResultLigneContext::pseudo() {
  return getRuleContext<HistoryParser::PseudoContext>(0);
}

tree::TerminalNode* HistoryParser::ResultLigneContext::COLLECTED() {
  return getToken(HistoryParser::COLLECTED, 0);
}

HistoryParser::ShowdownValueContext* HistoryParser::ResultLigneContext::showdownValue() {
  return getRuleContext<HistoryParser::ShowdownValueContext>(0);
}

HistoryParser::WhereCollectedContext* HistoryParser::ResultLigneContext::whereCollected() {
  return getRuleContext<HistoryParser::WhereCollectedContext>(0);
}


size_t HistoryParser::ResultLigneContext::getRuleIndex() const {
  return HistoryParser::RuleResultLigne;
}

void HistoryParser::ResultLigneContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResultLigne(this);
}

void HistoryParser::ResultLigneContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResultLigne(this);
}


antlrcpp::Any HistoryParser::ResultLigneContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitResultLigne(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::ResultLigneContext* HistoryParser::resultLigne() {
  ResultLigneContext *_localctx = _tracker.createInstance<ResultLigneContext>(_ctx, getState());
  enterRule(_localctx, 150, HistoryParser::RuleResultLigne);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(572);
    pseudo();
    setState(573);
    match(HistoryParser::COLLECTED);
    setState(574);
    showdownValue();
    setState(575);
    whereCollected();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhereCollectedContext ------------------------------------------------------------------

HistoryParser::WhereCollectedContext::WhereCollectedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::WhereCollectedContext::FROMPOT() {
  return getToken(HistoryParser::FROMPOT, 0);
}

tree::TerminalNode* HistoryParser::WhereCollectedContext::FROMSP() {
  return getToken(HistoryParser::FROMSP, 0);
}

tree::TerminalNode* HistoryParser::WhereCollectedContext::NUMBER() {
  return getToken(HistoryParser::NUMBER, 0);
}

tree::TerminalNode* HistoryParser::WhereCollectedContext::DIGIT() {
  return getToken(HistoryParser::DIGIT, 0);
}

tree::TerminalNode* HistoryParser::WhereCollectedContext::FROMMP() {
  return getToken(HistoryParser::FROMMP, 0);
}


size_t HistoryParser::WhereCollectedContext::getRuleIndex() const {
  return HistoryParser::RuleWhereCollected;
}

void HistoryParser::WhereCollectedContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhereCollected(this);
}

void HistoryParser::WhereCollectedContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhereCollected(this);
}


antlrcpp::Any HistoryParser::WhereCollectedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitWhereCollected(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::WhereCollectedContext* HistoryParser::whereCollected() {
  WhereCollectedContext *_localctx = _tracker.createInstance<WhereCollectedContext>(_ctx, getState());
  enterRule(_localctx, 152, HistoryParser::RuleWhereCollected);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(581);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HistoryParser::FROMPOT: {
        enterOuterAlt(_localctx, 1);
        setState(577);
        match(HistoryParser::FROMPOT);
        break;
      }

      case HistoryParser::FROMSP: {
        enterOuterAlt(_localctx, 2);
        setState(578);
        match(HistoryParser::FROMSP);
        setState(579);
        _la = _input->LA(1);
        if (!(_la == HistoryParser::DIGIT

        || _la == HistoryParser::NUMBER)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case HistoryParser::FROMMP: {
        enterOuterAlt(_localctx, 3);
        setState(580);
        match(HistoryParser::FROMMP);
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

//----------------- ShowdownValueContext ------------------------------------------------------------------

HistoryParser::ShowdownValueContext::ShowdownValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::ShowdownValueContext::NUMBER() {
  return getToken(HistoryParser::NUMBER, 0);
}


size_t HistoryParser::ShowdownValueContext::getRuleIndex() const {
  return HistoryParser::RuleShowdownValue;
}

void HistoryParser::ShowdownValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShowdownValue(this);
}

void HistoryParser::ShowdownValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShowdownValue(this);
}


antlrcpp::Any HistoryParser::ShowdownValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitShowdownValue(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::ShowdownValueContext* HistoryParser::showdownValue() {
  ShowdownValueContext *_localctx = _tracker.createInstance<ShowdownValueContext>(_ctx, getState());
  enterRule(_localctx, 154, HistoryParser::RuleShowdownValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(583);
    match(HistoryParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SummarySectionContext ------------------------------------------------------------------

HistoryParser::SummarySectionContext::SummarySectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryParser::SummaryHeaderContext* HistoryParser::SummarySectionContext::summaryHeader() {
  return getRuleContext<HistoryParser::SummaryHeaderContext>(0);
}

HistoryParser::PotSummaryContext* HistoryParser::SummarySectionContext::potSummary() {
  return getRuleContext<HistoryParser::PotSummaryContext>(0);
}

HistoryParser::BoardlineContext* HistoryParser::SummarySectionContext::boardline() {
  return getRuleContext<HistoryParser::BoardlineContext>(0);
}

std::vector<HistoryParser::PlayerSummaryContext *> HistoryParser::SummarySectionContext::playerSummary() {
  return getRuleContexts<HistoryParser::PlayerSummaryContext>();
}

HistoryParser::PlayerSummaryContext* HistoryParser::SummarySectionContext::playerSummary(size_t i) {
  return getRuleContext<HistoryParser::PlayerSummaryContext>(i);
}


size_t HistoryParser::SummarySectionContext::getRuleIndex() const {
  return HistoryParser::RuleSummarySection;
}

void HistoryParser::SummarySectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSummarySection(this);
}

void HistoryParser::SummarySectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSummarySection(this);
}


antlrcpp::Any HistoryParser::SummarySectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitSummarySection(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::SummarySectionContext* HistoryParser::summarySection() {
  SummarySectionContext *_localctx = _tracker.createInstance<SummarySectionContext>(_ctx, getState());
  enterRule(_localctx, 156, HistoryParser::RuleSummarySection);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(585);
    summaryHeader();
    setState(586);
    potSummary();
    setState(588);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryParser::BOARD) {
      setState(587);
      boardline();
    }
    setState(591); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(590);
      playerSummary();
      setState(593); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == HistoryParser::SEAT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SummaryHeaderContext ------------------------------------------------------------------

HistoryParser::SummaryHeaderContext::SummaryHeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::SummaryHeaderContext::SUMMARY() {
  return getToken(HistoryParser::SUMMARY, 0);
}


size_t HistoryParser::SummaryHeaderContext::getRuleIndex() const {
  return HistoryParser::RuleSummaryHeader;
}

void HistoryParser::SummaryHeaderContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSummaryHeader(this);
}

void HistoryParser::SummaryHeaderContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSummaryHeader(this);
}


antlrcpp::Any HistoryParser::SummaryHeaderContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitSummaryHeader(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::SummaryHeaderContext* HistoryParser::summaryHeader() {
  SummaryHeaderContext *_localctx = _tracker.createInstance<SummaryHeaderContext>(_ctx, getState());
  enterRule(_localctx, 158, HistoryParser::RuleSummaryHeader);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(595);
    match(HistoryParser::SUMMARY);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PotSummaryContext ------------------------------------------------------------------

HistoryParser::PotSummaryContext::PotSummaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::PotSummaryContext::TOTALPOT() {
  return getToken(HistoryParser::TOTALPOT, 0);
}

HistoryParser::PotValueContext* HistoryParser::PotSummaryContext::potValue() {
  return getRuleContext<HistoryParser::PotValueContext>(0);
}

tree::TerminalNode* HistoryParser::PotSummaryContext::OU() {
  return getToken(HistoryParser::OU, 0);
}

tree::TerminalNode* HistoryParser::PotSummaryContext::NORAKE() {
  return getToken(HistoryParser::NORAKE, 0);
}

HistoryParser::RakeValueContext* HistoryParser::PotSummaryContext::rakeValue() {
  return getRuleContext<HistoryParser::RakeValueContext>(0);
}


size_t HistoryParser::PotSummaryContext::getRuleIndex() const {
  return HistoryParser::RulePotSummary;
}

void HistoryParser::PotSummaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPotSummary(this);
}

void HistoryParser::PotSummaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPotSummary(this);
}


antlrcpp::Any HistoryParser::PotSummaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitPotSummary(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::PotSummaryContext* HistoryParser::potSummary() {
  PotSummaryContext *_localctx = _tracker.createInstance<PotSummaryContext>(_ctx, getState());
  enterRule(_localctx, 160, HistoryParser::RulePotSummary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(597);
    match(HistoryParser::TOTALPOT);
    setState(598);
    potValue();
    setState(599);
    match(HistoryParser::OU);
    setState(602);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HistoryParser::NORAKE: {
        setState(600);
        match(HistoryParser::NORAKE);
        break;
      }

      case HistoryParser::NUMBER: {
        setState(601);
        rakeValue();
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

//----------------- PotValueContext ------------------------------------------------------------------

HistoryParser::PotValueContext::PotValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::PotValueContext::NUMBER() {
  return getToken(HistoryParser::NUMBER, 0);
}


size_t HistoryParser::PotValueContext::getRuleIndex() const {
  return HistoryParser::RulePotValue;
}

void HistoryParser::PotValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPotValue(this);
}

void HistoryParser::PotValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPotValue(this);
}


antlrcpp::Any HistoryParser::PotValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitPotValue(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::PotValueContext* HistoryParser::potValue() {
  PotValueContext *_localctx = _tracker.createInstance<PotValueContext>(_ctx, getState());
  enterRule(_localctx, 162, HistoryParser::RulePotValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(604);
    match(HistoryParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RakeValueContext ------------------------------------------------------------------

HistoryParser::RakeValueContext::RakeValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::RakeValueContext::NUMBER() {
  return getToken(HistoryParser::NUMBER, 0);
}


size_t HistoryParser::RakeValueContext::getRuleIndex() const {
  return HistoryParser::RuleRakeValue;
}

void HistoryParser::RakeValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRakeValue(this);
}

void HistoryParser::RakeValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRakeValue(this);
}


antlrcpp::Any HistoryParser::RakeValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitRakeValue(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::RakeValueContext* HistoryParser::rakeValue() {
  RakeValueContext *_localctx = _tracker.createInstance<RakeValueContext>(_ctx, getState());
  enterRule(_localctx, 164, HistoryParser::RuleRakeValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(606);
    match(HistoryParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BoardlineContext ------------------------------------------------------------------

HistoryParser::BoardlineContext::BoardlineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::BoardlineContext::BOARD() {
  return getToken(HistoryParser::BOARD, 0);
}

HistoryParser::BoardCardsContext* HistoryParser::BoardlineContext::boardCards() {
  return getRuleContext<HistoryParser::BoardCardsContext>(0);
}


size_t HistoryParser::BoardlineContext::getRuleIndex() const {
  return HistoryParser::RuleBoardline;
}

void HistoryParser::BoardlineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoardline(this);
}

void HistoryParser::BoardlineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoardline(this);
}


antlrcpp::Any HistoryParser::BoardlineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitBoardline(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::BoardlineContext* HistoryParser::boardline() {
  BoardlineContext *_localctx = _tracker.createInstance<BoardlineContext>(_ctx, getState());
  enterRule(_localctx, 166, HistoryParser::RuleBoardline);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(608);
    match(HistoryParser::BOARD);
    setState(609);
    boardCards();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BoardCardsContext ------------------------------------------------------------------

HistoryParser::BoardCardsContext::BoardCardsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::BoardCardsContext::LCROCH() {
  return getToken(HistoryParser::LCROCH, 0);
}

tree::TerminalNode* HistoryParser::BoardCardsContext::RCROCH() {
  return getToken(HistoryParser::RCROCH, 0);
}

std::vector<tree::TerminalNode *> HistoryParser::BoardCardsContext::MOT() {
  return getTokens(HistoryParser::MOT);
}

tree::TerminalNode* HistoryParser::BoardCardsContext::MOT(size_t i) {
  return getToken(HistoryParser::MOT, i);
}


size_t HistoryParser::BoardCardsContext::getRuleIndex() const {
  return HistoryParser::RuleBoardCards;
}

void HistoryParser::BoardCardsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoardCards(this);
}

void HistoryParser::BoardCardsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoardCards(this);
}


antlrcpp::Any HistoryParser::BoardCardsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitBoardCards(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::BoardCardsContext* HistoryParser::boardCards() {
  BoardCardsContext *_localctx = _tracker.createInstance<BoardCardsContext>(_ctx, getState());
  enterRule(_localctx, 168, HistoryParser::RuleBoardCards);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(611);
    match(HistoryParser::LCROCH);
    setState(613); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(612);
      match(HistoryParser::MOT);
      setState(615); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == HistoryParser::MOT);
    setState(617);
    match(HistoryParser::RCROCH);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PlayerSummaryContext ------------------------------------------------------------------

HistoryParser::PlayerSummaryContext::PlayerSummaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryParser::SiegeContext* HistoryParser::PlayerSummaryContext::siege() {
  return getRuleContext<HistoryParser::SiegeContext>(0);
}

HistoryParser::PseudoContext* HistoryParser::PlayerSummaryContext::pseudo() {
  return getRuleContext<HistoryParser::PseudoContext>(0);
}

HistoryParser::ResultContext* HistoryParser::PlayerSummaryContext::result() {
  return getRuleContext<HistoryParser::ResultContext>(0);
}

HistoryParser::PositionContext* HistoryParser::PlayerSummaryContext::position() {
  return getRuleContext<HistoryParser::PositionContext>(0);
}

tree::TerminalNode* HistoryParser::PlayerSummaryContext::SHOWED() {
  return getToken(HistoryParser::SHOWED, 0);
}

HistoryParser::CartePersoContext* HistoryParser::PlayerSummaryContext::cartePerso() {
  return getRuleContext<HistoryParser::CartePersoContext>(0);
}

HistoryParser::WithWhatContext* HistoryParser::PlayerSummaryContext::withWhat() {
  return getRuleContext<HistoryParser::WithWhatContext>(0);
}


size_t HistoryParser::PlayerSummaryContext::getRuleIndex() const {
  return HistoryParser::RulePlayerSummary;
}

void HistoryParser::PlayerSummaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPlayerSummary(this);
}

void HistoryParser::PlayerSummaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPlayerSummary(this);
}


antlrcpp::Any HistoryParser::PlayerSummaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitPlayerSummary(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::PlayerSummaryContext* HistoryParser::playerSummary() {
  PlayerSummaryContext *_localctx = _tracker.createInstance<PlayerSummaryContext>(_ctx, getState());
  enterRule(_localctx, 170, HistoryParser::RulePlayerSummary);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(619);
    siege();
    setState(620);
    pseudo();
    setState(622);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryParser::LPAREN) {
      setState(621);
      position();
    }
    setState(626);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryParser::SHOWED) {
      setState(624);
      match(HistoryParser::SHOWED);
      setState(625);
      cartePerso();
    }
    setState(628);
    result();
    setState(630);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryParser::WITH) {
      setState(629);
      withWhat();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PositionContext ------------------------------------------------------------------

HistoryParser::PositionContext::PositionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::PositionContext::LPAREN() {
  return getToken(HistoryParser::LPAREN, 0);
}

tree::TerminalNode* HistoryParser::PositionContext::BUTTON() {
  return getToken(HistoryParser::BUTTON, 0);
}

tree::TerminalNode* HistoryParser::PositionContext::RPAREN() {
  return getToken(HistoryParser::RPAREN, 0);
}

tree::TerminalNode* HistoryParser::PositionContext::SMALLBLIND() {
  return getToken(HistoryParser::SMALLBLIND, 0);
}

tree::TerminalNode* HistoryParser::PositionContext::BIGBLIND() {
  return getToken(HistoryParser::BIGBLIND, 0);
}


size_t HistoryParser::PositionContext::getRuleIndex() const {
  return HistoryParser::RulePosition;
}

void HistoryParser::PositionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPosition(this);
}

void HistoryParser::PositionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPosition(this);
}


antlrcpp::Any HistoryParser::PositionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitPosition(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::PositionContext* HistoryParser::position() {
  PositionContext *_localctx = _tracker.createInstance<PositionContext>(_ctx, getState());
  enterRule(_localctx, 172, HistoryParser::RulePosition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(641);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(632);
      match(HistoryParser::LPAREN);
      setState(633);
      match(HistoryParser::BUTTON);
      setState(634);
      match(HistoryParser::RPAREN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(635);
      match(HistoryParser::LPAREN);
      setState(636);
      match(HistoryParser::SMALLBLIND);
      setState(637);
      match(HistoryParser::RPAREN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(638);
      match(HistoryParser::LPAREN);
      setState(639);
      match(HistoryParser::BIGBLIND);
      setState(640);
      match(HistoryParser::RPAREN);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResultContext ------------------------------------------------------------------

HistoryParser::ResultContext::ResultContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryParser::ShowdownWinContext* HistoryParser::ResultContext::showdownWin() {
  return getRuleContext<HistoryParser::ShowdownWinContext>(0);
}

HistoryParser::ShowdownLoseContext* HistoryParser::ResultContext::showdownLose() {
  return getRuleContext<HistoryParser::ShowdownLoseContext>(0);
}

HistoryParser::JustWinContext* HistoryParser::ResultContext::justWin() {
  return getRuleContext<HistoryParser::JustWinContext>(0);
}


size_t HistoryParser::ResultContext::getRuleIndex() const {
  return HistoryParser::RuleResult;
}

void HistoryParser::ResultContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResult(this);
}

void HistoryParser::ResultContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResult(this);
}


antlrcpp::Any HistoryParser::ResultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitResult(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::ResultContext* HistoryParser::result() {
  ResultContext *_localctx = _tracker.createInstance<ResultContext>(_ctx, getState());
  enterRule(_localctx, 174, HistoryParser::RuleResult);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(646);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(643);
      showdownWin();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(644);
      showdownLose();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(645);
      justWin();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WithWhatContext ------------------------------------------------------------------

HistoryParser::WithWhatContext::WithWhatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::WithWhatContext::WITH() {
  return getToken(HistoryParser::WITH, 0);
}

tree::TerminalNode* HistoryParser::WithWhatContext::COLON() {
  return getToken(HistoryParser::COLON, 0);
}

std::vector<tree::TerminalNode *> HistoryParser::WithWhatContext::MOT() {
  return getTokens(HistoryParser::MOT);
}

tree::TerminalNode* HistoryParser::WithWhatContext::MOT(size_t i) {
  return getToken(HistoryParser::MOT, i);
}

std::vector<tree::TerminalNode *> HistoryParser::WithWhatContext::NUMBER() {
  return getTokens(HistoryParser::NUMBER);
}

tree::TerminalNode* HistoryParser::WithWhatContext::NUMBER(size_t i) {
  return getToken(HistoryParser::NUMBER, i);
}


size_t HistoryParser::WithWhatContext::getRuleIndex() const {
  return HistoryParser::RuleWithWhat;
}

void HistoryParser::WithWhatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWithWhat(this);
}

void HistoryParser::WithWhatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWithWhat(this);
}


antlrcpp::Any HistoryParser::WithWhatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitWithWhat(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::WithWhatContext* HistoryParser::withWhat() {
  WithWhatContext *_localctx = _tracker.createInstance<WithWhatContext>(_ctx, getState());
  enterRule(_localctx, 176, HistoryParser::RuleWithWhat);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(648);
    match(HistoryParser::WITH);
    setState(650); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(649);
      _la = _input->LA(1);
      if (!(_la == HistoryParser::NUMBER

      || _la == HistoryParser::MOT)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(652); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == HistoryParser::NUMBER

    || _la == HistoryParser::MOT);
    setState(660);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryParser::COLON) {
      setState(654);
      match(HistoryParser::COLON);
      setState(656); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(655);
        _la = _input->LA(1);
        if (!(_la == HistoryParser::NUMBER

        || _la == HistoryParser::MOT)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(658); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == HistoryParser::NUMBER

      || _la == HistoryParser::MOT);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShowdownWinContext ------------------------------------------------------------------

HistoryParser::ShowdownWinContext::ShowdownWinContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::ShowdownWinContext::AND() {
  return getToken(HistoryParser::AND, 0);
}

tree::TerminalNode* HistoryParser::ShowdownWinContext::WON() {
  return getToken(HistoryParser::WON, 0);
}

HistoryParser::WinValueContext* HistoryParser::ShowdownWinContext::winValue() {
  return getRuleContext<HistoryParser::WinValueContext>(0);
}


size_t HistoryParser::ShowdownWinContext::getRuleIndex() const {
  return HistoryParser::RuleShowdownWin;
}

void HistoryParser::ShowdownWinContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShowdownWin(this);
}

void HistoryParser::ShowdownWinContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShowdownWin(this);
}


antlrcpp::Any HistoryParser::ShowdownWinContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitShowdownWin(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::ShowdownWinContext* HistoryParser::showdownWin() {
  ShowdownWinContext *_localctx = _tracker.createInstance<ShowdownWinContext>(_ctx, getState());
  enterRule(_localctx, 178, HistoryParser::RuleShowdownWin);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(662);
    match(HistoryParser::AND);
    setState(663);
    match(HistoryParser::WON);
    setState(664);
    winValue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShowdownLoseContext ------------------------------------------------------------------

HistoryParser::ShowdownLoseContext::ShowdownLoseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::ShowdownLoseContext::AND() {
  return getToken(HistoryParser::AND, 0);
}

tree::TerminalNode* HistoryParser::ShowdownLoseContext::LOST() {
  return getToken(HistoryParser::LOST, 0);
}


size_t HistoryParser::ShowdownLoseContext::getRuleIndex() const {
  return HistoryParser::RuleShowdownLose;
}

void HistoryParser::ShowdownLoseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShowdownLose(this);
}

void HistoryParser::ShowdownLoseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShowdownLose(this);
}


antlrcpp::Any HistoryParser::ShowdownLoseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitShowdownLose(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::ShowdownLoseContext* HistoryParser::showdownLose() {
  ShowdownLoseContext *_localctx = _tracker.createInstance<ShowdownLoseContext>(_ctx, getState());
  enterRule(_localctx, 180, HistoryParser::RuleShowdownLose);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(666);
    match(HistoryParser::AND);
    setState(667);
    match(HistoryParser::LOST);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JustWinContext ------------------------------------------------------------------

HistoryParser::JustWinContext::JustWinContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::JustWinContext::WON() {
  return getToken(HistoryParser::WON, 0);
}

HistoryParser::WinValueContext* HistoryParser::JustWinContext::winValue() {
  return getRuleContext<HistoryParser::WinValueContext>(0);
}


size_t HistoryParser::JustWinContext::getRuleIndex() const {
  return HistoryParser::RuleJustWin;
}

void HistoryParser::JustWinContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJustWin(this);
}

void HistoryParser::JustWinContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJustWin(this);
}


antlrcpp::Any HistoryParser::JustWinContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitJustWin(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::JustWinContext* HistoryParser::justWin() {
  JustWinContext *_localctx = _tracker.createInstance<JustWinContext>(_ctx, getState());
  enterRule(_localctx, 182, HistoryParser::RuleJustWin);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(669);
    match(HistoryParser::WON);
    setState(670);
    winValue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WinValueContext ------------------------------------------------------------------

HistoryParser::WinValueContext::WinValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryParser::WinValueContext::NUMBER() {
  return getToken(HistoryParser::NUMBER, 0);
}


size_t HistoryParser::WinValueContext::getRuleIndex() const {
  return HistoryParser::RuleWinValue;
}

void HistoryParser::WinValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWinValue(this);
}

void HistoryParser::WinValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWinValue(this);
}


antlrcpp::Any HistoryParser::WinValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HistoryParserVisitor*>(visitor))
    return parserVisitor->visitWinValue(this);
  else
    return visitor->visitChildren(this);
}

HistoryParser::WinValueContext* HistoryParser::winValue() {
  WinValueContext *_localctx = _tracker.createInstance<WinValueContext>(_ctx, getState());
  enterRule(_localctx, 184, HistoryParser::RuleWinValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(672);
    match(HistoryParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> HistoryParser::_decisionToDFA;
atn::PredictionContextCache HistoryParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN HistoryParser::_atn;
std::vector<uint16_t> HistoryParser::_serializedATN;

std::vector<std::string> HistoryParser::_ruleNames = {
  "fichier", "hand", "handHeader", "jeu", "firstLine", "gameInfo", "typeOfGame", 
  "nameOfGame", "buyin", "buyValue", "rakeBuyValue", "level", "levelValue", 
  "handId", "handIdValue", "typePlay", "anteValue", "smallblindValue", "bigblindValue", 
  "date", "annee", "mois", "jour", "heure", "minutes", "secondes", "secondLine", 
  "tableInfo", "idTable", "diez", "format", "numberOfPlayer", "whoIsButton", 
  "buttonId", "positions", "recapPlace", "siege", "pseudo", "tapis", "anteblindSection", 
  "anteblindHeader", "anteligne", "anteSomme", "smallblindligne", "smallblindSomme", 
  "bigblindligne", "bigblindSomme", "cardligne", "cartePerso", "preflopSection", 
  "preflopHeader", "playAction", "raiseAction", "foldAction", "betAction", 
  "checkAction", "callAction", "initialRaiseValue", "finalraiseValue", "betValue", 
  "callValue", "win", "flopSection", "flopHeader", "flopcards", "turnSection", 
  "turnHeader", "turnCards", "riverSection", "riverHeader", "riverCards", 
  "showdownSection", "showdownHeader", "combinaisonLigne", "combinaison", 
  "resultLigne", "whereCollected", "showdownValue", "summarySection", "summaryHeader", 
  "potSummary", "potValue", "rakeValue", "boardline", "boardCards", "playerSummary", 
  "position", "result", "withWhat", "showdownWin", "showdownLose", "justWin", 
  "winValue"
};

std::vector<std::string> HistoryParser::_literalNames = {
  "", "'Winamax Poker'", "'-'", "'Tournament'", "'\"'", "'buyIn:'", "'\u20AC'", 
  "'+'", "'level:'", "'HandId: #'", "'Holdem no limit'", "'/'", "'UTC'", 
  "'Table:'", "'''", "'#'", "'real money'", "'Seat'", "'is the button'", 
  "'*** ANTE/BLINDS ***'", "'posts ante'", "'and is all-in'", "'posts small blind'", 
  "'posts big blind'", "'Dealt to'", "'*** PRE-FLOP ***'", "'raises'", "'to'", 
  "'folds'", "'bets'", "'checks'", "'calls'", "'collected'", "'from pot'", 
  "'*** FLOP ***'", "'*** TURN ***'", "'*** RIVER ***'", "'*** SHOW DOWN ***'", 
  "'shows'", "'from side pot'", "'from main pot'", "'*** SUMMARY ***'", 
  "'Total pot'", "'|'", "'No rake'", "'Board:'", "'showed'", "'button'", 
  "'small blind'", "'big blind'", "'with'", "'and'", "'won'", "'lost'", 
  "", "", "'('", "')'", "'['", "']'", "", "':'"
};

std::vector<std::string> HistoryParser::_symbolicNames = {
  "", "WINAMAXPOKER", "MINUS", "TOURNAMENT", "QUOTE", "BUYIN", "EURO", "PLUS", 
  "LEVEL", "HANDID", "HNL", "SLASH", "UTC", "TABLE", "SQUOTE", "HASHTAG", 
  "REALMONEY", "SEATALONE", "ISBUTTON", "ANTEBLIND", "POSTANTE", "ISALLIN", 
  "POSTSB", "POSTBB", "DEALTTO", "PREFLOP", "RAISE", "TO", "FOLD", "BET", 
  "CHECK", "CALL", "COLLECTED", "FROMPOT", "FLOP", "TURN", "RIVER", "SHOWDOWN", 
  "SHOW", "FROMSP", "FROMMP", "SUMMARY", "TOTALPOT", "OU", "NORAKE", "BOARD", 
  "SHOWED", "BUTTON", "SMALLBLIND", "BIGBLIND", "WITH", "AND", "WON", "LOST", 
  "DIGIT", "NUMBER", "LPAREN", "RPAREN", "LCROCH", "RCROCH", "SEAT", "COLON", 
  "MOT", "WS"
};

dfa::Vocabulary HistoryParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> HistoryParser::_tokenNames;

HistoryParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x41, 0x2a5, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 
    0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 
    0x9, 0x49, 0x4, 0x4a, 0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 
    0x4c, 0x4, 0x4d, 0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 
    0x4, 0x50, 0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 
    0x53, 0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
    0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 0x9, 
    0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 0x9, 0x5c, 
    0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x3, 0x2, 0x6, 0x2, 0xbe, 
    0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0xbf, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x5, 0x5, 0xcd, 0xa, 0x5, 0x3, 0x5, 0x5, 0x5, 0xd0, 0xa, 0x5, 0x3, 
    0x5, 0x5, 0x5, 0xd3, 0xa, 0x5, 0x3, 0x5, 0x5, 0x5, 0xd6, 0xa, 0x5, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x6, 0x9, 0xeb, 0xa, 0x9, 
    0xd, 0x9, 0xe, 0x9, 0xec, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x6, 0x1d, 0x134, 
    0xa, 0x1d, 0xd, 0x1d, 0xe, 0x1d, 0x135, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
    0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
    0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x6, 0x24, 0x152, 0xa, 0x24, 
    0xd, 0x24, 0xe, 0x24, 0x153, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
    0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x6, 0x27, 0x15e, 0xa, 0x27, 
    0xd, 0x27, 0xe, 0x27, 0x15f, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x29, 0x3, 0x29, 0x6, 0x29, 0x168, 0xa, 0x29, 0xd, 0x29, 0xe, 0x29, 
    0x169, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 
    0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x176, 0xa, 0x2b, 
    0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 
    0x2d, 0x17e, 0xa, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 
    0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x186, 0xa, 0x2f, 0x3, 0x30, 0x3, 0x30, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 
    0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x33, 0x3, 0x33, 0x6, 0x33, 0x195, 
    0xa, 0x33, 0xd, 0x33, 0xe, 0x33, 0x196, 0x5, 0x33, 0x199, 0xa, 0x33, 
    0x3, 0x33, 0x5, 0x33, 0x19c, 0xa, 0x33, 0x3, 0x33, 0x5, 0x33, 0x19f, 
    0xa, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
    0x35, 0x3, 0x35, 0x5, 0x35, 0x1a8, 0xa, 0x35, 0x3, 0x36, 0x3, 0x36, 
    0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x5, 0x36, 0x1b0, 0xa, 0x36, 
    0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 
    0x38, 0x5, 0x38, 0x1b9, 0xa, 0x38, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 
    0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x1c2, 0xa, 0x3a, 
    0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 
    0x3e, 0x3, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 
    0x3, 0x40, 0x3, 0x40, 0x6, 0x40, 0x1d3, 0xa, 0x40, 0xd, 0x40, 0xe, 0x40, 
    0x1d4, 0x5, 0x40, 0x1d7, 0xa, 0x40, 0x3, 0x40, 0x5, 0x40, 0x1da, 0xa, 
    0x40, 0x3, 0x40, 0x5, 0x40, 0x1dd, 0xa, 0x40, 0x3, 0x41, 0x3, 0x41, 
    0x3, 0x41, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 
    0x42, 0x3, 0x43, 0x3, 0x43, 0x6, 0x43, 0x1ea, 0xa, 0x43, 0xd, 0x43, 
    0xe, 0x43, 0x1eb, 0x5, 0x43, 0x1ee, 0xa, 0x43, 0x3, 0x43, 0x5, 0x43, 
    0x1f1, 0xa, 0x43, 0x3, 0x43, 0x5, 0x43, 0x1f4, 0xa, 0x43, 0x3, 0x44, 
    0x3, 0x44, 0x3, 0x44, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 
    0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x46, 0x3, 0x46, 
    0x6, 0x46, 0x204, 0xa, 0x46, 0xd, 0x46, 0xe, 0x46, 0x205, 0x5, 0x46, 
    0x208, 0xa, 0x46, 0x3, 0x46, 0x5, 0x46, 0x20b, 0xa, 0x46, 0x3, 0x46, 
    0x5, 0x46, 0x20e, 0xa, 0x46, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x48, 
    0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 
    0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x49, 0x3, 0x49, 0x6, 0x49, 0x21f, 
    0xa, 0x49, 0xd, 0x49, 0xe, 0x49, 0x220, 0x3, 0x49, 0x6, 0x49, 0x224, 
    0xa, 0x49, 0xd, 0x49, 0xe, 0x49, 0x225, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4b, 
    0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4c, 0x3, 0x4c, 0x6, 
    0x4c, 0x231, 0xa, 0x4c, 0xd, 0x4c, 0xe, 0x4c, 0x232, 0x3, 0x4c, 0x3, 
    0x4c, 0x6, 0x4c, 0x237, 0xa, 0x4c, 0xd, 0x4c, 0xe, 0x4c, 0x238, 0x5, 
    0x4c, 0x23b, 0xa, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4d, 0x3, 0x4d, 
    0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 
    0x4e, 0x5, 0x4e, 0x248, 0xa, 0x4e, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x50, 
    0x3, 0x50, 0x3, 0x50, 0x5, 0x50, 0x24f, 0xa, 0x50, 0x3, 0x50, 0x6, 0x50, 
    0x252, 0xa, 0x50, 0xd, 0x50, 0xe, 0x50, 0x253, 0x3, 0x51, 0x3, 0x51, 
    0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x5, 0x52, 0x25d, 
    0xa, 0x52, 0x3, 0x53, 0x3, 0x53, 0x3, 0x54, 0x3, 0x54, 0x3, 0x55, 0x3, 
    0x55, 0x3, 0x55, 0x3, 0x56, 0x3, 0x56, 0x6, 0x56, 0x268, 0xa, 0x56, 
    0xd, 0x56, 0xe, 0x56, 0x269, 0x3, 0x56, 0x3, 0x56, 0x3, 0x57, 0x3, 0x57, 
    0x3, 0x57, 0x5, 0x57, 0x271, 0xa, 0x57, 0x3, 0x57, 0x3, 0x57, 0x5, 0x57, 
    0x275, 0xa, 0x57, 0x3, 0x57, 0x3, 0x57, 0x5, 0x57, 0x279, 0xa, 0x57, 
    0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 
    0x58, 0x3, 0x58, 0x3, 0x58, 0x5, 0x58, 0x284, 0xa, 0x58, 0x3, 0x59, 
    0x3, 0x59, 0x3, 0x59, 0x5, 0x59, 0x289, 0xa, 0x59, 0x3, 0x5a, 0x3, 0x5a, 
    0x6, 0x5a, 0x28d, 0xa, 0x5a, 0xd, 0x5a, 0xe, 0x5a, 0x28e, 0x3, 0x5a, 
    0x3, 0x5a, 0x6, 0x5a, 0x293, 0xa, 0x5a, 0xd, 0x5a, 0xe, 0x5a, 0x294, 
    0x5, 0x5a, 0x297, 0xa, 0x5a, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 
    0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 
    0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x2, 0x2, 0x5f, 0x2, 0x4, 0x6, 0x8, 0xa, 
    0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 
    0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 
    0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 
    0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 
    0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 
    0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 0x98, 0x9a, 
    0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 0xac, 0xae, 0xb0, 0xb2, 
    0xb4, 0xb6, 0xb8, 0xba, 0x2, 0x5, 0x3, 0x2, 0x38, 0x39, 0x4, 0x2, 0x39, 
    0x39, 0x40, 0x40, 0x4, 0x2, 0x38, 0x38, 0x40, 0x40, 0x2, 0x280, 0x2, 
    0xbd, 0x3, 0x2, 0x2, 0x2, 0x4, 0xc1, 0x3, 0x2, 0x2, 0x2, 0x6, 0xc6, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xa, 0xd7, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe, 0xe6, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0xe8, 0x3, 0x2, 0x2, 0x2, 0x12, 0xf0, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0xf7, 0x3, 0x2, 0x2, 0x2, 0x16, 0xf9, 0x3, 0x2, 0x2, 0x2, 0x18, 0xfb, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x100, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0x103, 0x3, 0x2, 0x2, 0x2, 0x20, 0x105, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x24, 0x110, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0x112, 0x3, 0x2, 0x2, 0x2, 0x28, 0x114, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0x120, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x122, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0x124, 0x3, 0x2, 0x2, 0x2, 0x30, 0x126, 0x3, 0x2, 0x2, 0x2, 0x32, 0x128, 
    0x3, 0x2, 0x2, 0x2, 0x34, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x36, 0x12c, 0x3, 
    0x2, 0x2, 0x2, 0x38, 0x131, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x13e, 0x3, 0x2, 
    0x2, 0x2, 0x3c, 0x140, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x142, 0x3, 0x2, 0x2, 
    0x2, 0x40, 0x147, 0x3, 0x2, 0x2, 0x2, 0x42, 0x149, 0x3, 0x2, 0x2, 0x2, 
    0x44, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x46, 0x151, 0x3, 0x2, 0x2, 0x2, 0x48, 
    0x155, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x159, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x15d, 
    0x3, 0x2, 0x2, 0x2, 0x4e, 0x161, 0x3, 0x2, 0x2, 0x2, 0x50, 0x165, 0x3, 
    0x2, 0x2, 0x2, 0x52, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x54, 0x171, 0x3, 0x2, 
    0x2, 0x2, 0x56, 0x177, 0x3, 0x2, 0x2, 0x2, 0x58, 0x179, 0x3, 0x2, 0x2, 
    0x2, 0x5a, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x181, 0x3, 0x2, 0x2, 0x2, 
    0x5e, 0x187, 0x3, 0x2, 0x2, 0x2, 0x60, 0x189, 0x3, 0x2, 0x2, 0x2, 0x62, 
    0x18d, 0x3, 0x2, 0x2, 0x2, 0x64, 0x192, 0x3, 0x2, 0x2, 0x2, 0x66, 0x1a0, 
    0x3, 0x2, 0x2, 0x2, 0x68, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x1a9, 0x3, 
    0x2, 0x2, 0x2, 0x6c, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x1b4, 0x3, 0x2, 
    0x2, 0x2, 0x70, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x72, 0x1bd, 0x3, 0x2, 0x2, 
    0x2, 0x74, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x76, 0x1c5, 0x3, 0x2, 0x2, 0x2, 
    0x78, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0x7c, 
    0x1cb, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x80, 0x1de, 
    0x3, 0x2, 0x2, 0x2, 0x82, 0x1e1, 0x3, 0x2, 0x2, 0x2, 0x84, 0x1e7, 0x3, 
    0x2, 0x2, 0x2, 0x86, 0x1f5, 0x3, 0x2, 0x2, 0x2, 0x88, 0x1f8, 0x3, 0x2, 
    0x2, 0x2, 0x8a, 0x201, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x20f, 0x3, 0x2, 0x2, 
    0x2, 0x8e, 0x212, 0x3, 0x2, 0x2, 0x2, 0x90, 0x21c, 0x3, 0x2, 0x2, 0x2, 
    0x92, 0x227, 0x3, 0x2, 0x2, 0x2, 0x94, 0x229, 0x3, 0x2, 0x2, 0x2, 0x96, 
    0x22e, 0x3, 0x2, 0x2, 0x2, 0x98, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x247, 
    0x3, 0x2, 0x2, 0x2, 0x9c, 0x249, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x24b, 0x3, 
    0x2, 0x2, 0x2, 0xa0, 0x255, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x257, 0x3, 0x2, 
    0x2, 0x2, 0xa4, 0x25e, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x260, 0x3, 0x2, 0x2, 
    0x2, 0xa8, 0x262, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x265, 0x3, 0x2, 0x2, 0x2, 
    0xac, 0x26d, 0x3, 0x2, 0x2, 0x2, 0xae, 0x283, 0x3, 0x2, 0x2, 0x2, 0xb0, 
    0x288, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x28a, 0x3, 0x2, 0x2, 0x2, 0xb4, 0x298, 
    0x3, 0x2, 0x2, 0x2, 0xb6, 0x29c, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x29f, 0x3, 
    0x2, 0x2, 0x2, 0xba, 0x2a2, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbe, 0x5, 0x4, 
    0x3, 0x2, 0xbd, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 0x3, 0x2, 0x2, 
    0x2, 0xbf, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc0, 0x3, 0x2, 0x2, 0x2, 
    0xc0, 0x3, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc2, 0x5, 0x6, 0x4, 0x2, 0xc2, 
    0xc3, 0x5, 0x46, 0x24, 0x2, 0xc3, 0xc4, 0x5, 0x8, 0x5, 0x2, 0xc4, 0xc5, 
    0x5, 0x9e, 0x50, 0x2, 0xc5, 0x5, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc7, 0x5, 
    0xa, 0x6, 0x2, 0xc7, 0xc8, 0x5, 0x36, 0x1c, 0x2, 0xc8, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0xc9, 0xca, 0x5, 0x50, 0x29, 0x2, 0xca, 0xcc, 0x5, 0x64, 0x33, 
    0x2, 0xcb, 0xcd, 0x5, 0x7e, 0x40, 0x2, 0xcc, 0xcb, 0x3, 0x2, 0x2, 0x2, 
    0xcc, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xce, 
    0xd0, 0x5, 0x84, 0x43, 0x2, 0xcf, 0xce, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 
    0x3, 0x2, 0x2, 0x2, 0xd0, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd3, 0x5, 
    0x8a, 0x46, 0x2, 0xd2, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 0x3, 0x2, 
    0x2, 0x2, 0xd3, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd6, 0x5, 0x90, 0x49, 
    0x2, 0xd5, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd6, 0x3, 0x2, 0x2, 0x2, 
    0xd6, 0x9, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd8, 0x7, 0x3, 0x2, 0x2, 0xd8, 
    0xd9, 0x7, 0x4, 0x2, 0x2, 0xd9, 0xda, 0x5, 0xc, 0x7, 0x2, 0xda, 0xdb, 
    0x7, 0x4, 0x2, 0x2, 0xdb, 0xdc, 0x5, 0x1c, 0xf, 0x2, 0xdc, 0xdd, 0x7, 
    0x4, 0x2, 0x2, 0xdd, 0xde, 0x5, 0x20, 0x11, 0x2, 0xde, 0xdf, 0x7, 0x4, 
    0x2, 0x2, 0xdf, 0xe0, 0x5, 0x28, 0x15, 0x2, 0xe0, 0xb, 0x3, 0x2, 0x2, 
    0x2, 0xe1, 0xe2, 0x5, 0xe, 0x8, 0x2, 0xe2, 0xe3, 0x5, 0x10, 0x9, 0x2, 
    0xe3, 0xe4, 0x5, 0x12, 0xa, 0x2, 0xe4, 0xe5, 0x5, 0x18, 0xd, 0x2, 0xe5, 
    0xd, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe7, 0x7, 0x5, 0x2, 0x2, 0xe7, 0xf, 
    0x3, 0x2, 0x2, 0x2, 0xe8, 0xea, 0x7, 0x6, 0x2, 0x2, 0xe9, 0xeb, 0x7, 
    0x40, 0x2, 0x2, 0xea, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xec, 0x3, 0x2, 
    0x2, 0x2, 0xec, 0xea, 0x3, 0x2, 0x2, 0x2, 0xec, 0xed, 0x3, 0x2, 0x2, 
    0x2, 0xed, 0xee, 0x3, 0x2, 0x2, 0x2, 0xee, 0xef, 0x7, 0x6, 0x2, 0x2, 
    0xef, 0x11, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 0x7, 0x7, 0x2, 0x2, 0xf1, 
    0xf2, 0x5, 0x14, 0xb, 0x2, 0xf2, 0xf3, 0x7, 0x8, 0x2, 0x2, 0xf3, 0xf4, 
    0x7, 0x9, 0x2, 0x2, 0xf4, 0xf5, 0x5, 0x16, 0xc, 0x2, 0xf5, 0xf6, 0x7, 
    0x8, 0x2, 0x2, 0xf6, 0x13, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf8, 0x9, 0x2, 
    0x2, 0x2, 0xf8, 0x15, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xfa, 0x9, 0x2, 0x2, 
    0x2, 0xfa, 0x17, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfc, 0x7, 0xa, 0x2, 0x2, 
    0xfc, 0xfd, 0x5, 0x1a, 0xe, 0x2, 0xfd, 0x19, 0x3, 0x2, 0x2, 0x2, 0xfe, 
    0xff, 0x9, 0x2, 0x2, 0x2, 0xff, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x100, 0x101, 
    0x7, 0xb, 0x2, 0x2, 0x101, 0x102, 0x5, 0x1e, 0x10, 0x2, 0x102, 0x1d, 
    0x3, 0x2, 0x2, 0x2, 0x103, 0x104, 0x7, 0x40, 0x2, 0x2, 0x104, 0x1f, 
    0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x7, 0xc, 0x2, 0x2, 0x106, 0x107, 
    0x7, 0x3a, 0x2, 0x2, 0x107, 0x108, 0x5, 0x22, 0x12, 0x2, 0x108, 0x109, 
    0x7, 0xd, 0x2, 0x2, 0x109, 0x10a, 0x5, 0x24, 0x13, 0x2, 0x10a, 0x10b, 
    0x7, 0xd, 0x2, 0x2, 0x10b, 0x10c, 0x5, 0x26, 0x14, 0x2, 0x10c, 0x10d, 
    0x7, 0x3b, 0x2, 0x2, 0x10d, 0x21, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10f, 
    0x9, 0x2, 0x2, 0x2, 0x10f, 0x23, 0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 0x9, 
    0x2, 0x2, 0x2, 0x111, 0x25, 0x3, 0x2, 0x2, 0x2, 0x112, 0x113, 0x9, 0x2, 
    0x2, 0x2, 0x113, 0x27, 0x3, 0x2, 0x2, 0x2, 0x114, 0x115, 0x5, 0x2a, 
    0x16, 0x2, 0x115, 0x116, 0x7, 0xd, 0x2, 0x2, 0x116, 0x117, 0x5, 0x2c, 
    0x17, 0x2, 0x117, 0x118, 0x7, 0xd, 0x2, 0x2, 0x118, 0x119, 0x5, 0x2e, 
    0x18, 0x2, 0x119, 0x11a, 0x5, 0x30, 0x19, 0x2, 0x11a, 0x11b, 0x7, 0x3f, 
    0x2, 0x2, 0x11b, 0x11c, 0x5, 0x32, 0x1a, 0x2, 0x11c, 0x11d, 0x7, 0x3f, 
    0x2, 0x2, 0x11d, 0x11e, 0x5, 0x34, 0x1b, 0x2, 0x11e, 0x11f, 0x7, 0xe, 
    0x2, 0x2, 0x11f, 0x29, 0x3, 0x2, 0x2, 0x2, 0x120, 0x121, 0x7, 0x39, 
    0x2, 0x2, 0x121, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x122, 0x123, 0x7, 0x39, 
    0x2, 0x2, 0x123, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x124, 0x125, 0x7, 0x39, 
    0x2, 0x2, 0x125, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x126, 0x127, 0x7, 0x39, 
    0x2, 0x2, 0x127, 0x31, 0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x7, 0x39, 
    0x2, 0x2, 0x129, 0x33, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x12b, 0x7, 0x39, 
    0x2, 0x2, 0x12b, 0x35, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12d, 0x7, 0xf, 0x2, 
    0x2, 0x12d, 0x12e, 0x5, 0x38, 0x1d, 0x2, 0x12e, 0x12f, 0x5, 0x3e, 0x20, 
    0x2, 0x12f, 0x130, 0x5, 0x42, 0x22, 0x2, 0x130, 0x37, 0x3, 0x2, 0x2, 
    0x2, 0x131, 0x133, 0x7, 0x10, 0x2, 0x2, 0x132, 0x134, 0x7, 0x40, 0x2, 
    0x2, 0x133, 0x132, 0x3, 0x2, 0x2, 0x2, 0x134, 0x135, 0x3, 0x2, 0x2, 
    0x2, 0x135, 0x133, 0x3, 0x2, 0x2, 0x2, 0x135, 0x136, 0x3, 0x2, 0x2, 
    0x2, 0x136, 0x137, 0x3, 0x2, 0x2, 0x2, 0x137, 0x138, 0x7, 0x3a, 0x2, 
    0x2, 0x138, 0x139, 0x5, 0x3a, 0x1e, 0x2, 0x139, 0x13a, 0x7, 0x3b, 0x2, 
    0x2, 0x13a, 0x13b, 0x7, 0x11, 0x2, 0x2, 0x13b, 0x13c, 0x5, 0x3c, 0x1f, 
    0x2, 0x13c, 0x13d, 0x7, 0x10, 0x2, 0x2, 0x13d, 0x39, 0x3, 0x2, 0x2, 
    0x2, 0x13e, 0x13f, 0x7, 0x39, 0x2, 0x2, 0x13f, 0x3b, 0x3, 0x2, 0x2, 
    0x2, 0x140, 0x141, 0x7, 0x39, 0x2, 0x2, 0x141, 0x3d, 0x3, 0x2, 0x2, 
    0x2, 0x142, 0x143, 0x5, 0x40, 0x21, 0x2, 0x143, 0x144, 0x7, 0x3a, 0x2, 
    0x2, 0x144, 0x145, 0x7, 0x12, 0x2, 0x2, 0x145, 0x146, 0x7, 0x3b, 0x2, 
    0x2, 0x146, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 0x7, 0x40, 0x2, 
    0x2, 0x148, 0x41, 0x3, 0x2, 0x2, 0x2, 0x149, 0x14a, 0x7, 0x13, 0x2, 
    0x2, 0x14a, 0x14b, 0x7, 0x11, 0x2, 0x2, 0x14b, 0x14c, 0x5, 0x44, 0x23, 
    0x2, 0x14c, 0x14d, 0x7, 0x14, 0x2, 0x2, 0x14d, 0x43, 0x3, 0x2, 0x2, 
    0x2, 0x14e, 0x14f, 0x7, 0x38, 0x2, 0x2, 0x14f, 0x45, 0x3, 0x2, 0x2, 
    0x2, 0x150, 0x152, 0x5, 0x48, 0x25, 0x2, 0x151, 0x150, 0x3, 0x2, 0x2, 
    0x2, 0x152, 0x153, 0x3, 0x2, 0x2, 0x2, 0x153, 0x151, 0x3, 0x2, 0x2, 
    0x2, 0x153, 0x154, 0x3, 0x2, 0x2, 0x2, 0x154, 0x47, 0x3, 0x2, 0x2, 0x2, 
    0x155, 0x156, 0x5, 0x4a, 0x26, 0x2, 0x156, 0x157, 0x5, 0x4c, 0x27, 0x2, 
    0x157, 0x158, 0x5, 0x4e, 0x28, 0x2, 0x158, 0x49, 0x3, 0x2, 0x2, 0x2, 
    0x159, 0x15a, 0x7, 0x3e, 0x2, 0x2, 0x15a, 0x15b, 0x7, 0x3f, 0x2, 0x2, 
    0x15b, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x15e, 0x9, 0x3, 0x2, 0x2, 0x15d, 
    0x15c, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x15f, 
    0x15d, 0x3, 0x2, 0x2, 0x2, 0x15f, 0x160, 0x3, 0x2, 0x2, 0x2, 0x160, 
    0x4d, 0x3, 0x2, 0x2, 0x2, 0x161, 0x162, 0x7, 0x3a, 0x2, 0x2, 0x162, 
    0x163, 0x7, 0x39, 0x2, 0x2, 0x163, 0x164, 0x7, 0x3b, 0x2, 0x2, 0x164, 
    0x4f, 0x3, 0x2, 0x2, 0x2, 0x165, 0x167, 0x5, 0x52, 0x2a, 0x2, 0x166, 
    0x168, 0x5, 0x54, 0x2b, 0x2, 0x167, 0x166, 0x3, 0x2, 0x2, 0x2, 0x168, 
    0x169, 0x3, 0x2, 0x2, 0x2, 0x169, 0x167, 0x3, 0x2, 0x2, 0x2, 0x169, 
    0x16a, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x16b, 
    0x16c, 0x5, 0x58, 0x2d, 0x2, 0x16c, 0x16d, 0x5, 0x5c, 0x2f, 0x2, 0x16d, 
    0x16e, 0x5, 0x60, 0x31, 0x2, 0x16e, 0x51, 0x3, 0x2, 0x2, 0x2, 0x16f, 
    0x170, 0x7, 0x15, 0x2, 0x2, 0x170, 0x53, 0x3, 0x2, 0x2, 0x2, 0x171, 
    0x172, 0x5, 0x4c, 0x27, 0x2, 0x172, 0x173, 0x7, 0x16, 0x2, 0x2, 0x173, 
    0x175, 0x5, 0x56, 0x2c, 0x2, 0x174, 0x176, 0x7, 0x17, 0x2, 0x2, 0x175, 
    0x174, 0x3, 0x2, 0x2, 0x2, 0x175, 0x176, 0x3, 0x2, 0x2, 0x2, 0x176, 
    0x55, 0x3, 0x2, 0x2, 0x2, 0x177, 0x178, 0x9, 0x2, 0x2, 0x2, 0x178, 0x57, 
    0x3, 0x2, 0x2, 0x2, 0x179, 0x17a, 0x5, 0x4c, 0x27, 0x2, 0x17a, 0x17b, 
    0x7, 0x18, 0x2, 0x2, 0x17b, 0x17d, 0x5, 0x5a, 0x2e, 0x2, 0x17c, 0x17e, 
    0x7, 0x17, 0x2, 0x2, 0x17d, 0x17c, 0x3, 0x2, 0x2, 0x2, 0x17d, 0x17e, 
    0x3, 0x2, 0x2, 0x2, 0x17e, 0x59, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x180, 0x7, 
    0x39, 0x2, 0x2, 0x180, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x181, 0x182, 0x5, 
    0x4c, 0x27, 0x2, 0x182, 0x183, 0x7, 0x19, 0x2, 0x2, 0x183, 0x185, 0x5, 
    0x5e, 0x30, 0x2, 0x184, 0x186, 0x7, 0x17, 0x2, 0x2, 0x185, 0x184, 0x3, 
    0x2, 0x2, 0x2, 0x185, 0x186, 0x3, 0x2, 0x2, 0x2, 0x186, 0x5d, 0x3, 0x2, 
    0x2, 0x2, 0x187, 0x188, 0x7, 0x39, 0x2, 0x2, 0x188, 0x5f, 0x3, 0x2, 
    0x2, 0x2, 0x189, 0x18a, 0x7, 0x1a, 0x2, 0x2, 0x18a, 0x18b, 0x5, 0x4c, 
    0x27, 0x2, 0x18b, 0x18c, 0x5, 0x62, 0x32, 0x2, 0x18c, 0x61, 0x3, 0x2, 
    0x2, 0x2, 0x18d, 0x18e, 0x7, 0x3c, 0x2, 0x2, 0x18e, 0x18f, 0x7, 0x40, 
    0x2, 0x2, 0x18f, 0x190, 0x7, 0x40, 0x2, 0x2, 0x190, 0x191, 0x7, 0x3d, 
    0x2, 0x2, 0x191, 0x63, 0x3, 0x2, 0x2, 0x2, 0x192, 0x198, 0x5, 0x66, 
    0x34, 0x2, 0x193, 0x195, 0x5, 0x68, 0x35, 0x2, 0x194, 0x193, 0x3, 0x2, 
    0x2, 0x2, 0x195, 0x196, 0x3, 0x2, 0x2, 0x2, 0x196, 0x194, 0x3, 0x2, 
    0x2, 0x2, 0x196, 0x197, 0x3, 0x2, 0x2, 0x2, 0x197, 0x199, 0x3, 0x2, 
    0x2, 0x2, 0x198, 0x194, 0x3, 0x2, 0x2, 0x2, 0x198, 0x199, 0x3, 0x2, 
    0x2, 0x2, 0x199, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x19c, 0x5, 0x94, 
    0x4b, 0x2, 0x19b, 0x19a, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x19c, 0x3, 0x2, 
    0x2, 0x2, 0x19c, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x19f, 0x5, 0x7c, 
    0x3f, 0x2, 0x19e, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x19f, 0x3, 0x2, 
    0x2, 0x2, 0x19f, 0x65, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x1a1, 0x7, 0x1b, 
    0x2, 0x2, 0x1a1, 0x67, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a8, 0x5, 0x6a, 
    0x36, 0x2, 0x1a3, 0x1a8, 0x5, 0x6c, 0x37, 0x2, 0x1a4, 0x1a8, 0x5, 0x6e, 
    0x38, 0x2, 0x1a5, 0x1a8, 0x5, 0x70, 0x39, 0x2, 0x1a6, 0x1a8, 0x5, 0x72, 
    0x3a, 0x2, 0x1a7, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a3, 0x3, 0x2, 
    0x2, 0x2, 0x1a7, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a5, 0x3, 0x2, 
    0x2, 0x2, 0x1a7, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x69, 0x3, 0x2, 0x2, 
    0x2, 0x1a9, 0x1aa, 0x5, 0x4c, 0x27, 0x2, 0x1aa, 0x1ab, 0x7, 0x1c, 0x2, 
    0x2, 0x1ab, 0x1ac, 0x5, 0x74, 0x3b, 0x2, 0x1ac, 0x1ad, 0x7, 0x1d, 0x2, 
    0x2, 0x1ad, 0x1af, 0x5, 0x76, 0x3c, 0x2, 0x1ae, 0x1b0, 0x7, 0x17, 0x2, 
    0x2, 0x1af, 0x1ae, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1b0, 0x3, 0x2, 0x2, 
    0x2, 0x1b0, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1b2, 0x5, 0x4c, 0x27, 
    0x2, 0x1b2, 0x1b3, 0x7, 0x1e, 0x2, 0x2, 0x1b3, 0x6d, 0x3, 0x2, 0x2, 
    0x2, 0x1b4, 0x1b5, 0x5, 0x4c, 0x27, 0x2, 0x1b5, 0x1b6, 0x7, 0x1f, 0x2, 
    0x2, 0x1b6, 0x1b8, 0x5, 0x78, 0x3d, 0x2, 0x1b7, 0x1b9, 0x7, 0x17, 0x2, 
    0x2, 0x1b8, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1b9, 0x3, 0x2, 0x2, 
    0x2, 0x1b9, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1bb, 0x5, 0x4c, 0x27, 
    0x2, 0x1bb, 0x1bc, 0x7, 0x20, 0x2, 0x2, 0x1bc, 0x71, 0x3, 0x2, 0x2, 
    0x2, 0x1bd, 0x1be, 0x5, 0x4c, 0x27, 0x2, 0x1be, 0x1bf, 0x7, 0x21, 0x2, 
    0x2, 0x1bf, 0x1c1, 0x5, 0x7a, 0x3e, 0x2, 0x1c0, 0x1c2, 0x7, 0x17, 0x2, 
    0x2, 0x1c1, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1c2, 0x3, 0x2, 0x2, 
    0x2, 0x1c2, 0x73, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1c4, 0x7, 0x39, 0x2, 
    0x2, 0x1c4, 0x75, 0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1c6, 0x7, 0x39, 0x2, 
    0x2, 0x1c6, 0x77, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1c8, 0x7, 0x39, 0x2, 
    0x2, 0x1c8, 0x79, 0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1ca, 0x7, 0x39, 0x2, 
    0x2, 0x1ca, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1cc, 0x5, 0x4c, 0x27, 
    0x2, 0x1cc, 0x1cd, 0x7, 0x22, 0x2, 0x2, 0x1cd, 0x1ce, 0x7, 0x39, 0x2, 
    0x2, 0x1ce, 0x1cf, 0x7, 0x23, 0x2, 0x2, 0x1cf, 0x7d, 0x3, 0x2, 0x2, 
    0x2, 0x1d0, 0x1d6, 0x5, 0x80, 0x41, 0x2, 0x1d1, 0x1d3, 0x5, 0x68, 0x35, 
    0x2, 0x1d2, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1d4, 0x3, 0x2, 0x2, 
    0x2, 0x1d4, 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d5, 0x3, 0x2, 0x2, 
    0x2, 0x1d5, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1d2, 0x3, 0x2, 0x2, 
    0x2, 0x1d6, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d9, 0x3, 0x2, 0x2, 
    0x2, 0x1d8, 0x1da, 0x5, 0x94, 0x4b, 0x2, 0x1d9, 0x1d8, 0x3, 0x2, 0x2, 
    0x2, 0x1d9, 0x1da, 0x3, 0x2, 0x2, 0x2, 0x1da, 0x1dc, 0x3, 0x2, 0x2, 
    0x2, 0x1db, 0x1dd, 0x5, 0x7c, 0x3f, 0x2, 0x1dc, 0x1db, 0x3, 0x2, 0x2, 
    0x2, 0x1dc, 0x1dd, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x7f, 0x3, 0x2, 0x2, 0x2, 
    0x1de, 0x1df, 0x7, 0x24, 0x2, 0x2, 0x1df, 0x1e0, 0x5, 0x82, 0x42, 0x2, 
    0x1e0, 0x81, 0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1e2, 0x7, 0x3c, 0x2, 0x2, 
    0x1e2, 0x1e3, 0x7, 0x40, 0x2, 0x2, 0x1e3, 0x1e4, 0x7, 0x40, 0x2, 0x2, 
    0x1e4, 0x1e5, 0x7, 0x40, 0x2, 0x2, 0x1e5, 0x1e6, 0x7, 0x3d, 0x2, 0x2, 
    0x1e6, 0x83, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1ed, 0x5, 0x86, 0x44, 0x2, 
    0x1e8, 0x1ea, 0x5, 0x68, 0x35, 0x2, 0x1e9, 0x1e8, 0x3, 0x2, 0x2, 0x2, 
    0x1ea, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1eb, 0x1e9, 0x3, 0x2, 0x2, 0x2, 
    0x1eb, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1ee, 0x3, 0x2, 0x2, 0x2, 
    0x1ed, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1ee, 0x3, 0x2, 0x2, 0x2, 
    0x1ee, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1f1, 0x5, 0x94, 0x4b, 0x2, 
    0x1f0, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1f1, 0x3, 0x2, 0x2, 0x2, 
    0x1f1, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f2, 0x1f4, 0x5, 0x7c, 0x3f, 0x2, 
    0x1f3, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1f4, 0x3, 0x2, 0x2, 0x2, 
    0x1f4, 0x85, 0x3, 0x2, 0x2, 0x2, 0x1f5, 0x1f6, 0x7, 0x25, 0x2, 0x2, 
    0x1f6, 0x1f7, 0x5, 0x88, 0x45, 0x2, 0x1f7, 0x87, 0x3, 0x2, 0x2, 0x2, 
    0x1f8, 0x1f9, 0x7, 0x3c, 0x2, 0x2, 0x1f9, 0x1fa, 0x7, 0x40, 0x2, 0x2, 
    0x1fa, 0x1fb, 0x7, 0x40, 0x2, 0x2, 0x1fb, 0x1fc, 0x7, 0x40, 0x2, 0x2, 
    0x1fc, 0x1fd, 0x7, 0x3d, 0x2, 0x2, 0x1fd, 0x1fe, 0x7, 0x3c, 0x2, 0x2, 
    0x1fe, 0x1ff, 0x7, 0x40, 0x2, 0x2, 0x1ff, 0x200, 0x7, 0x3d, 0x2, 0x2, 
    0x200, 0x89, 0x3, 0x2, 0x2, 0x2, 0x201, 0x207, 0x5, 0x8c, 0x47, 0x2, 
    0x202, 0x204, 0x5, 0x68, 0x35, 0x2, 0x203, 0x202, 0x3, 0x2, 0x2, 0x2, 
    0x204, 0x205, 0x3, 0x2, 0x2, 0x2, 0x205, 0x203, 0x3, 0x2, 0x2, 0x2, 
    0x205, 0x206, 0x3, 0x2, 0x2, 0x2, 0x206, 0x208, 0x3, 0x2, 0x2, 0x2, 
    0x207, 0x203, 0x3, 0x2, 0x2, 0x2, 0x207, 0x208, 0x3, 0x2, 0x2, 0x2, 
    0x208, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x209, 0x20b, 0x5, 0x94, 0x4b, 0x2, 
    0x20a, 0x209, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x20b, 0x3, 0x2, 0x2, 0x2, 
    0x20b, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x20e, 0x5, 0x7c, 0x3f, 0x2, 
    0x20d, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x20e, 0x3, 0x2, 0x2, 0x2, 
    0x20e, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x20f, 0x210, 0x7, 0x26, 0x2, 0x2, 
    0x210, 0x211, 0x5, 0x8e, 0x48, 0x2, 0x211, 0x8d, 0x3, 0x2, 0x2, 0x2, 
    0x212, 0x213, 0x7, 0x3c, 0x2, 0x2, 0x213, 0x214, 0x7, 0x40, 0x2, 0x2, 
    0x214, 0x215, 0x7, 0x40, 0x2, 0x2, 0x215, 0x216, 0x7, 0x40, 0x2, 0x2, 
    0x216, 0x217, 0x7, 0x40, 0x2, 0x2, 0x217, 0x218, 0x7, 0x3d, 0x2, 0x2, 
    0x218, 0x219, 0x7, 0x3c, 0x2, 0x2, 0x219, 0x21a, 0x7, 0x40, 0x2, 0x2, 
    0x21a, 0x21b, 0x7, 0x3d, 0x2, 0x2, 0x21b, 0x8f, 0x3, 0x2, 0x2, 0x2, 
    0x21c, 0x21e, 0x5, 0x92, 0x4a, 0x2, 0x21d, 0x21f, 0x5, 0x94, 0x4b, 0x2, 
    0x21e, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x220, 0x3, 0x2, 0x2, 0x2, 
    0x220, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x220, 0x221, 0x3, 0x2, 0x2, 0x2, 
    0x221, 0x223, 0x3, 0x2, 0x2, 0x2, 0x222, 0x224, 0x5, 0x98, 0x4d, 0x2, 
    0x223, 0x222, 0x3, 0x2, 0x2, 0x2, 0x224, 0x225, 0x3, 0x2, 0x2, 0x2, 
    0x225, 0x223, 0x3, 0x2, 0x2, 0x2, 0x225, 0x226, 0x3, 0x2, 0x2, 0x2, 
    0x226, 0x91, 0x3, 0x2, 0x2, 0x2, 0x227, 0x228, 0x7, 0x27, 0x2, 0x2, 
    0x228, 0x93, 0x3, 0x2, 0x2, 0x2, 0x229, 0x22a, 0x5, 0x4c, 0x27, 0x2, 
    0x22a, 0x22b, 0x7, 0x28, 0x2, 0x2, 0x22b, 0x22c, 0x5, 0x62, 0x32, 0x2, 
    0x22c, 0x22d, 0x5, 0x96, 0x4c, 0x2, 0x22d, 0x95, 0x3, 0x2, 0x2, 0x2, 
    0x22e, 0x230, 0x7, 0x3a, 0x2, 0x2, 0x22f, 0x231, 0x9, 0x4, 0x2, 0x2, 
    0x230, 0x22f, 0x3, 0x2, 0x2, 0x2, 0x231, 0x232, 0x3, 0x2, 0x2, 0x2, 
    0x232, 0x230, 0x3, 0x2, 0x2, 0x2, 0x232, 0x233, 0x3, 0x2, 0x2, 0x2, 
    0x233, 0x23a, 0x3, 0x2, 0x2, 0x2, 0x234, 0x236, 0x7, 0x3f, 0x2, 0x2, 
    0x235, 0x237, 0x9, 0x4, 0x2, 0x2, 0x236, 0x235, 0x3, 0x2, 0x2, 0x2, 
    0x237, 0x238, 0x3, 0x2, 0x2, 0x2, 0x238, 0x236, 0x3, 0x2, 0x2, 0x2, 
    0x238, 0x239, 0x3, 0x2, 0x2, 0x2, 0x239, 0x23b, 0x3, 0x2, 0x2, 0x2, 
    0x23a, 0x234, 0x3, 0x2, 0x2, 0x2, 0x23a, 0x23b, 0x3, 0x2, 0x2, 0x2, 
    0x23b, 0x23c, 0x3, 0x2, 0x2, 0x2, 0x23c, 0x23d, 0x7, 0x3b, 0x2, 0x2, 
    0x23d, 0x97, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x23f, 0x5, 0x4c, 0x27, 0x2, 
    0x23f, 0x240, 0x7, 0x22, 0x2, 0x2, 0x240, 0x241, 0x5, 0x9c, 0x4f, 0x2, 
    0x241, 0x242, 0x5, 0x9a, 0x4e, 0x2, 0x242, 0x99, 0x3, 0x2, 0x2, 0x2, 
    0x243, 0x248, 0x7, 0x23, 0x2, 0x2, 0x244, 0x245, 0x7, 0x29, 0x2, 0x2, 
    0x245, 0x248, 0x9, 0x2, 0x2, 0x2, 0x246, 0x248, 0x7, 0x2a, 0x2, 0x2, 
    0x247, 0x243, 0x3, 0x2, 0x2, 0x2, 0x247, 0x244, 0x3, 0x2, 0x2, 0x2, 
    0x247, 0x246, 0x3, 0x2, 0x2, 0x2, 0x248, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x249, 
    0x24a, 0x7, 0x39, 0x2, 0x2, 0x24a, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x24b, 
    0x24c, 0x5, 0xa0, 0x51, 0x2, 0x24c, 0x24e, 0x5, 0xa2, 0x52, 0x2, 0x24d, 
    0x24f, 0x5, 0xa8, 0x55, 0x2, 0x24e, 0x24d, 0x3, 0x2, 0x2, 0x2, 0x24e, 
    0x24f, 0x3, 0x2, 0x2, 0x2, 0x24f, 0x251, 0x3, 0x2, 0x2, 0x2, 0x250, 
    0x252, 0x5, 0xac, 0x57, 0x2, 0x251, 0x250, 0x3, 0x2, 0x2, 0x2, 0x252, 
    0x253, 0x3, 0x2, 0x2, 0x2, 0x253, 0x251, 0x3, 0x2, 0x2, 0x2, 0x253, 
    0x254, 0x3, 0x2, 0x2, 0x2, 0x254, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x255, 0x256, 
    0x7, 0x2b, 0x2, 0x2, 0x256, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x257, 0x258, 
    0x7, 0x2c, 0x2, 0x2, 0x258, 0x259, 0x5, 0xa4, 0x53, 0x2, 0x259, 0x25c, 
    0x7, 0x2d, 0x2, 0x2, 0x25a, 0x25d, 0x7, 0x2e, 0x2, 0x2, 0x25b, 0x25d, 
    0x5, 0xa6, 0x54, 0x2, 0x25c, 0x25a, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x25b, 
    0x3, 0x2, 0x2, 0x2, 0x25d, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x25e, 0x25f, 0x7, 
    0x39, 0x2, 0x2, 0x25f, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x260, 0x261, 0x7, 
    0x39, 0x2, 0x2, 0x261, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x262, 0x263, 0x7, 
    0x2f, 0x2, 0x2, 0x263, 0x264, 0x5, 0xaa, 0x56, 0x2, 0x264, 0xa9, 0x3, 
    0x2, 0x2, 0x2, 0x265, 0x267, 0x7, 0x3c, 0x2, 0x2, 0x266, 0x268, 0x7, 
    0x40, 0x2, 0x2, 0x267, 0x266, 0x3, 0x2, 0x2, 0x2, 0x268, 0x269, 0x3, 
    0x2, 0x2, 0x2, 0x269, 0x267, 0x3, 0x2, 0x2, 0x2, 0x269, 0x26a, 0x3, 
    0x2, 0x2, 0x2, 0x26a, 0x26b, 0x3, 0x2, 0x2, 0x2, 0x26b, 0x26c, 0x7, 
    0x3d, 0x2, 0x2, 0x26c, 0xab, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x26e, 0x5, 
    0x4a, 0x26, 0x2, 0x26e, 0x270, 0x5, 0x4c, 0x27, 0x2, 0x26f, 0x271, 0x5, 
    0xae, 0x58, 0x2, 0x270, 0x26f, 0x3, 0x2, 0x2, 0x2, 0x270, 0x271, 0x3, 
    0x2, 0x2, 0x2, 0x271, 0x274, 0x3, 0x2, 0x2, 0x2, 0x272, 0x273, 0x7, 
    0x30, 0x2, 0x2, 0x273, 0x275, 0x5, 0x62, 0x32, 0x2, 0x274, 0x272, 0x3, 
    0x2, 0x2, 0x2, 0x274, 0x275, 0x3, 0x2, 0x2, 0x2, 0x275, 0x276, 0x3, 
    0x2, 0x2, 0x2, 0x276, 0x278, 0x5, 0xb0, 0x59, 0x2, 0x277, 0x279, 0x5, 
    0xb2, 0x5a, 0x2, 0x278, 0x277, 0x3, 0x2, 0x2, 0x2, 0x278, 0x279, 0x3, 
    0x2, 0x2, 0x2, 0x279, 0xad, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x27b, 0x7, 0x3a, 
    0x2, 0x2, 0x27b, 0x27c, 0x7, 0x31, 0x2, 0x2, 0x27c, 0x284, 0x7, 0x3b, 
    0x2, 0x2, 0x27d, 0x27e, 0x7, 0x3a, 0x2, 0x2, 0x27e, 0x27f, 0x7, 0x32, 
    0x2, 0x2, 0x27f, 0x284, 0x7, 0x3b, 0x2, 0x2, 0x280, 0x281, 0x7, 0x3a, 
    0x2, 0x2, 0x281, 0x282, 0x7, 0x33, 0x2, 0x2, 0x282, 0x284, 0x7, 0x3b, 
    0x2, 0x2, 0x283, 0x27a, 0x3, 0x2, 0x2, 0x2, 0x283, 0x27d, 0x3, 0x2, 
    0x2, 0x2, 0x283, 0x280, 0x3, 0x2, 0x2, 0x2, 0x284, 0xaf, 0x3, 0x2, 0x2, 
    0x2, 0x285, 0x289, 0x5, 0xb4, 0x5b, 0x2, 0x286, 0x289, 0x5, 0xb6, 0x5c, 
    0x2, 0x287, 0x289, 0x5, 0xb8, 0x5d, 0x2, 0x288, 0x285, 0x3, 0x2, 0x2, 
    0x2, 0x288, 0x286, 0x3, 0x2, 0x2, 0x2, 0x288, 0x287, 0x3, 0x2, 0x2, 
    0x2, 0x289, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x28c, 0x7, 0x34, 0x2, 
    0x2, 0x28b, 0x28d, 0x9, 0x3, 0x2, 0x2, 0x28c, 0x28b, 0x3, 0x2, 0x2, 
    0x2, 0x28d, 0x28e, 0x3, 0x2, 0x2, 0x2, 0x28e, 0x28c, 0x3, 0x2, 0x2, 
    0x2, 0x28e, 0x28f, 0x3, 0x2, 0x2, 0x2, 0x28f, 0x296, 0x3, 0x2, 0x2, 
    0x2, 0x290, 0x292, 0x7, 0x3f, 0x2, 0x2, 0x291, 0x293, 0x9, 0x3, 0x2, 
    0x2, 0x292, 0x291, 0x3, 0x2, 0x2, 0x2, 0x293, 0x294, 0x3, 0x2, 0x2, 
    0x2, 0x294, 0x292, 0x3, 0x2, 0x2, 0x2, 0x294, 0x295, 0x3, 0x2, 0x2, 
    0x2, 0x295, 0x297, 0x3, 0x2, 0x2, 0x2, 0x296, 0x290, 0x3, 0x2, 0x2, 
    0x2, 0x296, 0x297, 0x3, 0x2, 0x2, 0x2, 0x297, 0xb3, 0x3, 0x2, 0x2, 0x2, 
    0x298, 0x299, 0x7, 0x35, 0x2, 0x2, 0x299, 0x29a, 0x7, 0x36, 0x2, 0x2, 
    0x29a, 0x29b, 0x5, 0xba, 0x5e, 0x2, 0x29b, 0xb5, 0x3, 0x2, 0x2, 0x2, 
    0x29c, 0x29d, 0x7, 0x35, 0x2, 0x2, 0x29d, 0x29e, 0x7, 0x37, 0x2, 0x2, 
    0x29e, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x29f, 0x2a0, 0x7, 0x36, 0x2, 0x2, 
    0x2a0, 0x2a1, 0x5, 0xba, 0x5e, 0x2, 0x2a1, 0xb9, 0x3, 0x2, 0x2, 0x2, 
    0x2a2, 0x2a3, 0x7, 0x39, 0x2, 0x2, 0x2a3, 0xbb, 0x3, 0x2, 0x2, 0x2, 
    0x35, 0xbf, 0xcc, 0xcf, 0xd2, 0xd5, 0xec, 0x135, 0x153, 0x15f, 0x169, 
    0x175, 0x17d, 0x185, 0x196, 0x198, 0x19b, 0x19e, 0x1a7, 0x1af, 0x1b8, 
    0x1c1, 0x1d4, 0x1d6, 0x1d9, 0x1dc, 0x1eb, 0x1ed, 0x1f0, 0x1f3, 0x205, 
    0x207, 0x20a, 0x20d, 0x220, 0x225, 0x232, 0x238, 0x23a, 0x247, 0x24e, 
    0x253, 0x25c, 0x269, 0x270, 0x274, 0x278, 0x283, 0x288, 0x28e, 0x294, 
    0x296, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

HistoryParser::Initializer HistoryParser::_init;
