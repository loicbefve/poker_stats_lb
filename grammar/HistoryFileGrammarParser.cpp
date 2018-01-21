
// Generated from HistoryFileGrammar.g4 by ANTLR 4.7.1


#include "HistoryFileGrammarListener.h"

#include "HistoryFileGrammarParser.h"


using namespace antlrcpp;
using namespace antlr4;

HistoryFileGrammarParser::HistoryFileGrammarParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

HistoryFileGrammarParser::~HistoryFileGrammarParser() {
  delete _interpreter;
}

std::string HistoryFileGrammarParser::getGrammarFileName() const {
  return "HistoryFileGrammar.g4";
}

const std::vector<std::string>& HistoryFileGrammarParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& HistoryFileGrammarParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- FichierContext ------------------------------------------------------------------

HistoryFileGrammarParser::FichierContext::FichierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HistoryFileGrammarParser::HandContext *> HistoryFileGrammarParser::FichierContext::hand() {
  return getRuleContexts<HistoryFileGrammarParser::HandContext>();
}

HistoryFileGrammarParser::HandContext* HistoryFileGrammarParser::FichierContext::hand(size_t i) {
  return getRuleContext<HistoryFileGrammarParser::HandContext>(i);
}


size_t HistoryFileGrammarParser::FichierContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleFichier;
}

void HistoryFileGrammarParser::FichierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFichier(this);
}

void HistoryFileGrammarParser::FichierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFichier(this);
}

HistoryFileGrammarParser::FichierContext* HistoryFileGrammarParser::fichier() {
  FichierContext *_localctx = _tracker.createInstance<FichierContext>(_ctx, getState());
  enterRule(_localctx, 0, HistoryFileGrammarParser::RuleFichier);
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
    } while (_la == HistoryFileGrammarParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HandContext ------------------------------------------------------------------

HistoryFileGrammarParser::HandContext::HandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::HandHeaderContext* HistoryFileGrammarParser::HandContext::handHeader() {
  return getRuleContext<HistoryFileGrammarParser::HandHeaderContext>(0);
}

HistoryFileGrammarParser::PositionsContext* HistoryFileGrammarParser::HandContext::positions() {
  return getRuleContext<HistoryFileGrammarParser::PositionsContext>(0);
}

HistoryFileGrammarParser::JeuContext* HistoryFileGrammarParser::HandContext::jeu() {
  return getRuleContext<HistoryFileGrammarParser::JeuContext>(0);
}

HistoryFileGrammarParser::SummarySectionContext* HistoryFileGrammarParser::HandContext::summarySection() {
  return getRuleContext<HistoryFileGrammarParser::SummarySectionContext>(0);
}


size_t HistoryFileGrammarParser::HandContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleHand;
}

void HistoryFileGrammarParser::HandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHand(this);
}

void HistoryFileGrammarParser::HandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHand(this);
}

HistoryFileGrammarParser::HandContext* HistoryFileGrammarParser::hand() {
  HandContext *_localctx = _tracker.createInstance<HandContext>(_ctx, getState());
  enterRule(_localctx, 2, HistoryFileGrammarParser::RuleHand);

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

HistoryFileGrammarParser::HandHeaderContext::HandHeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::FirstLineContext* HistoryFileGrammarParser::HandHeaderContext::firstLine() {
  return getRuleContext<HistoryFileGrammarParser::FirstLineContext>(0);
}

HistoryFileGrammarParser::SecondLineContext* HistoryFileGrammarParser::HandHeaderContext::secondLine() {
  return getRuleContext<HistoryFileGrammarParser::SecondLineContext>(0);
}


size_t HistoryFileGrammarParser::HandHeaderContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleHandHeader;
}

void HistoryFileGrammarParser::HandHeaderContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHandHeader(this);
}

void HistoryFileGrammarParser::HandHeaderContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHandHeader(this);
}

HistoryFileGrammarParser::HandHeaderContext* HistoryFileGrammarParser::handHeader() {
  HandHeaderContext *_localctx = _tracker.createInstance<HandHeaderContext>(_ctx, getState());
  enterRule(_localctx, 4, HistoryFileGrammarParser::RuleHandHeader);

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

HistoryFileGrammarParser::JeuContext::JeuContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::AnteblindSectionContext* HistoryFileGrammarParser::JeuContext::anteblindSection() {
  return getRuleContext<HistoryFileGrammarParser::AnteblindSectionContext>(0);
}

HistoryFileGrammarParser::PreflopSectionContext* HistoryFileGrammarParser::JeuContext::preflopSection() {
  return getRuleContext<HistoryFileGrammarParser::PreflopSectionContext>(0);
}

HistoryFileGrammarParser::FlopSectionContext* HistoryFileGrammarParser::JeuContext::flopSection() {
  return getRuleContext<HistoryFileGrammarParser::FlopSectionContext>(0);
}

HistoryFileGrammarParser::TurnSectionContext* HistoryFileGrammarParser::JeuContext::turnSection() {
  return getRuleContext<HistoryFileGrammarParser::TurnSectionContext>(0);
}

HistoryFileGrammarParser::RiverSectionContext* HistoryFileGrammarParser::JeuContext::riverSection() {
  return getRuleContext<HistoryFileGrammarParser::RiverSectionContext>(0);
}

HistoryFileGrammarParser::ShowdownSectionContext* HistoryFileGrammarParser::JeuContext::showdownSection() {
  return getRuleContext<HistoryFileGrammarParser::ShowdownSectionContext>(0);
}


size_t HistoryFileGrammarParser::JeuContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleJeu;
}

void HistoryFileGrammarParser::JeuContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJeu(this);
}

void HistoryFileGrammarParser::JeuContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJeu(this);
}

HistoryFileGrammarParser::JeuContext* HistoryFileGrammarParser::jeu() {
  JeuContext *_localctx = _tracker.createInstance<JeuContext>(_ctx, getState());
  enterRule(_localctx, 6, HistoryFileGrammarParser::RuleJeu);
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
    if (_la == HistoryFileGrammarParser::T__33) {
      setState(201);
      flopSection();
    }
    setState(205);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryFileGrammarParser::T__34) {
      setState(204);
      turnSection();
    }
    setState(208);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryFileGrammarParser::T__35) {
      setState(207);
      riverSection();
    }
    setState(211);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryFileGrammarParser::T__36) {
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

HistoryFileGrammarParser::FirstLineContext::FirstLineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::GameInfoContext* HistoryFileGrammarParser::FirstLineContext::gameInfo() {
  return getRuleContext<HistoryFileGrammarParser::GameInfoContext>(0);
}

HistoryFileGrammarParser::HandIdContext* HistoryFileGrammarParser::FirstLineContext::handId() {
  return getRuleContext<HistoryFileGrammarParser::HandIdContext>(0);
}

HistoryFileGrammarParser::TypePlayContext* HistoryFileGrammarParser::FirstLineContext::typePlay() {
  return getRuleContext<HistoryFileGrammarParser::TypePlayContext>(0);
}

HistoryFileGrammarParser::DateContext* HistoryFileGrammarParser::FirstLineContext::date() {
  return getRuleContext<HistoryFileGrammarParser::DateContext>(0);
}


size_t HistoryFileGrammarParser::FirstLineContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleFirstLine;
}

void HistoryFileGrammarParser::FirstLineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFirstLine(this);
}

void HistoryFileGrammarParser::FirstLineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFirstLine(this);
}

HistoryFileGrammarParser::FirstLineContext* HistoryFileGrammarParser::firstLine() {
  FirstLineContext *_localctx = _tracker.createInstance<FirstLineContext>(_ctx, getState());
  enterRule(_localctx, 8, HistoryFileGrammarParser::RuleFirstLine);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(213);
    match(HistoryFileGrammarParser::T__0);
    setState(214);
    gameInfo();
    setState(215);
    match(HistoryFileGrammarParser::T__1);
    setState(216);
    handId();
    setState(217);
    match(HistoryFileGrammarParser::T__1);
    setState(218);
    typePlay();
    setState(219);
    match(HistoryFileGrammarParser::T__1);
    setState(220);
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

HistoryFileGrammarParser::GameInfoContext::GameInfoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::TypeOfGameContext* HistoryFileGrammarParser::GameInfoContext::typeOfGame() {
  return getRuleContext<HistoryFileGrammarParser::TypeOfGameContext>(0);
}

HistoryFileGrammarParser::NameOfGameContext* HistoryFileGrammarParser::GameInfoContext::nameOfGame() {
  return getRuleContext<HistoryFileGrammarParser::NameOfGameContext>(0);
}

HistoryFileGrammarParser::BuyinContext* HistoryFileGrammarParser::GameInfoContext::buyin() {
  return getRuleContext<HistoryFileGrammarParser::BuyinContext>(0);
}

HistoryFileGrammarParser::LevelContext* HistoryFileGrammarParser::GameInfoContext::level() {
  return getRuleContext<HistoryFileGrammarParser::LevelContext>(0);
}


size_t HistoryFileGrammarParser::GameInfoContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleGameInfo;
}

void HistoryFileGrammarParser::GameInfoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGameInfo(this);
}

void HistoryFileGrammarParser::GameInfoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGameInfo(this);
}

HistoryFileGrammarParser::GameInfoContext* HistoryFileGrammarParser::gameInfo() {
  GameInfoContext *_localctx = _tracker.createInstance<GameInfoContext>(_ctx, getState());
  enterRule(_localctx, 10, HistoryFileGrammarParser::RuleGameInfo);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(222);
    typeOfGame();
    setState(223);
    nameOfGame();
    setState(224);
    buyin();
    setState(225);
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

HistoryFileGrammarParser::TypeOfGameContext::TypeOfGameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t HistoryFileGrammarParser::TypeOfGameContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleTypeOfGame;
}

void HistoryFileGrammarParser::TypeOfGameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeOfGame(this);
}

void HistoryFileGrammarParser::TypeOfGameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeOfGame(this);
}

HistoryFileGrammarParser::TypeOfGameContext* HistoryFileGrammarParser::typeOfGame() {
  TypeOfGameContext *_localctx = _tracker.createInstance<TypeOfGameContext>(_ctx, getState());
  enterRule(_localctx, 12, HistoryFileGrammarParser::RuleTypeOfGame);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(227);
    match(HistoryFileGrammarParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NameOfGameContext ------------------------------------------------------------------

HistoryFileGrammarParser::NameOfGameContext::NameOfGameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> HistoryFileGrammarParser::NameOfGameContext::MOT() {
  return getTokens(HistoryFileGrammarParser::MOT);
}

tree::TerminalNode* HistoryFileGrammarParser::NameOfGameContext::MOT(size_t i) {
  return getToken(HistoryFileGrammarParser::MOT, i);
}


size_t HistoryFileGrammarParser::NameOfGameContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleNameOfGame;
}

void HistoryFileGrammarParser::NameOfGameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNameOfGame(this);
}

void HistoryFileGrammarParser::NameOfGameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNameOfGame(this);
}

HistoryFileGrammarParser::NameOfGameContext* HistoryFileGrammarParser::nameOfGame() {
  NameOfGameContext *_localctx = _tracker.createInstance<NameOfGameContext>(_ctx, getState());
  enterRule(_localctx, 14, HistoryFileGrammarParser::RuleNameOfGame);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(229);
    match(HistoryFileGrammarParser::T__3);
    setState(231); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(230);
      match(HistoryFileGrammarParser::MOT);
      setState(233); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == HistoryFileGrammarParser::MOT);
    setState(235);
    match(HistoryFileGrammarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BuyinContext ------------------------------------------------------------------

HistoryFileGrammarParser::BuyinContext::BuyinContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::BuyValueContext* HistoryFileGrammarParser::BuyinContext::buyValue() {
  return getRuleContext<HistoryFileGrammarParser::BuyValueContext>(0);
}

HistoryFileGrammarParser::RakeBuyValueContext* HistoryFileGrammarParser::BuyinContext::rakeBuyValue() {
  return getRuleContext<HistoryFileGrammarParser::RakeBuyValueContext>(0);
}


size_t HistoryFileGrammarParser::BuyinContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleBuyin;
}

void HistoryFileGrammarParser::BuyinContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBuyin(this);
}

void HistoryFileGrammarParser::BuyinContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBuyin(this);
}

HistoryFileGrammarParser::BuyinContext* HistoryFileGrammarParser::buyin() {
  BuyinContext *_localctx = _tracker.createInstance<BuyinContext>(_ctx, getState());
  enterRule(_localctx, 16, HistoryFileGrammarParser::RuleBuyin);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(237);
    match(HistoryFileGrammarParser::T__4);
    setState(238);
    buyValue();
    setState(239);
    match(HistoryFileGrammarParser::T__5);
    setState(240);
    rakeBuyValue();
    setState(241);
    match(HistoryFileGrammarParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BuyValueContext ------------------------------------------------------------------

HistoryFileGrammarParser::BuyValueContext::BuyValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::BuyValueContext::NUMBER() {
  return getToken(HistoryFileGrammarParser::NUMBER, 0);
}

tree::TerminalNode* HistoryFileGrammarParser::BuyValueContext::DIGIT() {
  return getToken(HistoryFileGrammarParser::DIGIT, 0);
}


size_t HistoryFileGrammarParser::BuyValueContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleBuyValue;
}

void HistoryFileGrammarParser::BuyValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBuyValue(this);
}

void HistoryFileGrammarParser::BuyValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBuyValue(this);
}

HistoryFileGrammarParser::BuyValueContext* HistoryFileGrammarParser::buyValue() {
  BuyValueContext *_localctx = _tracker.createInstance<BuyValueContext>(_ctx, getState());
  enterRule(_localctx, 18, HistoryFileGrammarParser::RuleBuyValue);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(243);
    _la = _input->LA(1);
    if (!(_la == HistoryFileGrammarParser::DIGIT

    || _la == HistoryFileGrammarParser::NUMBER)) {
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

HistoryFileGrammarParser::RakeBuyValueContext::RakeBuyValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::RakeBuyValueContext::NUMBER() {
  return getToken(HistoryFileGrammarParser::NUMBER, 0);
}

tree::TerminalNode* HistoryFileGrammarParser::RakeBuyValueContext::DIGIT() {
  return getToken(HistoryFileGrammarParser::DIGIT, 0);
}


size_t HistoryFileGrammarParser::RakeBuyValueContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleRakeBuyValue;
}

void HistoryFileGrammarParser::RakeBuyValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRakeBuyValue(this);
}

void HistoryFileGrammarParser::RakeBuyValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRakeBuyValue(this);
}

HistoryFileGrammarParser::RakeBuyValueContext* HistoryFileGrammarParser::rakeBuyValue() {
  RakeBuyValueContext *_localctx = _tracker.createInstance<RakeBuyValueContext>(_ctx, getState());
  enterRule(_localctx, 20, HistoryFileGrammarParser::RuleRakeBuyValue);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(245);
    _la = _input->LA(1);
    if (!(_la == HistoryFileGrammarParser::DIGIT

    || _la == HistoryFileGrammarParser::NUMBER)) {
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

HistoryFileGrammarParser::LevelContext::LevelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::LevelValueContext* HistoryFileGrammarParser::LevelContext::levelValue() {
  return getRuleContext<HistoryFileGrammarParser::LevelValueContext>(0);
}


size_t HistoryFileGrammarParser::LevelContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleLevel;
}

void HistoryFileGrammarParser::LevelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLevel(this);
}

void HistoryFileGrammarParser::LevelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLevel(this);
}

HistoryFileGrammarParser::LevelContext* HistoryFileGrammarParser::level() {
  LevelContext *_localctx = _tracker.createInstance<LevelContext>(_ctx, getState());
  enterRule(_localctx, 22, HistoryFileGrammarParser::RuleLevel);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(247);
    match(HistoryFileGrammarParser::T__7);
    setState(248);
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

HistoryFileGrammarParser::LevelValueContext::LevelValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::LevelValueContext::NUMBER() {
  return getToken(HistoryFileGrammarParser::NUMBER, 0);
}

tree::TerminalNode* HistoryFileGrammarParser::LevelValueContext::DIGIT() {
  return getToken(HistoryFileGrammarParser::DIGIT, 0);
}


size_t HistoryFileGrammarParser::LevelValueContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleLevelValue;
}

void HistoryFileGrammarParser::LevelValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLevelValue(this);
}

void HistoryFileGrammarParser::LevelValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLevelValue(this);
}

HistoryFileGrammarParser::LevelValueContext* HistoryFileGrammarParser::levelValue() {
  LevelValueContext *_localctx = _tracker.createInstance<LevelValueContext>(_ctx, getState());
  enterRule(_localctx, 24, HistoryFileGrammarParser::RuleLevelValue);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(250);
    _la = _input->LA(1);
    if (!(_la == HistoryFileGrammarParser::DIGIT

    || _la == HistoryFileGrammarParser::NUMBER)) {
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

HistoryFileGrammarParser::HandIdContext::HandIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::HandIdValueContext* HistoryFileGrammarParser::HandIdContext::handIdValue() {
  return getRuleContext<HistoryFileGrammarParser::HandIdValueContext>(0);
}


size_t HistoryFileGrammarParser::HandIdContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleHandId;
}

void HistoryFileGrammarParser::HandIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHandId(this);
}

void HistoryFileGrammarParser::HandIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHandId(this);
}

HistoryFileGrammarParser::HandIdContext* HistoryFileGrammarParser::handId() {
  HandIdContext *_localctx = _tracker.createInstance<HandIdContext>(_ctx, getState());
  enterRule(_localctx, 26, HistoryFileGrammarParser::RuleHandId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(252);
    match(HistoryFileGrammarParser::T__8);
    setState(253);
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

HistoryFileGrammarParser::HandIdValueContext::HandIdValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::HandIdValueContext::MOT() {
  return getToken(HistoryFileGrammarParser::MOT, 0);
}


size_t HistoryFileGrammarParser::HandIdValueContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleHandIdValue;
}

void HistoryFileGrammarParser::HandIdValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHandIdValue(this);
}

void HistoryFileGrammarParser::HandIdValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHandIdValue(this);
}

HistoryFileGrammarParser::HandIdValueContext* HistoryFileGrammarParser::handIdValue() {
  HandIdValueContext *_localctx = _tracker.createInstance<HandIdValueContext>(_ctx, getState());
  enterRule(_localctx, 28, HistoryFileGrammarParser::RuleHandIdValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(255);
    match(HistoryFileGrammarParser::MOT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypePlayContext ------------------------------------------------------------------

HistoryFileGrammarParser::TypePlayContext::TypePlayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::TypePlayContext::LPAREN() {
  return getToken(HistoryFileGrammarParser::LPAREN, 0);
}

HistoryFileGrammarParser::AnteValueContext* HistoryFileGrammarParser::TypePlayContext::anteValue() {
  return getRuleContext<HistoryFileGrammarParser::AnteValueContext>(0);
}

HistoryFileGrammarParser::SmallblindValueContext* HistoryFileGrammarParser::TypePlayContext::smallblindValue() {
  return getRuleContext<HistoryFileGrammarParser::SmallblindValueContext>(0);
}

HistoryFileGrammarParser::BigblindValueContext* HistoryFileGrammarParser::TypePlayContext::bigblindValue() {
  return getRuleContext<HistoryFileGrammarParser::BigblindValueContext>(0);
}

tree::TerminalNode* HistoryFileGrammarParser::TypePlayContext::RPAREN() {
  return getToken(HistoryFileGrammarParser::RPAREN, 0);
}


size_t HistoryFileGrammarParser::TypePlayContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleTypePlay;
}

void HistoryFileGrammarParser::TypePlayContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypePlay(this);
}

void HistoryFileGrammarParser::TypePlayContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypePlay(this);
}

HistoryFileGrammarParser::TypePlayContext* HistoryFileGrammarParser::typePlay() {
  TypePlayContext *_localctx = _tracker.createInstance<TypePlayContext>(_ctx, getState());
  enterRule(_localctx, 30, HistoryFileGrammarParser::RuleTypePlay);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(257);
    match(HistoryFileGrammarParser::T__9);
    setState(258);
    match(HistoryFileGrammarParser::LPAREN);
    setState(259);
    anteValue();
    setState(260);
    match(HistoryFileGrammarParser::T__10);
    setState(261);
    smallblindValue();
    setState(262);
    match(HistoryFileGrammarParser::T__10);
    setState(263);
    bigblindValue();
    setState(264);
    match(HistoryFileGrammarParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnteValueContext ------------------------------------------------------------------

HistoryFileGrammarParser::AnteValueContext::AnteValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::AnteValueContext::NUMBER() {
  return getToken(HistoryFileGrammarParser::NUMBER, 0);
}

tree::TerminalNode* HistoryFileGrammarParser::AnteValueContext::DIGIT() {
  return getToken(HistoryFileGrammarParser::DIGIT, 0);
}


size_t HistoryFileGrammarParser::AnteValueContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleAnteValue;
}

void HistoryFileGrammarParser::AnteValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnteValue(this);
}

void HistoryFileGrammarParser::AnteValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnteValue(this);
}

HistoryFileGrammarParser::AnteValueContext* HistoryFileGrammarParser::anteValue() {
  AnteValueContext *_localctx = _tracker.createInstance<AnteValueContext>(_ctx, getState());
  enterRule(_localctx, 32, HistoryFileGrammarParser::RuleAnteValue);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(266);
    _la = _input->LA(1);
    if (!(_la == HistoryFileGrammarParser::DIGIT

    || _la == HistoryFileGrammarParser::NUMBER)) {
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

HistoryFileGrammarParser::SmallblindValueContext::SmallblindValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::SmallblindValueContext::NUMBER() {
  return getToken(HistoryFileGrammarParser::NUMBER, 0);
}

tree::TerminalNode* HistoryFileGrammarParser::SmallblindValueContext::DIGIT() {
  return getToken(HistoryFileGrammarParser::DIGIT, 0);
}


size_t HistoryFileGrammarParser::SmallblindValueContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleSmallblindValue;
}

void HistoryFileGrammarParser::SmallblindValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSmallblindValue(this);
}

void HistoryFileGrammarParser::SmallblindValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSmallblindValue(this);
}

HistoryFileGrammarParser::SmallblindValueContext* HistoryFileGrammarParser::smallblindValue() {
  SmallblindValueContext *_localctx = _tracker.createInstance<SmallblindValueContext>(_ctx, getState());
  enterRule(_localctx, 34, HistoryFileGrammarParser::RuleSmallblindValue);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(268);
    _la = _input->LA(1);
    if (!(_la == HistoryFileGrammarParser::DIGIT

    || _la == HistoryFileGrammarParser::NUMBER)) {
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

HistoryFileGrammarParser::BigblindValueContext::BigblindValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::BigblindValueContext::NUMBER() {
  return getToken(HistoryFileGrammarParser::NUMBER, 0);
}

tree::TerminalNode* HistoryFileGrammarParser::BigblindValueContext::DIGIT() {
  return getToken(HistoryFileGrammarParser::DIGIT, 0);
}


size_t HistoryFileGrammarParser::BigblindValueContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleBigblindValue;
}

void HistoryFileGrammarParser::BigblindValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBigblindValue(this);
}

void HistoryFileGrammarParser::BigblindValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBigblindValue(this);
}

HistoryFileGrammarParser::BigblindValueContext* HistoryFileGrammarParser::bigblindValue() {
  BigblindValueContext *_localctx = _tracker.createInstance<BigblindValueContext>(_ctx, getState());
  enterRule(_localctx, 36, HistoryFileGrammarParser::RuleBigblindValue);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(270);
    _la = _input->LA(1);
    if (!(_la == HistoryFileGrammarParser::DIGIT

    || _la == HistoryFileGrammarParser::NUMBER)) {
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

HistoryFileGrammarParser::DateContext::DateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::AnneeContext* HistoryFileGrammarParser::DateContext::annee() {
  return getRuleContext<HistoryFileGrammarParser::AnneeContext>(0);
}

HistoryFileGrammarParser::MoisContext* HistoryFileGrammarParser::DateContext::mois() {
  return getRuleContext<HistoryFileGrammarParser::MoisContext>(0);
}

HistoryFileGrammarParser::JourContext* HistoryFileGrammarParser::DateContext::jour() {
  return getRuleContext<HistoryFileGrammarParser::JourContext>(0);
}

HistoryFileGrammarParser::HeureContext* HistoryFileGrammarParser::DateContext::heure() {
  return getRuleContext<HistoryFileGrammarParser::HeureContext>(0);
}

std::vector<tree::TerminalNode *> HistoryFileGrammarParser::DateContext::COLON() {
  return getTokens(HistoryFileGrammarParser::COLON);
}

tree::TerminalNode* HistoryFileGrammarParser::DateContext::COLON(size_t i) {
  return getToken(HistoryFileGrammarParser::COLON, i);
}

HistoryFileGrammarParser::MinutesContext* HistoryFileGrammarParser::DateContext::minutes() {
  return getRuleContext<HistoryFileGrammarParser::MinutesContext>(0);
}

HistoryFileGrammarParser::SecondesContext* HistoryFileGrammarParser::DateContext::secondes() {
  return getRuleContext<HistoryFileGrammarParser::SecondesContext>(0);
}


size_t HistoryFileGrammarParser::DateContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleDate;
}

void HistoryFileGrammarParser::DateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDate(this);
}

void HistoryFileGrammarParser::DateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDate(this);
}

HistoryFileGrammarParser::DateContext* HistoryFileGrammarParser::date() {
  DateContext *_localctx = _tracker.createInstance<DateContext>(_ctx, getState());
  enterRule(_localctx, 38, HistoryFileGrammarParser::RuleDate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(272);
    annee();
    setState(273);
    match(HistoryFileGrammarParser::T__10);
    setState(274);
    mois();
    setState(275);
    match(HistoryFileGrammarParser::T__10);
    setState(276);
    jour();
    setState(277);
    heure();
    setState(278);
    match(HistoryFileGrammarParser::COLON);
    setState(279);
    minutes();
    setState(280);
    match(HistoryFileGrammarParser::COLON);
    setState(281);
    secondes();
    setState(282);
    match(HistoryFileGrammarParser::T__11);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnneeContext ------------------------------------------------------------------

HistoryFileGrammarParser::AnneeContext::AnneeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::AnneeContext::NUMBER() {
  return getToken(HistoryFileGrammarParser::NUMBER, 0);
}


size_t HistoryFileGrammarParser::AnneeContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleAnnee;
}

void HistoryFileGrammarParser::AnneeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnnee(this);
}

void HistoryFileGrammarParser::AnneeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnnee(this);
}

HistoryFileGrammarParser::AnneeContext* HistoryFileGrammarParser::annee() {
  AnneeContext *_localctx = _tracker.createInstance<AnneeContext>(_ctx, getState());
  enterRule(_localctx, 40, HistoryFileGrammarParser::RuleAnnee);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(284);
    match(HistoryFileGrammarParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MoisContext ------------------------------------------------------------------

HistoryFileGrammarParser::MoisContext::MoisContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::MoisContext::NUMBER() {
  return getToken(HistoryFileGrammarParser::NUMBER, 0);
}


size_t HistoryFileGrammarParser::MoisContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleMois;
}

void HistoryFileGrammarParser::MoisContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMois(this);
}

void HistoryFileGrammarParser::MoisContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMois(this);
}

HistoryFileGrammarParser::MoisContext* HistoryFileGrammarParser::mois() {
  MoisContext *_localctx = _tracker.createInstance<MoisContext>(_ctx, getState());
  enterRule(_localctx, 42, HistoryFileGrammarParser::RuleMois);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(286);
    match(HistoryFileGrammarParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JourContext ------------------------------------------------------------------

HistoryFileGrammarParser::JourContext::JourContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::JourContext::NUMBER() {
  return getToken(HistoryFileGrammarParser::NUMBER, 0);
}


size_t HistoryFileGrammarParser::JourContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleJour;
}

void HistoryFileGrammarParser::JourContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJour(this);
}

void HistoryFileGrammarParser::JourContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJour(this);
}

HistoryFileGrammarParser::JourContext* HistoryFileGrammarParser::jour() {
  JourContext *_localctx = _tracker.createInstance<JourContext>(_ctx, getState());
  enterRule(_localctx, 44, HistoryFileGrammarParser::RuleJour);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(288);
    match(HistoryFileGrammarParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HeureContext ------------------------------------------------------------------

HistoryFileGrammarParser::HeureContext::HeureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::HeureContext::NUMBER() {
  return getToken(HistoryFileGrammarParser::NUMBER, 0);
}


size_t HistoryFileGrammarParser::HeureContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleHeure;
}

void HistoryFileGrammarParser::HeureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHeure(this);
}

void HistoryFileGrammarParser::HeureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHeure(this);
}

HistoryFileGrammarParser::HeureContext* HistoryFileGrammarParser::heure() {
  HeureContext *_localctx = _tracker.createInstance<HeureContext>(_ctx, getState());
  enterRule(_localctx, 46, HistoryFileGrammarParser::RuleHeure);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(290);
    match(HistoryFileGrammarParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MinutesContext ------------------------------------------------------------------

HistoryFileGrammarParser::MinutesContext::MinutesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::MinutesContext::NUMBER() {
  return getToken(HistoryFileGrammarParser::NUMBER, 0);
}


size_t HistoryFileGrammarParser::MinutesContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleMinutes;
}

void HistoryFileGrammarParser::MinutesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMinutes(this);
}

void HistoryFileGrammarParser::MinutesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMinutes(this);
}

HistoryFileGrammarParser::MinutesContext* HistoryFileGrammarParser::minutes() {
  MinutesContext *_localctx = _tracker.createInstance<MinutesContext>(_ctx, getState());
  enterRule(_localctx, 48, HistoryFileGrammarParser::RuleMinutes);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(292);
    match(HistoryFileGrammarParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SecondesContext ------------------------------------------------------------------

HistoryFileGrammarParser::SecondesContext::SecondesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::SecondesContext::NUMBER() {
  return getToken(HistoryFileGrammarParser::NUMBER, 0);
}


size_t HistoryFileGrammarParser::SecondesContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleSecondes;
}

void HistoryFileGrammarParser::SecondesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSecondes(this);
}

void HistoryFileGrammarParser::SecondesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSecondes(this);
}

HistoryFileGrammarParser::SecondesContext* HistoryFileGrammarParser::secondes() {
  SecondesContext *_localctx = _tracker.createInstance<SecondesContext>(_ctx, getState());
  enterRule(_localctx, 50, HistoryFileGrammarParser::RuleSecondes);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(294);
    match(HistoryFileGrammarParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SecondLineContext ------------------------------------------------------------------

HistoryFileGrammarParser::SecondLineContext::SecondLineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::TableInfoContext* HistoryFileGrammarParser::SecondLineContext::tableInfo() {
  return getRuleContext<HistoryFileGrammarParser::TableInfoContext>(0);
}

HistoryFileGrammarParser::FormatContext* HistoryFileGrammarParser::SecondLineContext::format() {
  return getRuleContext<HistoryFileGrammarParser::FormatContext>(0);
}

HistoryFileGrammarParser::WhoIsButtonContext* HistoryFileGrammarParser::SecondLineContext::whoIsButton() {
  return getRuleContext<HistoryFileGrammarParser::WhoIsButtonContext>(0);
}


size_t HistoryFileGrammarParser::SecondLineContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleSecondLine;
}

void HistoryFileGrammarParser::SecondLineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSecondLine(this);
}

void HistoryFileGrammarParser::SecondLineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSecondLine(this);
}

HistoryFileGrammarParser::SecondLineContext* HistoryFileGrammarParser::secondLine() {
  SecondLineContext *_localctx = _tracker.createInstance<SecondLineContext>(_ctx, getState());
  enterRule(_localctx, 52, HistoryFileGrammarParser::RuleSecondLine);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(296);
    match(HistoryFileGrammarParser::T__12);
    setState(297);
    tableInfo();
    setState(298);
    format();
    setState(299);
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

HistoryFileGrammarParser::TableInfoContext::TableInfoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::TableInfoContext::LPAREN() {
  return getToken(HistoryFileGrammarParser::LPAREN, 0);
}

HistoryFileGrammarParser::IdTableContext* HistoryFileGrammarParser::TableInfoContext::idTable() {
  return getRuleContext<HistoryFileGrammarParser::IdTableContext>(0);
}

tree::TerminalNode* HistoryFileGrammarParser::TableInfoContext::RPAREN() {
  return getToken(HistoryFileGrammarParser::RPAREN, 0);
}

HistoryFileGrammarParser::DiezContext* HistoryFileGrammarParser::TableInfoContext::diez() {
  return getRuleContext<HistoryFileGrammarParser::DiezContext>(0);
}

std::vector<tree::TerminalNode *> HistoryFileGrammarParser::TableInfoContext::MOT() {
  return getTokens(HistoryFileGrammarParser::MOT);
}

tree::TerminalNode* HistoryFileGrammarParser::TableInfoContext::MOT(size_t i) {
  return getToken(HistoryFileGrammarParser::MOT, i);
}


size_t HistoryFileGrammarParser::TableInfoContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleTableInfo;
}

void HistoryFileGrammarParser::TableInfoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTableInfo(this);
}

void HistoryFileGrammarParser::TableInfoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTableInfo(this);
}

HistoryFileGrammarParser::TableInfoContext* HistoryFileGrammarParser::tableInfo() {
  TableInfoContext *_localctx = _tracker.createInstance<TableInfoContext>(_ctx, getState());
  enterRule(_localctx, 54, HistoryFileGrammarParser::RuleTableInfo);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(301);
    match(HistoryFileGrammarParser::T__13);
    setState(303); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(302);
      match(HistoryFileGrammarParser::MOT);
      setState(305); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == HistoryFileGrammarParser::MOT);
    setState(307);
    match(HistoryFileGrammarParser::LPAREN);
    setState(308);
    idTable();
    setState(309);
    match(HistoryFileGrammarParser::RPAREN);
    setState(310);
    match(HistoryFileGrammarParser::T__14);
    setState(311);
    diez();
    setState(312);
    match(HistoryFileGrammarParser::T__13);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdTableContext ------------------------------------------------------------------

HistoryFileGrammarParser::IdTableContext::IdTableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::IdTableContext::NUMBER() {
  return getToken(HistoryFileGrammarParser::NUMBER, 0);
}


size_t HistoryFileGrammarParser::IdTableContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleIdTable;
}

void HistoryFileGrammarParser::IdTableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdTable(this);
}

void HistoryFileGrammarParser::IdTableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdTable(this);
}

HistoryFileGrammarParser::IdTableContext* HistoryFileGrammarParser::idTable() {
  IdTableContext *_localctx = _tracker.createInstance<IdTableContext>(_ctx, getState());
  enterRule(_localctx, 56, HistoryFileGrammarParser::RuleIdTable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(314);
    match(HistoryFileGrammarParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DiezContext ------------------------------------------------------------------

HistoryFileGrammarParser::DiezContext::DiezContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::DiezContext::NUMBER() {
  return getToken(HistoryFileGrammarParser::NUMBER, 0);
}


size_t HistoryFileGrammarParser::DiezContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleDiez;
}

void HistoryFileGrammarParser::DiezContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDiez(this);
}

void HistoryFileGrammarParser::DiezContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDiez(this);
}

HistoryFileGrammarParser::DiezContext* HistoryFileGrammarParser::diez() {
  DiezContext *_localctx = _tracker.createInstance<DiezContext>(_ctx, getState());
  enterRule(_localctx, 58, HistoryFileGrammarParser::RuleDiez);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(316);
    match(HistoryFileGrammarParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormatContext ------------------------------------------------------------------

HistoryFileGrammarParser::FormatContext::FormatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::NumberOfPlayerContext* HistoryFileGrammarParser::FormatContext::numberOfPlayer() {
  return getRuleContext<HistoryFileGrammarParser::NumberOfPlayerContext>(0);
}


size_t HistoryFileGrammarParser::FormatContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleFormat;
}

void HistoryFileGrammarParser::FormatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormat(this);
}

void HistoryFileGrammarParser::FormatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormat(this);
}

HistoryFileGrammarParser::FormatContext* HistoryFileGrammarParser::format() {
  FormatContext *_localctx = _tracker.createInstance<FormatContext>(_ctx, getState());
  enterRule(_localctx, 60, HistoryFileGrammarParser::RuleFormat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(318);
    numberOfPlayer();
    setState(319);
    match(HistoryFileGrammarParser::T__15);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberOfPlayerContext ------------------------------------------------------------------

HistoryFileGrammarParser::NumberOfPlayerContext::NumberOfPlayerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::NumberOfPlayerContext::MOT() {
  return getToken(HistoryFileGrammarParser::MOT, 0);
}


size_t HistoryFileGrammarParser::NumberOfPlayerContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleNumberOfPlayer;
}

void HistoryFileGrammarParser::NumberOfPlayerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumberOfPlayer(this);
}

void HistoryFileGrammarParser::NumberOfPlayerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumberOfPlayer(this);
}

HistoryFileGrammarParser::NumberOfPlayerContext* HistoryFileGrammarParser::numberOfPlayer() {
  NumberOfPlayerContext *_localctx = _tracker.createInstance<NumberOfPlayerContext>(_ctx, getState());
  enterRule(_localctx, 62, HistoryFileGrammarParser::RuleNumberOfPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(321);
    match(HistoryFileGrammarParser::MOT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhoIsButtonContext ------------------------------------------------------------------

HistoryFileGrammarParser::WhoIsButtonContext::WhoIsButtonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::ButtonIdContext* HistoryFileGrammarParser::WhoIsButtonContext::buttonId() {
  return getRuleContext<HistoryFileGrammarParser::ButtonIdContext>(0);
}


size_t HistoryFileGrammarParser::WhoIsButtonContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleWhoIsButton;
}

void HistoryFileGrammarParser::WhoIsButtonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhoIsButton(this);
}

void HistoryFileGrammarParser::WhoIsButtonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhoIsButton(this);
}

HistoryFileGrammarParser::WhoIsButtonContext* HistoryFileGrammarParser::whoIsButton() {
  WhoIsButtonContext *_localctx = _tracker.createInstance<WhoIsButtonContext>(_ctx, getState());
  enterRule(_localctx, 64, HistoryFileGrammarParser::RuleWhoIsButton);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(323);
    match(HistoryFileGrammarParser::T__16);
    setState(324);
    buttonId();
    setState(325);
    match(HistoryFileGrammarParser::T__17);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ButtonIdContext ------------------------------------------------------------------

HistoryFileGrammarParser::ButtonIdContext::ButtonIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::ButtonIdContext::DIGIT() {
  return getToken(HistoryFileGrammarParser::DIGIT, 0);
}


size_t HistoryFileGrammarParser::ButtonIdContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleButtonId;
}

void HistoryFileGrammarParser::ButtonIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterButtonId(this);
}

void HistoryFileGrammarParser::ButtonIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitButtonId(this);
}

HistoryFileGrammarParser::ButtonIdContext* HistoryFileGrammarParser::buttonId() {
  ButtonIdContext *_localctx = _tracker.createInstance<ButtonIdContext>(_ctx, getState());
  enterRule(_localctx, 66, HistoryFileGrammarParser::RuleButtonId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(327);
    match(HistoryFileGrammarParser::DIGIT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PositionsContext ------------------------------------------------------------------

HistoryFileGrammarParser::PositionsContext::PositionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HistoryFileGrammarParser::RecapPlaceContext *> HistoryFileGrammarParser::PositionsContext::recapPlace() {
  return getRuleContexts<HistoryFileGrammarParser::RecapPlaceContext>();
}

HistoryFileGrammarParser::RecapPlaceContext* HistoryFileGrammarParser::PositionsContext::recapPlace(size_t i) {
  return getRuleContext<HistoryFileGrammarParser::RecapPlaceContext>(i);
}


size_t HistoryFileGrammarParser::PositionsContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RulePositions;
}

void HistoryFileGrammarParser::PositionsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPositions(this);
}

void HistoryFileGrammarParser::PositionsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPositions(this);
}

HistoryFileGrammarParser::PositionsContext* HistoryFileGrammarParser::positions() {
  PositionsContext *_localctx = _tracker.createInstance<PositionsContext>(_ctx, getState());
  enterRule(_localctx, 68, HistoryFileGrammarParser::RulePositions);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(330); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(329);
      recapPlace();
      setState(332); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == HistoryFileGrammarParser::SEAT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RecapPlaceContext ------------------------------------------------------------------

HistoryFileGrammarParser::RecapPlaceContext::RecapPlaceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::SiegeContext* HistoryFileGrammarParser::RecapPlaceContext::siege() {
  return getRuleContext<HistoryFileGrammarParser::SiegeContext>(0);
}

HistoryFileGrammarParser::PseudoContext* HistoryFileGrammarParser::RecapPlaceContext::pseudo() {
  return getRuleContext<HistoryFileGrammarParser::PseudoContext>(0);
}

HistoryFileGrammarParser::TapisContext* HistoryFileGrammarParser::RecapPlaceContext::tapis() {
  return getRuleContext<HistoryFileGrammarParser::TapisContext>(0);
}


size_t HistoryFileGrammarParser::RecapPlaceContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleRecapPlace;
}

void HistoryFileGrammarParser::RecapPlaceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRecapPlace(this);
}

void HistoryFileGrammarParser::RecapPlaceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRecapPlace(this);
}

HistoryFileGrammarParser::RecapPlaceContext* HistoryFileGrammarParser::recapPlace() {
  RecapPlaceContext *_localctx = _tracker.createInstance<RecapPlaceContext>(_ctx, getState());
  enterRule(_localctx, 70, HistoryFileGrammarParser::RuleRecapPlace);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(334);
    siege();
    setState(335);
    pseudo();
    setState(336);
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

HistoryFileGrammarParser::SiegeContext::SiegeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::SiegeContext::SEAT() {
  return getToken(HistoryFileGrammarParser::SEAT, 0);
}

tree::TerminalNode* HistoryFileGrammarParser::SiegeContext::COLON() {
  return getToken(HistoryFileGrammarParser::COLON, 0);
}


size_t HistoryFileGrammarParser::SiegeContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleSiege;
}

void HistoryFileGrammarParser::SiegeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSiege(this);
}

void HistoryFileGrammarParser::SiegeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSiege(this);
}

HistoryFileGrammarParser::SiegeContext* HistoryFileGrammarParser::siege() {
  SiegeContext *_localctx = _tracker.createInstance<SiegeContext>(_ctx, getState());
  enterRule(_localctx, 72, HistoryFileGrammarParser::RuleSiege);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(338);
    match(HistoryFileGrammarParser::SEAT);
    setState(339);
    match(HistoryFileGrammarParser::COLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PseudoContext ------------------------------------------------------------------

HistoryFileGrammarParser::PseudoContext::PseudoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> HistoryFileGrammarParser::PseudoContext::MOT() {
  return getTokens(HistoryFileGrammarParser::MOT);
}

tree::TerminalNode* HistoryFileGrammarParser::PseudoContext::MOT(size_t i) {
  return getToken(HistoryFileGrammarParser::MOT, i);
}

std::vector<tree::TerminalNode *> HistoryFileGrammarParser::PseudoContext::NUMBER() {
  return getTokens(HistoryFileGrammarParser::NUMBER);
}

tree::TerminalNode* HistoryFileGrammarParser::PseudoContext::NUMBER(size_t i) {
  return getToken(HistoryFileGrammarParser::NUMBER, i);
}


size_t HistoryFileGrammarParser::PseudoContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RulePseudo;
}

void HistoryFileGrammarParser::PseudoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPseudo(this);
}

void HistoryFileGrammarParser::PseudoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPseudo(this);
}

HistoryFileGrammarParser::PseudoContext* HistoryFileGrammarParser::pseudo() {
  PseudoContext *_localctx = _tracker.createInstance<PseudoContext>(_ctx, getState());
  enterRule(_localctx, 74, HistoryFileGrammarParser::RulePseudo);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(342); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(341);
      _la = _input->LA(1);
      if (!(_la == HistoryFileGrammarParser::NUMBER

      || _la == HistoryFileGrammarParser::MOT)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(344); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == HistoryFileGrammarParser::NUMBER

    || _la == HistoryFileGrammarParser::MOT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TapisContext ------------------------------------------------------------------

HistoryFileGrammarParser::TapisContext::TapisContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::TapisContext::LPAREN() {
  return getToken(HistoryFileGrammarParser::LPAREN, 0);
}

tree::TerminalNode* HistoryFileGrammarParser::TapisContext::NUMBER() {
  return getToken(HistoryFileGrammarParser::NUMBER, 0);
}

tree::TerminalNode* HistoryFileGrammarParser::TapisContext::RPAREN() {
  return getToken(HistoryFileGrammarParser::RPAREN, 0);
}


size_t HistoryFileGrammarParser::TapisContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleTapis;
}

void HistoryFileGrammarParser::TapisContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTapis(this);
}

void HistoryFileGrammarParser::TapisContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTapis(this);
}

HistoryFileGrammarParser::TapisContext* HistoryFileGrammarParser::tapis() {
  TapisContext *_localctx = _tracker.createInstance<TapisContext>(_ctx, getState());
  enterRule(_localctx, 76, HistoryFileGrammarParser::RuleTapis);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(346);
    match(HistoryFileGrammarParser::LPAREN);
    setState(347);
    match(HistoryFileGrammarParser::NUMBER);
    setState(348);
    match(HistoryFileGrammarParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnteblindSectionContext ------------------------------------------------------------------

HistoryFileGrammarParser::AnteblindSectionContext::AnteblindSectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::AnteblindHeaderContext* HistoryFileGrammarParser::AnteblindSectionContext::anteblindHeader() {
  return getRuleContext<HistoryFileGrammarParser::AnteblindHeaderContext>(0);
}

HistoryFileGrammarParser::SmallblindligneContext* HistoryFileGrammarParser::AnteblindSectionContext::smallblindligne() {
  return getRuleContext<HistoryFileGrammarParser::SmallblindligneContext>(0);
}

HistoryFileGrammarParser::BigblindligneContext* HistoryFileGrammarParser::AnteblindSectionContext::bigblindligne() {
  return getRuleContext<HistoryFileGrammarParser::BigblindligneContext>(0);
}

HistoryFileGrammarParser::CardligneContext* HistoryFileGrammarParser::AnteblindSectionContext::cardligne() {
  return getRuleContext<HistoryFileGrammarParser::CardligneContext>(0);
}

std::vector<HistoryFileGrammarParser::AnteligneContext *> HistoryFileGrammarParser::AnteblindSectionContext::anteligne() {
  return getRuleContexts<HistoryFileGrammarParser::AnteligneContext>();
}

HistoryFileGrammarParser::AnteligneContext* HistoryFileGrammarParser::AnteblindSectionContext::anteligne(size_t i) {
  return getRuleContext<HistoryFileGrammarParser::AnteligneContext>(i);
}


size_t HistoryFileGrammarParser::AnteblindSectionContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleAnteblindSection;
}

void HistoryFileGrammarParser::AnteblindSectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnteblindSection(this);
}

void HistoryFileGrammarParser::AnteblindSectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnteblindSection(this);
}

HistoryFileGrammarParser::AnteblindSectionContext* HistoryFileGrammarParser::anteblindSection() {
  AnteblindSectionContext *_localctx = _tracker.createInstance<AnteblindSectionContext>(_ctx, getState());
  enterRule(_localctx, 78, HistoryFileGrammarParser::RuleAnteblindSection);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(350);
    anteblindHeader();
    setState(352); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(351);
              anteligne();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(354); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(356);
    smallblindligne();
    setState(357);
    bigblindligne();
    setState(358);
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

HistoryFileGrammarParser::AnteblindHeaderContext::AnteblindHeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t HistoryFileGrammarParser::AnteblindHeaderContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleAnteblindHeader;
}

void HistoryFileGrammarParser::AnteblindHeaderContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnteblindHeader(this);
}

void HistoryFileGrammarParser::AnteblindHeaderContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnteblindHeader(this);
}

HistoryFileGrammarParser::AnteblindHeaderContext* HistoryFileGrammarParser::anteblindHeader() {
  AnteblindHeaderContext *_localctx = _tracker.createInstance<AnteblindHeaderContext>(_ctx, getState());
  enterRule(_localctx, 80, HistoryFileGrammarParser::RuleAnteblindHeader);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(360);
    match(HistoryFileGrammarParser::T__18);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnteligneContext ------------------------------------------------------------------

HistoryFileGrammarParser::AnteligneContext::AnteligneContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::PseudoContext* HistoryFileGrammarParser::AnteligneContext::pseudo() {
  return getRuleContext<HistoryFileGrammarParser::PseudoContext>(0);
}

HistoryFileGrammarParser::AnteSommeContext* HistoryFileGrammarParser::AnteligneContext::anteSomme() {
  return getRuleContext<HistoryFileGrammarParser::AnteSommeContext>(0);
}


size_t HistoryFileGrammarParser::AnteligneContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleAnteligne;
}

void HistoryFileGrammarParser::AnteligneContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnteligne(this);
}

void HistoryFileGrammarParser::AnteligneContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnteligne(this);
}

HistoryFileGrammarParser::AnteligneContext* HistoryFileGrammarParser::anteligne() {
  AnteligneContext *_localctx = _tracker.createInstance<AnteligneContext>(_ctx, getState());
  enterRule(_localctx, 82, HistoryFileGrammarParser::RuleAnteligne);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(362);
    pseudo();
    setState(363);
    match(HistoryFileGrammarParser::T__19);
    setState(364);
    anteSomme();
    setState(366);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryFileGrammarParser::T__20) {
      setState(365);
      match(HistoryFileGrammarParser::T__20);
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

HistoryFileGrammarParser::AnteSommeContext::AnteSommeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::AnteSommeContext::NUMBER() {
  return getToken(HistoryFileGrammarParser::NUMBER, 0);
}

tree::TerminalNode* HistoryFileGrammarParser::AnteSommeContext::DIGIT() {
  return getToken(HistoryFileGrammarParser::DIGIT, 0);
}


size_t HistoryFileGrammarParser::AnteSommeContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleAnteSomme;
}

void HistoryFileGrammarParser::AnteSommeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnteSomme(this);
}

void HistoryFileGrammarParser::AnteSommeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnteSomme(this);
}

HistoryFileGrammarParser::AnteSommeContext* HistoryFileGrammarParser::anteSomme() {
  AnteSommeContext *_localctx = _tracker.createInstance<AnteSommeContext>(_ctx, getState());
  enterRule(_localctx, 84, HistoryFileGrammarParser::RuleAnteSomme);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(368);
    _la = _input->LA(1);
    if (!(_la == HistoryFileGrammarParser::DIGIT

    || _la == HistoryFileGrammarParser::NUMBER)) {
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

HistoryFileGrammarParser::SmallblindligneContext::SmallblindligneContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::PseudoContext* HistoryFileGrammarParser::SmallblindligneContext::pseudo() {
  return getRuleContext<HistoryFileGrammarParser::PseudoContext>(0);
}

HistoryFileGrammarParser::SmallblindSommeContext* HistoryFileGrammarParser::SmallblindligneContext::smallblindSomme() {
  return getRuleContext<HistoryFileGrammarParser::SmallblindSommeContext>(0);
}


size_t HistoryFileGrammarParser::SmallblindligneContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleSmallblindligne;
}

void HistoryFileGrammarParser::SmallblindligneContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSmallblindligne(this);
}

void HistoryFileGrammarParser::SmallblindligneContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSmallblindligne(this);
}

HistoryFileGrammarParser::SmallblindligneContext* HistoryFileGrammarParser::smallblindligne() {
  SmallblindligneContext *_localctx = _tracker.createInstance<SmallblindligneContext>(_ctx, getState());
  enterRule(_localctx, 86, HistoryFileGrammarParser::RuleSmallblindligne);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(370);
    pseudo();
    setState(371);
    match(HistoryFileGrammarParser::T__21);
    setState(372);
    smallblindSomme();
    setState(374);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryFileGrammarParser::T__20) {
      setState(373);
      match(HistoryFileGrammarParser::T__20);
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

HistoryFileGrammarParser::SmallblindSommeContext::SmallblindSommeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::SmallblindSommeContext::NUMBER() {
  return getToken(HistoryFileGrammarParser::NUMBER, 0);
}


size_t HistoryFileGrammarParser::SmallblindSommeContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleSmallblindSomme;
}

void HistoryFileGrammarParser::SmallblindSommeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSmallblindSomme(this);
}

void HistoryFileGrammarParser::SmallblindSommeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSmallblindSomme(this);
}

HistoryFileGrammarParser::SmallblindSommeContext* HistoryFileGrammarParser::smallblindSomme() {
  SmallblindSommeContext *_localctx = _tracker.createInstance<SmallblindSommeContext>(_ctx, getState());
  enterRule(_localctx, 88, HistoryFileGrammarParser::RuleSmallblindSomme);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(376);
    match(HistoryFileGrammarParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BigblindligneContext ------------------------------------------------------------------

HistoryFileGrammarParser::BigblindligneContext::BigblindligneContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::PseudoContext* HistoryFileGrammarParser::BigblindligneContext::pseudo() {
  return getRuleContext<HistoryFileGrammarParser::PseudoContext>(0);
}

HistoryFileGrammarParser::BigblindSommeContext* HistoryFileGrammarParser::BigblindligneContext::bigblindSomme() {
  return getRuleContext<HistoryFileGrammarParser::BigblindSommeContext>(0);
}


size_t HistoryFileGrammarParser::BigblindligneContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleBigblindligne;
}

void HistoryFileGrammarParser::BigblindligneContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBigblindligne(this);
}

void HistoryFileGrammarParser::BigblindligneContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBigblindligne(this);
}

HistoryFileGrammarParser::BigblindligneContext* HistoryFileGrammarParser::bigblindligne() {
  BigblindligneContext *_localctx = _tracker.createInstance<BigblindligneContext>(_ctx, getState());
  enterRule(_localctx, 90, HistoryFileGrammarParser::RuleBigblindligne);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(378);
    pseudo();
    setState(379);
    match(HistoryFileGrammarParser::T__22);
    setState(380);
    bigblindSomme();
    setState(382);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryFileGrammarParser::T__20) {
      setState(381);
      match(HistoryFileGrammarParser::T__20);
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

HistoryFileGrammarParser::BigblindSommeContext::BigblindSommeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::BigblindSommeContext::NUMBER() {
  return getToken(HistoryFileGrammarParser::NUMBER, 0);
}


size_t HistoryFileGrammarParser::BigblindSommeContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleBigblindSomme;
}

void HistoryFileGrammarParser::BigblindSommeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBigblindSomme(this);
}

void HistoryFileGrammarParser::BigblindSommeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBigblindSomme(this);
}

HistoryFileGrammarParser::BigblindSommeContext* HistoryFileGrammarParser::bigblindSomme() {
  BigblindSommeContext *_localctx = _tracker.createInstance<BigblindSommeContext>(_ctx, getState());
  enterRule(_localctx, 92, HistoryFileGrammarParser::RuleBigblindSomme);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(384);
    match(HistoryFileGrammarParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CardligneContext ------------------------------------------------------------------

HistoryFileGrammarParser::CardligneContext::CardligneContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::PseudoContext* HistoryFileGrammarParser::CardligneContext::pseudo() {
  return getRuleContext<HistoryFileGrammarParser::PseudoContext>(0);
}

HistoryFileGrammarParser::CartePersoContext* HistoryFileGrammarParser::CardligneContext::cartePerso() {
  return getRuleContext<HistoryFileGrammarParser::CartePersoContext>(0);
}


size_t HistoryFileGrammarParser::CardligneContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleCardligne;
}

void HistoryFileGrammarParser::CardligneContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCardligne(this);
}

void HistoryFileGrammarParser::CardligneContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCardligne(this);
}

HistoryFileGrammarParser::CardligneContext* HistoryFileGrammarParser::cardligne() {
  CardligneContext *_localctx = _tracker.createInstance<CardligneContext>(_ctx, getState());
  enterRule(_localctx, 94, HistoryFileGrammarParser::RuleCardligne);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(386);
    match(HistoryFileGrammarParser::T__23);
    setState(387);
    pseudo();
    setState(388);
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

HistoryFileGrammarParser::CartePersoContext::CartePersoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::CartePersoContext::LCROCH() {
  return getToken(HistoryFileGrammarParser::LCROCH, 0);
}

std::vector<tree::TerminalNode *> HistoryFileGrammarParser::CartePersoContext::MOT() {
  return getTokens(HistoryFileGrammarParser::MOT);
}

tree::TerminalNode* HistoryFileGrammarParser::CartePersoContext::MOT(size_t i) {
  return getToken(HistoryFileGrammarParser::MOT, i);
}

tree::TerminalNode* HistoryFileGrammarParser::CartePersoContext::RCROCH() {
  return getToken(HistoryFileGrammarParser::RCROCH, 0);
}


size_t HistoryFileGrammarParser::CartePersoContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleCartePerso;
}

void HistoryFileGrammarParser::CartePersoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCartePerso(this);
}

void HistoryFileGrammarParser::CartePersoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCartePerso(this);
}

HistoryFileGrammarParser::CartePersoContext* HistoryFileGrammarParser::cartePerso() {
  CartePersoContext *_localctx = _tracker.createInstance<CartePersoContext>(_ctx, getState());
  enterRule(_localctx, 96, HistoryFileGrammarParser::RuleCartePerso);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(390);
    match(HistoryFileGrammarParser::LCROCH);
    setState(391);
    match(HistoryFileGrammarParser::MOT);
    setState(392);
    match(HistoryFileGrammarParser::MOT);
    setState(393);
    match(HistoryFileGrammarParser::RCROCH);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PreflopSectionContext ------------------------------------------------------------------

HistoryFileGrammarParser::PreflopSectionContext::PreflopSectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::PreflopHeaderContext* HistoryFileGrammarParser::PreflopSectionContext::preflopHeader() {
  return getRuleContext<HistoryFileGrammarParser::PreflopHeaderContext>(0);
}

HistoryFileGrammarParser::CombinaisonLigneContext* HistoryFileGrammarParser::PreflopSectionContext::combinaisonLigne() {
  return getRuleContext<HistoryFileGrammarParser::CombinaisonLigneContext>(0);
}

HistoryFileGrammarParser::WinContext* HistoryFileGrammarParser::PreflopSectionContext::win() {
  return getRuleContext<HistoryFileGrammarParser::WinContext>(0);
}

std::vector<HistoryFileGrammarParser::PlayActionContext *> HistoryFileGrammarParser::PreflopSectionContext::playAction() {
  return getRuleContexts<HistoryFileGrammarParser::PlayActionContext>();
}

HistoryFileGrammarParser::PlayActionContext* HistoryFileGrammarParser::PreflopSectionContext::playAction(size_t i) {
  return getRuleContext<HistoryFileGrammarParser::PlayActionContext>(i);
}


size_t HistoryFileGrammarParser::PreflopSectionContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RulePreflopSection;
}

void HistoryFileGrammarParser::PreflopSectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreflopSection(this);
}

void HistoryFileGrammarParser::PreflopSectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreflopSection(this);
}

HistoryFileGrammarParser::PreflopSectionContext* HistoryFileGrammarParser::preflopSection() {
  PreflopSectionContext *_localctx = _tracker.createInstance<PreflopSectionContext>(_ctx, getState());
  enterRule(_localctx, 98, HistoryFileGrammarParser::RulePreflopSection);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(395);
    preflopHeader();
    setState(401);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      setState(397); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(396);
                playAction();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(399); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    }
    setState(404);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      setState(403);
      combinaisonLigne();
      break;
    }

    }
    setState(407);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryFileGrammarParser::NUMBER

    || _la == HistoryFileGrammarParser::MOT) {
      setState(406);
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

HistoryFileGrammarParser::PreflopHeaderContext::PreflopHeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t HistoryFileGrammarParser::PreflopHeaderContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RulePreflopHeader;
}

void HistoryFileGrammarParser::PreflopHeaderContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreflopHeader(this);
}

void HistoryFileGrammarParser::PreflopHeaderContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreflopHeader(this);
}

HistoryFileGrammarParser::PreflopHeaderContext* HistoryFileGrammarParser::preflopHeader() {
  PreflopHeaderContext *_localctx = _tracker.createInstance<PreflopHeaderContext>(_ctx, getState());
  enterRule(_localctx, 100, HistoryFileGrammarParser::RulePreflopHeader);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(409);
    match(HistoryFileGrammarParser::T__24);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PlayActionContext ------------------------------------------------------------------

HistoryFileGrammarParser::PlayActionContext::PlayActionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::RaiseActionContext* HistoryFileGrammarParser::PlayActionContext::raiseAction() {
  return getRuleContext<HistoryFileGrammarParser::RaiseActionContext>(0);
}

HistoryFileGrammarParser::FoldActionContext* HistoryFileGrammarParser::PlayActionContext::foldAction() {
  return getRuleContext<HistoryFileGrammarParser::FoldActionContext>(0);
}

HistoryFileGrammarParser::BetActionContext* HistoryFileGrammarParser::PlayActionContext::betAction() {
  return getRuleContext<HistoryFileGrammarParser::BetActionContext>(0);
}

HistoryFileGrammarParser::CheckActionContext* HistoryFileGrammarParser::PlayActionContext::checkAction() {
  return getRuleContext<HistoryFileGrammarParser::CheckActionContext>(0);
}

HistoryFileGrammarParser::CallActionContext* HistoryFileGrammarParser::PlayActionContext::callAction() {
  return getRuleContext<HistoryFileGrammarParser::CallActionContext>(0);
}


size_t HistoryFileGrammarParser::PlayActionContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RulePlayAction;
}

void HistoryFileGrammarParser::PlayActionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPlayAction(this);
}

void HistoryFileGrammarParser::PlayActionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPlayAction(this);
}

HistoryFileGrammarParser::PlayActionContext* HistoryFileGrammarParser::playAction() {
  PlayActionContext *_localctx = _tracker.createInstance<PlayActionContext>(_ctx, getState());
  enterRule(_localctx, 102, HistoryFileGrammarParser::RulePlayAction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(416);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      setState(411);
      raiseAction();
      break;
    }

    case 2: {
      setState(412);
      foldAction();
      break;
    }

    case 3: {
      setState(413);
      betAction();
      break;
    }

    case 4: {
      setState(414);
      checkAction();
      break;
    }

    case 5: {
      setState(415);
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

HistoryFileGrammarParser::RaiseActionContext::RaiseActionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::PseudoContext* HistoryFileGrammarParser::RaiseActionContext::pseudo() {
  return getRuleContext<HistoryFileGrammarParser::PseudoContext>(0);
}

HistoryFileGrammarParser::InitialRaiseValueContext* HistoryFileGrammarParser::RaiseActionContext::initialRaiseValue() {
  return getRuleContext<HistoryFileGrammarParser::InitialRaiseValueContext>(0);
}

HistoryFileGrammarParser::FinalraiseValueContext* HistoryFileGrammarParser::RaiseActionContext::finalraiseValue() {
  return getRuleContext<HistoryFileGrammarParser::FinalraiseValueContext>(0);
}


size_t HistoryFileGrammarParser::RaiseActionContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleRaiseAction;
}

void HistoryFileGrammarParser::RaiseActionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRaiseAction(this);
}

void HistoryFileGrammarParser::RaiseActionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRaiseAction(this);
}

HistoryFileGrammarParser::RaiseActionContext* HistoryFileGrammarParser::raiseAction() {
  RaiseActionContext *_localctx = _tracker.createInstance<RaiseActionContext>(_ctx, getState());
  enterRule(_localctx, 104, HistoryFileGrammarParser::RuleRaiseAction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(418);
    pseudo();
    setState(419);
    match(HistoryFileGrammarParser::T__25);
    setState(420);
    initialRaiseValue();
    setState(421);
    match(HistoryFileGrammarParser::T__26);
    setState(422);
    finalraiseValue();
    setState(424);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryFileGrammarParser::T__20) {
      setState(423);
      match(HistoryFileGrammarParser::T__20);
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

HistoryFileGrammarParser::FoldActionContext::FoldActionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::PseudoContext* HistoryFileGrammarParser::FoldActionContext::pseudo() {
  return getRuleContext<HistoryFileGrammarParser::PseudoContext>(0);
}


size_t HistoryFileGrammarParser::FoldActionContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleFoldAction;
}

void HistoryFileGrammarParser::FoldActionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFoldAction(this);
}

void HistoryFileGrammarParser::FoldActionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFoldAction(this);
}

HistoryFileGrammarParser::FoldActionContext* HistoryFileGrammarParser::foldAction() {
  FoldActionContext *_localctx = _tracker.createInstance<FoldActionContext>(_ctx, getState());
  enterRule(_localctx, 106, HistoryFileGrammarParser::RuleFoldAction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(426);
    pseudo();
    setState(427);
    match(HistoryFileGrammarParser::T__27);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BetActionContext ------------------------------------------------------------------

HistoryFileGrammarParser::BetActionContext::BetActionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::PseudoContext* HistoryFileGrammarParser::BetActionContext::pseudo() {
  return getRuleContext<HistoryFileGrammarParser::PseudoContext>(0);
}

HistoryFileGrammarParser::BetValueContext* HistoryFileGrammarParser::BetActionContext::betValue() {
  return getRuleContext<HistoryFileGrammarParser::BetValueContext>(0);
}


size_t HistoryFileGrammarParser::BetActionContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleBetAction;
}

void HistoryFileGrammarParser::BetActionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBetAction(this);
}

void HistoryFileGrammarParser::BetActionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBetAction(this);
}

HistoryFileGrammarParser::BetActionContext* HistoryFileGrammarParser::betAction() {
  BetActionContext *_localctx = _tracker.createInstance<BetActionContext>(_ctx, getState());
  enterRule(_localctx, 108, HistoryFileGrammarParser::RuleBetAction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(429);
    pseudo();
    setState(430);
    match(HistoryFileGrammarParser::T__28);
    setState(431);
    betValue();
    setState(433);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryFileGrammarParser::T__20) {
      setState(432);
      match(HistoryFileGrammarParser::T__20);
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

HistoryFileGrammarParser::CheckActionContext::CheckActionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::PseudoContext* HistoryFileGrammarParser::CheckActionContext::pseudo() {
  return getRuleContext<HistoryFileGrammarParser::PseudoContext>(0);
}


size_t HistoryFileGrammarParser::CheckActionContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleCheckAction;
}

void HistoryFileGrammarParser::CheckActionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCheckAction(this);
}

void HistoryFileGrammarParser::CheckActionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCheckAction(this);
}

HistoryFileGrammarParser::CheckActionContext* HistoryFileGrammarParser::checkAction() {
  CheckActionContext *_localctx = _tracker.createInstance<CheckActionContext>(_ctx, getState());
  enterRule(_localctx, 110, HistoryFileGrammarParser::RuleCheckAction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(435);
    pseudo();
    setState(436);
    match(HistoryFileGrammarParser::T__29);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallActionContext ------------------------------------------------------------------

HistoryFileGrammarParser::CallActionContext::CallActionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::PseudoContext* HistoryFileGrammarParser::CallActionContext::pseudo() {
  return getRuleContext<HistoryFileGrammarParser::PseudoContext>(0);
}

HistoryFileGrammarParser::CallValueContext* HistoryFileGrammarParser::CallActionContext::callValue() {
  return getRuleContext<HistoryFileGrammarParser::CallValueContext>(0);
}


size_t HistoryFileGrammarParser::CallActionContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleCallAction;
}

void HistoryFileGrammarParser::CallActionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCallAction(this);
}

void HistoryFileGrammarParser::CallActionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCallAction(this);
}

HistoryFileGrammarParser::CallActionContext* HistoryFileGrammarParser::callAction() {
  CallActionContext *_localctx = _tracker.createInstance<CallActionContext>(_ctx, getState());
  enterRule(_localctx, 112, HistoryFileGrammarParser::RuleCallAction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(438);
    pseudo();
    setState(439);
    match(HistoryFileGrammarParser::T__30);
    setState(440);
    callValue();
    setState(442);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryFileGrammarParser::T__20) {
      setState(441);
      match(HistoryFileGrammarParser::T__20);
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

HistoryFileGrammarParser::InitialRaiseValueContext::InitialRaiseValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::InitialRaiseValueContext::NUMBER() {
  return getToken(HistoryFileGrammarParser::NUMBER, 0);
}


size_t HistoryFileGrammarParser::InitialRaiseValueContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleInitialRaiseValue;
}

void HistoryFileGrammarParser::InitialRaiseValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitialRaiseValue(this);
}

void HistoryFileGrammarParser::InitialRaiseValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitialRaiseValue(this);
}

HistoryFileGrammarParser::InitialRaiseValueContext* HistoryFileGrammarParser::initialRaiseValue() {
  InitialRaiseValueContext *_localctx = _tracker.createInstance<InitialRaiseValueContext>(_ctx, getState());
  enterRule(_localctx, 114, HistoryFileGrammarParser::RuleInitialRaiseValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(444);
    match(HistoryFileGrammarParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FinalraiseValueContext ------------------------------------------------------------------

HistoryFileGrammarParser::FinalraiseValueContext::FinalraiseValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::FinalraiseValueContext::NUMBER() {
  return getToken(HistoryFileGrammarParser::NUMBER, 0);
}


size_t HistoryFileGrammarParser::FinalraiseValueContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleFinalraiseValue;
}

void HistoryFileGrammarParser::FinalraiseValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFinalraiseValue(this);
}

void HistoryFileGrammarParser::FinalraiseValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFinalraiseValue(this);
}

HistoryFileGrammarParser::FinalraiseValueContext* HistoryFileGrammarParser::finalraiseValue() {
  FinalraiseValueContext *_localctx = _tracker.createInstance<FinalraiseValueContext>(_ctx, getState());
  enterRule(_localctx, 116, HistoryFileGrammarParser::RuleFinalraiseValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(446);
    match(HistoryFileGrammarParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BetValueContext ------------------------------------------------------------------

HistoryFileGrammarParser::BetValueContext::BetValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::BetValueContext::NUMBER() {
  return getToken(HistoryFileGrammarParser::NUMBER, 0);
}


size_t HistoryFileGrammarParser::BetValueContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleBetValue;
}

void HistoryFileGrammarParser::BetValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBetValue(this);
}

void HistoryFileGrammarParser::BetValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBetValue(this);
}

HistoryFileGrammarParser::BetValueContext* HistoryFileGrammarParser::betValue() {
  BetValueContext *_localctx = _tracker.createInstance<BetValueContext>(_ctx, getState());
  enterRule(_localctx, 118, HistoryFileGrammarParser::RuleBetValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(448);
    match(HistoryFileGrammarParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallValueContext ------------------------------------------------------------------

HistoryFileGrammarParser::CallValueContext::CallValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::CallValueContext::NUMBER() {
  return getToken(HistoryFileGrammarParser::NUMBER, 0);
}


size_t HistoryFileGrammarParser::CallValueContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleCallValue;
}

void HistoryFileGrammarParser::CallValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCallValue(this);
}

void HistoryFileGrammarParser::CallValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCallValue(this);
}

HistoryFileGrammarParser::CallValueContext* HistoryFileGrammarParser::callValue() {
  CallValueContext *_localctx = _tracker.createInstance<CallValueContext>(_ctx, getState());
  enterRule(_localctx, 120, HistoryFileGrammarParser::RuleCallValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(450);
    match(HistoryFileGrammarParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WinContext ------------------------------------------------------------------

HistoryFileGrammarParser::WinContext::WinContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::PseudoContext* HistoryFileGrammarParser::WinContext::pseudo() {
  return getRuleContext<HistoryFileGrammarParser::PseudoContext>(0);
}

tree::TerminalNode* HistoryFileGrammarParser::WinContext::NUMBER() {
  return getToken(HistoryFileGrammarParser::NUMBER, 0);
}


size_t HistoryFileGrammarParser::WinContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleWin;
}

void HistoryFileGrammarParser::WinContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWin(this);
}

void HistoryFileGrammarParser::WinContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWin(this);
}

HistoryFileGrammarParser::WinContext* HistoryFileGrammarParser::win() {
  WinContext *_localctx = _tracker.createInstance<WinContext>(_ctx, getState());
  enterRule(_localctx, 122, HistoryFileGrammarParser::RuleWin);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(452);
    pseudo();
    setState(453);
    match(HistoryFileGrammarParser::T__31);
    setState(454);
    match(HistoryFileGrammarParser::NUMBER);
    setState(455);
    match(HistoryFileGrammarParser::T__32);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FlopSectionContext ------------------------------------------------------------------

HistoryFileGrammarParser::FlopSectionContext::FlopSectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::FlopHeaderContext* HistoryFileGrammarParser::FlopSectionContext::flopHeader() {
  return getRuleContext<HistoryFileGrammarParser::FlopHeaderContext>(0);
}

HistoryFileGrammarParser::CombinaisonLigneContext* HistoryFileGrammarParser::FlopSectionContext::combinaisonLigne() {
  return getRuleContext<HistoryFileGrammarParser::CombinaisonLigneContext>(0);
}

HistoryFileGrammarParser::WinContext* HistoryFileGrammarParser::FlopSectionContext::win() {
  return getRuleContext<HistoryFileGrammarParser::WinContext>(0);
}

std::vector<HistoryFileGrammarParser::PlayActionContext *> HistoryFileGrammarParser::FlopSectionContext::playAction() {
  return getRuleContexts<HistoryFileGrammarParser::PlayActionContext>();
}

HistoryFileGrammarParser::PlayActionContext* HistoryFileGrammarParser::FlopSectionContext::playAction(size_t i) {
  return getRuleContext<HistoryFileGrammarParser::PlayActionContext>(i);
}


size_t HistoryFileGrammarParser::FlopSectionContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleFlopSection;
}

void HistoryFileGrammarParser::FlopSectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFlopSection(this);
}

void HistoryFileGrammarParser::FlopSectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFlopSection(this);
}

HistoryFileGrammarParser::FlopSectionContext* HistoryFileGrammarParser::flopSection() {
  FlopSectionContext *_localctx = _tracker.createInstance<FlopSectionContext>(_ctx, getState());
  enterRule(_localctx, 124, HistoryFileGrammarParser::RuleFlopSection);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(457);
    flopHeader();
    setState(463);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      setState(459); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(458);
                playAction();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(461); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    }
    setState(466);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      setState(465);
      combinaisonLigne();
      break;
    }

    }
    setState(469);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryFileGrammarParser::NUMBER

    || _la == HistoryFileGrammarParser::MOT) {
      setState(468);
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

HistoryFileGrammarParser::FlopHeaderContext::FlopHeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::FlopcardsContext* HistoryFileGrammarParser::FlopHeaderContext::flopcards() {
  return getRuleContext<HistoryFileGrammarParser::FlopcardsContext>(0);
}


size_t HistoryFileGrammarParser::FlopHeaderContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleFlopHeader;
}

void HistoryFileGrammarParser::FlopHeaderContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFlopHeader(this);
}

void HistoryFileGrammarParser::FlopHeaderContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFlopHeader(this);
}

HistoryFileGrammarParser::FlopHeaderContext* HistoryFileGrammarParser::flopHeader() {
  FlopHeaderContext *_localctx = _tracker.createInstance<FlopHeaderContext>(_ctx, getState());
  enterRule(_localctx, 126, HistoryFileGrammarParser::RuleFlopHeader);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(471);
    match(HistoryFileGrammarParser::T__33);
    setState(472);
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

HistoryFileGrammarParser::FlopcardsContext::FlopcardsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::FlopcardsContext::LCROCH() {
  return getToken(HistoryFileGrammarParser::LCROCH, 0);
}

std::vector<tree::TerminalNode *> HistoryFileGrammarParser::FlopcardsContext::MOT() {
  return getTokens(HistoryFileGrammarParser::MOT);
}

tree::TerminalNode* HistoryFileGrammarParser::FlopcardsContext::MOT(size_t i) {
  return getToken(HistoryFileGrammarParser::MOT, i);
}

tree::TerminalNode* HistoryFileGrammarParser::FlopcardsContext::RCROCH() {
  return getToken(HistoryFileGrammarParser::RCROCH, 0);
}


size_t HistoryFileGrammarParser::FlopcardsContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleFlopcards;
}

void HistoryFileGrammarParser::FlopcardsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFlopcards(this);
}

void HistoryFileGrammarParser::FlopcardsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFlopcards(this);
}

HistoryFileGrammarParser::FlopcardsContext* HistoryFileGrammarParser::flopcards() {
  FlopcardsContext *_localctx = _tracker.createInstance<FlopcardsContext>(_ctx, getState());
  enterRule(_localctx, 128, HistoryFileGrammarParser::RuleFlopcards);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(474);
    match(HistoryFileGrammarParser::LCROCH);
    setState(475);
    match(HistoryFileGrammarParser::MOT);
    setState(476);
    match(HistoryFileGrammarParser::MOT);
    setState(477);
    match(HistoryFileGrammarParser::MOT);
    setState(478);
    match(HistoryFileGrammarParser::RCROCH);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TurnSectionContext ------------------------------------------------------------------

HistoryFileGrammarParser::TurnSectionContext::TurnSectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::TurnHeaderContext* HistoryFileGrammarParser::TurnSectionContext::turnHeader() {
  return getRuleContext<HistoryFileGrammarParser::TurnHeaderContext>(0);
}

HistoryFileGrammarParser::CombinaisonLigneContext* HistoryFileGrammarParser::TurnSectionContext::combinaisonLigne() {
  return getRuleContext<HistoryFileGrammarParser::CombinaisonLigneContext>(0);
}

HistoryFileGrammarParser::WinContext* HistoryFileGrammarParser::TurnSectionContext::win() {
  return getRuleContext<HistoryFileGrammarParser::WinContext>(0);
}

std::vector<HistoryFileGrammarParser::PlayActionContext *> HistoryFileGrammarParser::TurnSectionContext::playAction() {
  return getRuleContexts<HistoryFileGrammarParser::PlayActionContext>();
}

HistoryFileGrammarParser::PlayActionContext* HistoryFileGrammarParser::TurnSectionContext::playAction(size_t i) {
  return getRuleContext<HistoryFileGrammarParser::PlayActionContext>(i);
}


size_t HistoryFileGrammarParser::TurnSectionContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleTurnSection;
}

void HistoryFileGrammarParser::TurnSectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTurnSection(this);
}

void HistoryFileGrammarParser::TurnSectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTurnSection(this);
}

HistoryFileGrammarParser::TurnSectionContext* HistoryFileGrammarParser::turnSection() {
  TurnSectionContext *_localctx = _tracker.createInstance<TurnSectionContext>(_ctx, getState());
  enterRule(_localctx, 130, HistoryFileGrammarParser::RuleTurnSection);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(480);
    turnHeader();
    setState(486);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      setState(482); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(481);
                playAction();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(484); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    }
    setState(489);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      setState(488);
      combinaisonLigne();
      break;
    }

    }
    setState(492);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryFileGrammarParser::NUMBER

    || _la == HistoryFileGrammarParser::MOT) {
      setState(491);
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

HistoryFileGrammarParser::TurnHeaderContext::TurnHeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::TurnCardsContext* HistoryFileGrammarParser::TurnHeaderContext::turnCards() {
  return getRuleContext<HistoryFileGrammarParser::TurnCardsContext>(0);
}


size_t HistoryFileGrammarParser::TurnHeaderContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleTurnHeader;
}

void HistoryFileGrammarParser::TurnHeaderContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTurnHeader(this);
}

void HistoryFileGrammarParser::TurnHeaderContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTurnHeader(this);
}

HistoryFileGrammarParser::TurnHeaderContext* HistoryFileGrammarParser::turnHeader() {
  TurnHeaderContext *_localctx = _tracker.createInstance<TurnHeaderContext>(_ctx, getState());
  enterRule(_localctx, 132, HistoryFileGrammarParser::RuleTurnHeader);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(494);
    match(HistoryFileGrammarParser::T__34);
    setState(495);
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

HistoryFileGrammarParser::TurnCardsContext::TurnCardsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> HistoryFileGrammarParser::TurnCardsContext::LCROCH() {
  return getTokens(HistoryFileGrammarParser::LCROCH);
}

tree::TerminalNode* HistoryFileGrammarParser::TurnCardsContext::LCROCH(size_t i) {
  return getToken(HistoryFileGrammarParser::LCROCH, i);
}

std::vector<tree::TerminalNode *> HistoryFileGrammarParser::TurnCardsContext::MOT() {
  return getTokens(HistoryFileGrammarParser::MOT);
}

tree::TerminalNode* HistoryFileGrammarParser::TurnCardsContext::MOT(size_t i) {
  return getToken(HistoryFileGrammarParser::MOT, i);
}

std::vector<tree::TerminalNode *> HistoryFileGrammarParser::TurnCardsContext::RCROCH() {
  return getTokens(HistoryFileGrammarParser::RCROCH);
}

tree::TerminalNode* HistoryFileGrammarParser::TurnCardsContext::RCROCH(size_t i) {
  return getToken(HistoryFileGrammarParser::RCROCH, i);
}


size_t HistoryFileGrammarParser::TurnCardsContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleTurnCards;
}

void HistoryFileGrammarParser::TurnCardsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTurnCards(this);
}

void HistoryFileGrammarParser::TurnCardsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTurnCards(this);
}

HistoryFileGrammarParser::TurnCardsContext* HistoryFileGrammarParser::turnCards() {
  TurnCardsContext *_localctx = _tracker.createInstance<TurnCardsContext>(_ctx, getState());
  enterRule(_localctx, 134, HistoryFileGrammarParser::RuleTurnCards);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(497);
    match(HistoryFileGrammarParser::LCROCH);
    setState(498);
    match(HistoryFileGrammarParser::MOT);
    setState(499);
    match(HistoryFileGrammarParser::MOT);
    setState(500);
    match(HistoryFileGrammarParser::MOT);
    setState(501);
    match(HistoryFileGrammarParser::RCROCH);
    setState(502);
    match(HistoryFileGrammarParser::LCROCH);
    setState(503);
    match(HistoryFileGrammarParser::MOT);
    setState(504);
    match(HistoryFileGrammarParser::RCROCH);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RiverSectionContext ------------------------------------------------------------------

HistoryFileGrammarParser::RiverSectionContext::RiverSectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::RiverHeaderContext* HistoryFileGrammarParser::RiverSectionContext::riverHeader() {
  return getRuleContext<HistoryFileGrammarParser::RiverHeaderContext>(0);
}

HistoryFileGrammarParser::CombinaisonLigneContext* HistoryFileGrammarParser::RiverSectionContext::combinaisonLigne() {
  return getRuleContext<HistoryFileGrammarParser::CombinaisonLigneContext>(0);
}

HistoryFileGrammarParser::WinContext* HistoryFileGrammarParser::RiverSectionContext::win() {
  return getRuleContext<HistoryFileGrammarParser::WinContext>(0);
}

std::vector<HistoryFileGrammarParser::PlayActionContext *> HistoryFileGrammarParser::RiverSectionContext::playAction() {
  return getRuleContexts<HistoryFileGrammarParser::PlayActionContext>();
}

HistoryFileGrammarParser::PlayActionContext* HistoryFileGrammarParser::RiverSectionContext::playAction(size_t i) {
  return getRuleContext<HistoryFileGrammarParser::PlayActionContext>(i);
}


size_t HistoryFileGrammarParser::RiverSectionContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleRiverSection;
}

void HistoryFileGrammarParser::RiverSectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRiverSection(this);
}

void HistoryFileGrammarParser::RiverSectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRiverSection(this);
}

HistoryFileGrammarParser::RiverSectionContext* HistoryFileGrammarParser::riverSection() {
  RiverSectionContext *_localctx = _tracker.createInstance<RiverSectionContext>(_ctx, getState());
  enterRule(_localctx, 136, HistoryFileGrammarParser::RuleRiverSection);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(506);
    riverHeader();
    setState(512);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      setState(508); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(507);
                playAction();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(510); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    }
    setState(515);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      setState(514);
      combinaisonLigne();
      break;
    }

    }
    setState(518);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryFileGrammarParser::NUMBER

    || _la == HistoryFileGrammarParser::MOT) {
      setState(517);
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

HistoryFileGrammarParser::RiverHeaderContext::RiverHeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::RiverCardsContext* HistoryFileGrammarParser::RiverHeaderContext::riverCards() {
  return getRuleContext<HistoryFileGrammarParser::RiverCardsContext>(0);
}


size_t HistoryFileGrammarParser::RiverHeaderContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleRiverHeader;
}

void HistoryFileGrammarParser::RiverHeaderContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRiverHeader(this);
}

void HistoryFileGrammarParser::RiverHeaderContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRiverHeader(this);
}

HistoryFileGrammarParser::RiverHeaderContext* HistoryFileGrammarParser::riverHeader() {
  RiverHeaderContext *_localctx = _tracker.createInstance<RiverHeaderContext>(_ctx, getState());
  enterRule(_localctx, 138, HistoryFileGrammarParser::RuleRiverHeader);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(520);
    match(HistoryFileGrammarParser::T__35);
    setState(521);
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

HistoryFileGrammarParser::RiverCardsContext::RiverCardsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> HistoryFileGrammarParser::RiverCardsContext::LCROCH() {
  return getTokens(HistoryFileGrammarParser::LCROCH);
}

tree::TerminalNode* HistoryFileGrammarParser::RiverCardsContext::LCROCH(size_t i) {
  return getToken(HistoryFileGrammarParser::LCROCH, i);
}

std::vector<tree::TerminalNode *> HistoryFileGrammarParser::RiverCardsContext::MOT() {
  return getTokens(HistoryFileGrammarParser::MOT);
}

tree::TerminalNode* HistoryFileGrammarParser::RiverCardsContext::MOT(size_t i) {
  return getToken(HistoryFileGrammarParser::MOT, i);
}

std::vector<tree::TerminalNode *> HistoryFileGrammarParser::RiverCardsContext::RCROCH() {
  return getTokens(HistoryFileGrammarParser::RCROCH);
}

tree::TerminalNode* HistoryFileGrammarParser::RiverCardsContext::RCROCH(size_t i) {
  return getToken(HistoryFileGrammarParser::RCROCH, i);
}


size_t HistoryFileGrammarParser::RiverCardsContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleRiverCards;
}

void HistoryFileGrammarParser::RiverCardsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRiverCards(this);
}

void HistoryFileGrammarParser::RiverCardsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRiverCards(this);
}

HistoryFileGrammarParser::RiverCardsContext* HistoryFileGrammarParser::riverCards() {
  RiverCardsContext *_localctx = _tracker.createInstance<RiverCardsContext>(_ctx, getState());
  enterRule(_localctx, 140, HistoryFileGrammarParser::RuleRiverCards);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(523);
    match(HistoryFileGrammarParser::LCROCH);
    setState(524);
    match(HistoryFileGrammarParser::MOT);
    setState(525);
    match(HistoryFileGrammarParser::MOT);
    setState(526);
    match(HistoryFileGrammarParser::MOT);
    setState(527);
    match(HistoryFileGrammarParser::MOT);
    setState(528);
    match(HistoryFileGrammarParser::RCROCH);
    setState(529);
    match(HistoryFileGrammarParser::LCROCH);
    setState(530);
    match(HistoryFileGrammarParser::MOT);
    setState(531);
    match(HistoryFileGrammarParser::RCROCH);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShowdownSectionContext ------------------------------------------------------------------

HistoryFileGrammarParser::ShowdownSectionContext::ShowdownSectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::ShowdownHeaderContext* HistoryFileGrammarParser::ShowdownSectionContext::showdownHeader() {
  return getRuleContext<HistoryFileGrammarParser::ShowdownHeaderContext>(0);
}

std::vector<HistoryFileGrammarParser::CombinaisonLigneContext *> HistoryFileGrammarParser::ShowdownSectionContext::combinaisonLigne() {
  return getRuleContexts<HistoryFileGrammarParser::CombinaisonLigneContext>();
}

HistoryFileGrammarParser::CombinaisonLigneContext* HistoryFileGrammarParser::ShowdownSectionContext::combinaisonLigne(size_t i) {
  return getRuleContext<HistoryFileGrammarParser::CombinaisonLigneContext>(i);
}

std::vector<HistoryFileGrammarParser::ResultLigneContext *> HistoryFileGrammarParser::ShowdownSectionContext::resultLigne() {
  return getRuleContexts<HistoryFileGrammarParser::ResultLigneContext>();
}

HistoryFileGrammarParser::ResultLigneContext* HistoryFileGrammarParser::ShowdownSectionContext::resultLigne(size_t i) {
  return getRuleContext<HistoryFileGrammarParser::ResultLigneContext>(i);
}


size_t HistoryFileGrammarParser::ShowdownSectionContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleShowdownSection;
}

void HistoryFileGrammarParser::ShowdownSectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShowdownSection(this);
}

void HistoryFileGrammarParser::ShowdownSectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShowdownSection(this);
}

HistoryFileGrammarParser::ShowdownSectionContext* HistoryFileGrammarParser::showdownSection() {
  ShowdownSectionContext *_localctx = _tracker.createInstance<ShowdownSectionContext>(_ctx, getState());
  enterRule(_localctx, 142, HistoryFileGrammarParser::RuleShowdownSection);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(533);
    showdownHeader();
    setState(535); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(534);
              combinaisonLigne();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(537); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(540); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(539);
      resultLigne();
      setState(542); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == HistoryFileGrammarParser::NUMBER

    || _la == HistoryFileGrammarParser::MOT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShowdownHeaderContext ------------------------------------------------------------------

HistoryFileGrammarParser::ShowdownHeaderContext::ShowdownHeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t HistoryFileGrammarParser::ShowdownHeaderContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleShowdownHeader;
}

void HistoryFileGrammarParser::ShowdownHeaderContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShowdownHeader(this);
}

void HistoryFileGrammarParser::ShowdownHeaderContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShowdownHeader(this);
}

HistoryFileGrammarParser::ShowdownHeaderContext* HistoryFileGrammarParser::showdownHeader() {
  ShowdownHeaderContext *_localctx = _tracker.createInstance<ShowdownHeaderContext>(_ctx, getState());
  enterRule(_localctx, 144, HistoryFileGrammarParser::RuleShowdownHeader);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(544);
    match(HistoryFileGrammarParser::T__36);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CombinaisonLigneContext ------------------------------------------------------------------

HistoryFileGrammarParser::CombinaisonLigneContext::CombinaisonLigneContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::PseudoContext* HistoryFileGrammarParser::CombinaisonLigneContext::pseudo() {
  return getRuleContext<HistoryFileGrammarParser::PseudoContext>(0);
}

HistoryFileGrammarParser::CartePersoContext* HistoryFileGrammarParser::CombinaisonLigneContext::cartePerso() {
  return getRuleContext<HistoryFileGrammarParser::CartePersoContext>(0);
}

HistoryFileGrammarParser::CombinaisonContext* HistoryFileGrammarParser::CombinaisonLigneContext::combinaison() {
  return getRuleContext<HistoryFileGrammarParser::CombinaisonContext>(0);
}


size_t HistoryFileGrammarParser::CombinaisonLigneContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleCombinaisonLigne;
}

void HistoryFileGrammarParser::CombinaisonLigneContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCombinaisonLigne(this);
}

void HistoryFileGrammarParser::CombinaisonLigneContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCombinaisonLigne(this);
}

HistoryFileGrammarParser::CombinaisonLigneContext* HistoryFileGrammarParser::combinaisonLigne() {
  CombinaisonLigneContext *_localctx = _tracker.createInstance<CombinaisonLigneContext>(_ctx, getState());
  enterRule(_localctx, 146, HistoryFileGrammarParser::RuleCombinaisonLigne);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(546);
    pseudo();
    setState(547);
    match(HistoryFileGrammarParser::T__37);
    setState(548);
    cartePerso();
    setState(549);
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

HistoryFileGrammarParser::CombinaisonContext::CombinaisonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::CombinaisonContext::LPAREN() {
  return getToken(HistoryFileGrammarParser::LPAREN, 0);
}

tree::TerminalNode* HistoryFileGrammarParser::CombinaisonContext::RPAREN() {
  return getToken(HistoryFileGrammarParser::RPAREN, 0);
}

tree::TerminalNode* HistoryFileGrammarParser::CombinaisonContext::COLON() {
  return getToken(HistoryFileGrammarParser::COLON, 0);
}

std::vector<tree::TerminalNode *> HistoryFileGrammarParser::CombinaisonContext::MOT() {
  return getTokens(HistoryFileGrammarParser::MOT);
}

tree::TerminalNode* HistoryFileGrammarParser::CombinaisonContext::MOT(size_t i) {
  return getToken(HistoryFileGrammarParser::MOT, i);
}

std::vector<tree::TerminalNode *> HistoryFileGrammarParser::CombinaisonContext::DIGIT() {
  return getTokens(HistoryFileGrammarParser::DIGIT);
}

tree::TerminalNode* HistoryFileGrammarParser::CombinaisonContext::DIGIT(size_t i) {
  return getToken(HistoryFileGrammarParser::DIGIT, i);
}


size_t HistoryFileGrammarParser::CombinaisonContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleCombinaison;
}

void HistoryFileGrammarParser::CombinaisonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCombinaison(this);
}

void HistoryFileGrammarParser::CombinaisonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCombinaison(this);
}

HistoryFileGrammarParser::CombinaisonContext* HistoryFileGrammarParser::combinaison() {
  CombinaisonContext *_localctx = _tracker.createInstance<CombinaisonContext>(_ctx, getState());
  enterRule(_localctx, 148, HistoryFileGrammarParser::RuleCombinaison);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(551);
    match(HistoryFileGrammarParser::LPAREN);
    setState(553); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(552);
      _la = _input->LA(1);
      if (!(_la == HistoryFileGrammarParser::DIGIT

      || _la == HistoryFileGrammarParser::MOT)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(555); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == HistoryFileGrammarParser::DIGIT

    || _la == HistoryFileGrammarParser::MOT);
    setState(563);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryFileGrammarParser::COLON) {
      setState(557);
      match(HistoryFileGrammarParser::COLON);
      setState(559); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(558);
        _la = _input->LA(1);
        if (!(_la == HistoryFileGrammarParser::DIGIT

        || _la == HistoryFileGrammarParser::MOT)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(561); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == HistoryFileGrammarParser::DIGIT

      || _la == HistoryFileGrammarParser::MOT);
    }
    setState(565);
    match(HistoryFileGrammarParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResultLigneContext ------------------------------------------------------------------

HistoryFileGrammarParser::ResultLigneContext::ResultLigneContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::PseudoContext* HistoryFileGrammarParser::ResultLigneContext::pseudo() {
  return getRuleContext<HistoryFileGrammarParser::PseudoContext>(0);
}

HistoryFileGrammarParser::ShowdownValueContext* HistoryFileGrammarParser::ResultLigneContext::showdownValue() {
  return getRuleContext<HistoryFileGrammarParser::ShowdownValueContext>(0);
}

HistoryFileGrammarParser::WhereCollectedContext* HistoryFileGrammarParser::ResultLigneContext::whereCollected() {
  return getRuleContext<HistoryFileGrammarParser::WhereCollectedContext>(0);
}


size_t HistoryFileGrammarParser::ResultLigneContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleResultLigne;
}

void HistoryFileGrammarParser::ResultLigneContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResultLigne(this);
}

void HistoryFileGrammarParser::ResultLigneContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResultLigne(this);
}

HistoryFileGrammarParser::ResultLigneContext* HistoryFileGrammarParser::resultLigne() {
  ResultLigneContext *_localctx = _tracker.createInstance<ResultLigneContext>(_ctx, getState());
  enterRule(_localctx, 150, HistoryFileGrammarParser::RuleResultLigne);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(567);
    pseudo();
    setState(568);
    match(HistoryFileGrammarParser::T__31);
    setState(569);
    showdownValue();
    setState(570);
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

HistoryFileGrammarParser::WhereCollectedContext::WhereCollectedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::WhereCollectedContext::NUMBER() {
  return getToken(HistoryFileGrammarParser::NUMBER, 0);
}

tree::TerminalNode* HistoryFileGrammarParser::WhereCollectedContext::DIGIT() {
  return getToken(HistoryFileGrammarParser::DIGIT, 0);
}


size_t HistoryFileGrammarParser::WhereCollectedContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleWhereCollected;
}

void HistoryFileGrammarParser::WhereCollectedContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhereCollected(this);
}

void HistoryFileGrammarParser::WhereCollectedContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhereCollected(this);
}

HistoryFileGrammarParser::WhereCollectedContext* HistoryFileGrammarParser::whereCollected() {
  WhereCollectedContext *_localctx = _tracker.createInstance<WhereCollectedContext>(_ctx, getState());
  enterRule(_localctx, 152, HistoryFileGrammarParser::RuleWhereCollected);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(576);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HistoryFileGrammarParser::T__32: {
        enterOuterAlt(_localctx, 1);
        setState(572);
        match(HistoryFileGrammarParser::T__32);
        break;
      }

      case HistoryFileGrammarParser::T__38: {
        enterOuterAlt(_localctx, 2);
        setState(573);
        match(HistoryFileGrammarParser::T__38);
        setState(574);
        _la = _input->LA(1);
        if (!(_la == HistoryFileGrammarParser::DIGIT

        || _la == HistoryFileGrammarParser::NUMBER)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case HistoryFileGrammarParser::T__39: {
        enterOuterAlt(_localctx, 3);
        setState(575);
        match(HistoryFileGrammarParser::T__39);
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

HistoryFileGrammarParser::ShowdownValueContext::ShowdownValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::ShowdownValueContext::NUMBER() {
  return getToken(HistoryFileGrammarParser::NUMBER, 0);
}


size_t HistoryFileGrammarParser::ShowdownValueContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleShowdownValue;
}

void HistoryFileGrammarParser::ShowdownValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShowdownValue(this);
}

void HistoryFileGrammarParser::ShowdownValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShowdownValue(this);
}

HistoryFileGrammarParser::ShowdownValueContext* HistoryFileGrammarParser::showdownValue() {
  ShowdownValueContext *_localctx = _tracker.createInstance<ShowdownValueContext>(_ctx, getState());
  enterRule(_localctx, 154, HistoryFileGrammarParser::RuleShowdownValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(578);
    match(HistoryFileGrammarParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SummarySectionContext ------------------------------------------------------------------

HistoryFileGrammarParser::SummarySectionContext::SummarySectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::SummaryHeaderContext* HistoryFileGrammarParser::SummarySectionContext::summaryHeader() {
  return getRuleContext<HistoryFileGrammarParser::SummaryHeaderContext>(0);
}

HistoryFileGrammarParser::PotSummaryContext* HistoryFileGrammarParser::SummarySectionContext::potSummary() {
  return getRuleContext<HistoryFileGrammarParser::PotSummaryContext>(0);
}

HistoryFileGrammarParser::BoardlineContext* HistoryFileGrammarParser::SummarySectionContext::boardline() {
  return getRuleContext<HistoryFileGrammarParser::BoardlineContext>(0);
}

std::vector<HistoryFileGrammarParser::PlayerSummaryContext *> HistoryFileGrammarParser::SummarySectionContext::playerSummary() {
  return getRuleContexts<HistoryFileGrammarParser::PlayerSummaryContext>();
}

HistoryFileGrammarParser::PlayerSummaryContext* HistoryFileGrammarParser::SummarySectionContext::playerSummary(size_t i) {
  return getRuleContext<HistoryFileGrammarParser::PlayerSummaryContext>(i);
}


size_t HistoryFileGrammarParser::SummarySectionContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleSummarySection;
}

void HistoryFileGrammarParser::SummarySectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSummarySection(this);
}

void HistoryFileGrammarParser::SummarySectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSummarySection(this);
}

HistoryFileGrammarParser::SummarySectionContext* HistoryFileGrammarParser::summarySection() {
  SummarySectionContext *_localctx = _tracker.createInstance<SummarySectionContext>(_ctx, getState());
  enterRule(_localctx, 156, HistoryFileGrammarParser::RuleSummarySection);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(580);
    summaryHeader();
    setState(581);
    potSummary();
    setState(583);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryFileGrammarParser::T__44) {
      setState(582);
      boardline();
    }
    setState(586); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(585);
      playerSummary();
      setState(588); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == HistoryFileGrammarParser::SEAT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SummaryHeaderContext ------------------------------------------------------------------

HistoryFileGrammarParser::SummaryHeaderContext::SummaryHeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t HistoryFileGrammarParser::SummaryHeaderContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleSummaryHeader;
}

void HistoryFileGrammarParser::SummaryHeaderContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSummaryHeader(this);
}

void HistoryFileGrammarParser::SummaryHeaderContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSummaryHeader(this);
}

HistoryFileGrammarParser::SummaryHeaderContext* HistoryFileGrammarParser::summaryHeader() {
  SummaryHeaderContext *_localctx = _tracker.createInstance<SummaryHeaderContext>(_ctx, getState());
  enterRule(_localctx, 158, HistoryFileGrammarParser::RuleSummaryHeader);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(590);
    match(HistoryFileGrammarParser::T__40);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PotSummaryContext ------------------------------------------------------------------

HistoryFileGrammarParser::PotSummaryContext::PotSummaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::PotValueContext* HistoryFileGrammarParser::PotSummaryContext::potValue() {
  return getRuleContext<HistoryFileGrammarParser::PotValueContext>(0);
}

HistoryFileGrammarParser::RakeValueContext* HistoryFileGrammarParser::PotSummaryContext::rakeValue() {
  return getRuleContext<HistoryFileGrammarParser::RakeValueContext>(0);
}


size_t HistoryFileGrammarParser::PotSummaryContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RulePotSummary;
}

void HistoryFileGrammarParser::PotSummaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPotSummary(this);
}

void HistoryFileGrammarParser::PotSummaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPotSummary(this);
}

HistoryFileGrammarParser::PotSummaryContext* HistoryFileGrammarParser::potSummary() {
  PotSummaryContext *_localctx = _tracker.createInstance<PotSummaryContext>(_ctx, getState());
  enterRule(_localctx, 160, HistoryFileGrammarParser::RulePotSummary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(592);
    match(HistoryFileGrammarParser::T__41);
    setState(593);
    potValue();
    setState(594);
    match(HistoryFileGrammarParser::T__42);
    setState(597);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HistoryFileGrammarParser::T__43: {
        setState(595);
        match(HistoryFileGrammarParser::T__43);
        break;
      }

      case HistoryFileGrammarParser::NUMBER: {
        setState(596);
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

HistoryFileGrammarParser::PotValueContext::PotValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::PotValueContext::NUMBER() {
  return getToken(HistoryFileGrammarParser::NUMBER, 0);
}


size_t HistoryFileGrammarParser::PotValueContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RulePotValue;
}

void HistoryFileGrammarParser::PotValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPotValue(this);
}

void HistoryFileGrammarParser::PotValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPotValue(this);
}

HistoryFileGrammarParser::PotValueContext* HistoryFileGrammarParser::potValue() {
  PotValueContext *_localctx = _tracker.createInstance<PotValueContext>(_ctx, getState());
  enterRule(_localctx, 162, HistoryFileGrammarParser::RulePotValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(599);
    match(HistoryFileGrammarParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RakeValueContext ------------------------------------------------------------------

HistoryFileGrammarParser::RakeValueContext::RakeValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::RakeValueContext::NUMBER() {
  return getToken(HistoryFileGrammarParser::NUMBER, 0);
}


size_t HistoryFileGrammarParser::RakeValueContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleRakeValue;
}

void HistoryFileGrammarParser::RakeValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRakeValue(this);
}

void HistoryFileGrammarParser::RakeValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRakeValue(this);
}

HistoryFileGrammarParser::RakeValueContext* HistoryFileGrammarParser::rakeValue() {
  RakeValueContext *_localctx = _tracker.createInstance<RakeValueContext>(_ctx, getState());
  enterRule(_localctx, 164, HistoryFileGrammarParser::RuleRakeValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(601);
    match(HistoryFileGrammarParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BoardlineContext ------------------------------------------------------------------

HistoryFileGrammarParser::BoardlineContext::BoardlineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::BoardCardsContext* HistoryFileGrammarParser::BoardlineContext::boardCards() {
  return getRuleContext<HistoryFileGrammarParser::BoardCardsContext>(0);
}


size_t HistoryFileGrammarParser::BoardlineContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleBoardline;
}

void HistoryFileGrammarParser::BoardlineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoardline(this);
}

void HistoryFileGrammarParser::BoardlineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoardline(this);
}

HistoryFileGrammarParser::BoardlineContext* HistoryFileGrammarParser::boardline() {
  BoardlineContext *_localctx = _tracker.createInstance<BoardlineContext>(_ctx, getState());
  enterRule(_localctx, 166, HistoryFileGrammarParser::RuleBoardline);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(603);
    match(HistoryFileGrammarParser::T__44);
    setState(604);
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

HistoryFileGrammarParser::BoardCardsContext::BoardCardsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::BoardCardsContext::LCROCH() {
  return getToken(HistoryFileGrammarParser::LCROCH, 0);
}

tree::TerminalNode* HistoryFileGrammarParser::BoardCardsContext::RCROCH() {
  return getToken(HistoryFileGrammarParser::RCROCH, 0);
}

std::vector<tree::TerminalNode *> HistoryFileGrammarParser::BoardCardsContext::MOT() {
  return getTokens(HistoryFileGrammarParser::MOT);
}

tree::TerminalNode* HistoryFileGrammarParser::BoardCardsContext::MOT(size_t i) {
  return getToken(HistoryFileGrammarParser::MOT, i);
}


size_t HistoryFileGrammarParser::BoardCardsContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleBoardCards;
}

void HistoryFileGrammarParser::BoardCardsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoardCards(this);
}

void HistoryFileGrammarParser::BoardCardsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoardCards(this);
}

HistoryFileGrammarParser::BoardCardsContext* HistoryFileGrammarParser::boardCards() {
  BoardCardsContext *_localctx = _tracker.createInstance<BoardCardsContext>(_ctx, getState());
  enterRule(_localctx, 168, HistoryFileGrammarParser::RuleBoardCards);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(606);
    match(HistoryFileGrammarParser::LCROCH);
    setState(608); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(607);
      match(HistoryFileGrammarParser::MOT);
      setState(610); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == HistoryFileGrammarParser::MOT);
    setState(612);
    match(HistoryFileGrammarParser::RCROCH);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PlayerSummaryContext ------------------------------------------------------------------

HistoryFileGrammarParser::PlayerSummaryContext::PlayerSummaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::SiegeContext* HistoryFileGrammarParser::PlayerSummaryContext::siege() {
  return getRuleContext<HistoryFileGrammarParser::SiegeContext>(0);
}

HistoryFileGrammarParser::PseudoContext* HistoryFileGrammarParser::PlayerSummaryContext::pseudo() {
  return getRuleContext<HistoryFileGrammarParser::PseudoContext>(0);
}

HistoryFileGrammarParser::ResultContext* HistoryFileGrammarParser::PlayerSummaryContext::result() {
  return getRuleContext<HistoryFileGrammarParser::ResultContext>(0);
}

HistoryFileGrammarParser::PositionContext* HistoryFileGrammarParser::PlayerSummaryContext::position() {
  return getRuleContext<HistoryFileGrammarParser::PositionContext>(0);
}

HistoryFileGrammarParser::CartePersoContext* HistoryFileGrammarParser::PlayerSummaryContext::cartePerso() {
  return getRuleContext<HistoryFileGrammarParser::CartePersoContext>(0);
}

HistoryFileGrammarParser::WithWhatContext* HistoryFileGrammarParser::PlayerSummaryContext::withWhat() {
  return getRuleContext<HistoryFileGrammarParser::WithWhatContext>(0);
}


size_t HistoryFileGrammarParser::PlayerSummaryContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RulePlayerSummary;
}

void HistoryFileGrammarParser::PlayerSummaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPlayerSummary(this);
}

void HistoryFileGrammarParser::PlayerSummaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPlayerSummary(this);
}

HistoryFileGrammarParser::PlayerSummaryContext* HistoryFileGrammarParser::playerSummary() {
  PlayerSummaryContext *_localctx = _tracker.createInstance<PlayerSummaryContext>(_ctx, getState());
  enterRule(_localctx, 170, HistoryFileGrammarParser::RulePlayerSummary);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(614);
    siege();
    setState(615);
    pseudo();
    setState(617);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryFileGrammarParser::LPAREN) {
      setState(616);
      position();
    }
    setState(621);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryFileGrammarParser::T__45) {
      setState(619);
      match(HistoryFileGrammarParser::T__45);
      setState(620);
      cartePerso();
    }
    setState(623);
    result();
    setState(625);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryFileGrammarParser::T__49) {
      setState(624);
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

HistoryFileGrammarParser::PositionContext::PositionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::PositionContext::LPAREN() {
  return getToken(HistoryFileGrammarParser::LPAREN, 0);
}

tree::TerminalNode* HistoryFileGrammarParser::PositionContext::RPAREN() {
  return getToken(HistoryFileGrammarParser::RPAREN, 0);
}


size_t HistoryFileGrammarParser::PositionContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RulePosition;
}

void HistoryFileGrammarParser::PositionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPosition(this);
}

void HistoryFileGrammarParser::PositionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPosition(this);
}

HistoryFileGrammarParser::PositionContext* HistoryFileGrammarParser::position() {
  PositionContext *_localctx = _tracker.createInstance<PositionContext>(_ctx, getState());
  enterRule(_localctx, 172, HistoryFileGrammarParser::RulePosition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(636);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(627);
      match(HistoryFileGrammarParser::LPAREN);
      setState(628);
      match(HistoryFileGrammarParser::T__46);
      setState(629);
      match(HistoryFileGrammarParser::RPAREN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(630);
      match(HistoryFileGrammarParser::LPAREN);
      setState(631);
      match(HistoryFileGrammarParser::T__47);
      setState(632);
      match(HistoryFileGrammarParser::RPAREN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(633);
      match(HistoryFileGrammarParser::LPAREN);
      setState(634);
      match(HistoryFileGrammarParser::T__48);
      setState(635);
      match(HistoryFileGrammarParser::RPAREN);
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

HistoryFileGrammarParser::ResultContext::ResultContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::ShowdownWinContext* HistoryFileGrammarParser::ResultContext::showdownWin() {
  return getRuleContext<HistoryFileGrammarParser::ShowdownWinContext>(0);
}

HistoryFileGrammarParser::ShowdownLoseContext* HistoryFileGrammarParser::ResultContext::showdownLose() {
  return getRuleContext<HistoryFileGrammarParser::ShowdownLoseContext>(0);
}

HistoryFileGrammarParser::JustWinContext* HistoryFileGrammarParser::ResultContext::justWin() {
  return getRuleContext<HistoryFileGrammarParser::JustWinContext>(0);
}


size_t HistoryFileGrammarParser::ResultContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleResult;
}

void HistoryFileGrammarParser::ResultContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResult(this);
}

void HistoryFileGrammarParser::ResultContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResult(this);
}

HistoryFileGrammarParser::ResultContext* HistoryFileGrammarParser::result() {
  ResultContext *_localctx = _tracker.createInstance<ResultContext>(_ctx, getState());
  enterRule(_localctx, 174, HistoryFileGrammarParser::RuleResult);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(641);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HistoryFileGrammarParser::T__50: {
        enterOuterAlt(_localctx, 1);
        setState(638);
        showdownWin();
        break;
      }

      case HistoryFileGrammarParser::T__51: {
        enterOuterAlt(_localctx, 2);
        setState(639);
        showdownLose();
        break;
      }

      case HistoryFileGrammarParser::T__52: {
        enterOuterAlt(_localctx, 3);
        setState(640);
        justWin();
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

//----------------- WithWhatContext ------------------------------------------------------------------

HistoryFileGrammarParser::WithWhatContext::WithWhatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::WithWhatContext::COLON() {
  return getToken(HistoryFileGrammarParser::COLON, 0);
}

std::vector<tree::TerminalNode *> HistoryFileGrammarParser::WithWhatContext::MOT() {
  return getTokens(HistoryFileGrammarParser::MOT);
}

tree::TerminalNode* HistoryFileGrammarParser::WithWhatContext::MOT(size_t i) {
  return getToken(HistoryFileGrammarParser::MOT, i);
}

std::vector<tree::TerminalNode *> HistoryFileGrammarParser::WithWhatContext::NUMBER() {
  return getTokens(HistoryFileGrammarParser::NUMBER);
}

tree::TerminalNode* HistoryFileGrammarParser::WithWhatContext::NUMBER(size_t i) {
  return getToken(HistoryFileGrammarParser::NUMBER, i);
}


size_t HistoryFileGrammarParser::WithWhatContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleWithWhat;
}

void HistoryFileGrammarParser::WithWhatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWithWhat(this);
}

void HistoryFileGrammarParser::WithWhatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWithWhat(this);
}

HistoryFileGrammarParser::WithWhatContext* HistoryFileGrammarParser::withWhat() {
  WithWhatContext *_localctx = _tracker.createInstance<WithWhatContext>(_ctx, getState());
  enterRule(_localctx, 176, HistoryFileGrammarParser::RuleWithWhat);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(643);
    match(HistoryFileGrammarParser::T__49);
    setState(645); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(644);
      _la = _input->LA(1);
      if (!(_la == HistoryFileGrammarParser::NUMBER

      || _la == HistoryFileGrammarParser::MOT)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(647); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == HistoryFileGrammarParser::NUMBER

    || _la == HistoryFileGrammarParser::MOT);
    setState(655);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HistoryFileGrammarParser::COLON) {
      setState(649);
      match(HistoryFileGrammarParser::COLON);
      setState(651); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(650);
        _la = _input->LA(1);
        if (!(_la == HistoryFileGrammarParser::NUMBER

        || _la == HistoryFileGrammarParser::MOT)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(653); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == HistoryFileGrammarParser::NUMBER

      || _la == HistoryFileGrammarParser::MOT);
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

HistoryFileGrammarParser::ShowdownWinContext::ShowdownWinContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::WinValueContext* HistoryFileGrammarParser::ShowdownWinContext::winValue() {
  return getRuleContext<HistoryFileGrammarParser::WinValueContext>(0);
}


size_t HistoryFileGrammarParser::ShowdownWinContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleShowdownWin;
}

void HistoryFileGrammarParser::ShowdownWinContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShowdownWin(this);
}

void HistoryFileGrammarParser::ShowdownWinContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShowdownWin(this);
}

HistoryFileGrammarParser::ShowdownWinContext* HistoryFileGrammarParser::showdownWin() {
  ShowdownWinContext *_localctx = _tracker.createInstance<ShowdownWinContext>(_ctx, getState());
  enterRule(_localctx, 178, HistoryFileGrammarParser::RuleShowdownWin);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(657);
    match(HistoryFileGrammarParser::T__50);
    setState(658);
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

HistoryFileGrammarParser::ShowdownLoseContext::ShowdownLoseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t HistoryFileGrammarParser::ShowdownLoseContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleShowdownLose;
}

void HistoryFileGrammarParser::ShowdownLoseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShowdownLose(this);
}

void HistoryFileGrammarParser::ShowdownLoseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShowdownLose(this);
}

HistoryFileGrammarParser::ShowdownLoseContext* HistoryFileGrammarParser::showdownLose() {
  ShowdownLoseContext *_localctx = _tracker.createInstance<ShowdownLoseContext>(_ctx, getState());
  enterRule(_localctx, 180, HistoryFileGrammarParser::RuleShowdownLose);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(660);
    match(HistoryFileGrammarParser::T__51);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JustWinContext ------------------------------------------------------------------

HistoryFileGrammarParser::JustWinContext::JustWinContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HistoryFileGrammarParser::WinValueContext* HistoryFileGrammarParser::JustWinContext::winValue() {
  return getRuleContext<HistoryFileGrammarParser::WinValueContext>(0);
}


size_t HistoryFileGrammarParser::JustWinContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleJustWin;
}

void HistoryFileGrammarParser::JustWinContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJustWin(this);
}

void HistoryFileGrammarParser::JustWinContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJustWin(this);
}

HistoryFileGrammarParser::JustWinContext* HistoryFileGrammarParser::justWin() {
  JustWinContext *_localctx = _tracker.createInstance<JustWinContext>(_ctx, getState());
  enterRule(_localctx, 182, HistoryFileGrammarParser::RuleJustWin);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(662);
    match(HistoryFileGrammarParser::T__52);
    setState(663);
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

HistoryFileGrammarParser::WinValueContext::WinValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HistoryFileGrammarParser::WinValueContext::NUMBER() {
  return getToken(HistoryFileGrammarParser::NUMBER, 0);
}


size_t HistoryFileGrammarParser::WinValueContext::getRuleIndex() const {
  return HistoryFileGrammarParser::RuleWinValue;
}

void HistoryFileGrammarParser::WinValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWinValue(this);
}

void HistoryFileGrammarParser::WinValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HistoryFileGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWinValue(this);
}

HistoryFileGrammarParser::WinValueContext* HistoryFileGrammarParser::winValue() {
  WinValueContext *_localctx = _tracker.createInstance<WinValueContext>(_ctx, getState());
  enterRule(_localctx, 184, HistoryFileGrammarParser::RuleWinValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(665);
    match(HistoryFileGrammarParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> HistoryFileGrammarParser::_decisionToDFA;
atn::PredictionContextCache HistoryFileGrammarParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN HistoryFileGrammarParser::_atn;
std::vector<uint16_t> HistoryFileGrammarParser::_serializedATN;

std::vector<std::string> HistoryFileGrammarParser::_ruleNames = {
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

std::vector<std::string> HistoryFileGrammarParser::_literalNames = {
  "", "'Winamax Poker -'", "'-'", "'Tournament'", "'\"'", "'buyIn:'", "'\u20AC +'", 
  "'\u20AC'", "'level:'", "'HandId: #'", "'Holdem no limit'", "'/'", "'UTC'", 
  "'Table:'", "'''", "'#'", "'(real money)'", "'Seat #'", "'is the button'", 
  "'*** ANTE/BLINDS ***'", "'posts ante'", "'and is all-in'", "'posts small blind'", 
  "'posts big blind'", "'Dealt to'", "'*** PRE-FLOP ***'", "'raises'", "'to'", 
  "'folds'", "'bets'", "'checks'", "'calls'", "'collected'", "'from pot'", 
  "'*** FLOP ***'", "'*** TURN ***'", "'*** RIVER ***'", "'*** SHOW DOWN ***'", 
  "'shows'", "'from side pot'", "'from main pot'", "'*** SUMMARY ***'", 
  "'Total pot'", "'|'", "'No rake'", "'Board:'", "'showed'", "'button'", 
  "'small blind'", "'big blind'", "'with'", "'and won'", "'and lost'", "'won'", 
  "", "", "'('", "')'", "'['", "']'", "", "':'"
};

std::vector<std::string> HistoryFileGrammarParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "DIGIT", "NUMBER", "LPAREN", "RPAREN", "LCROCH", "RCROCH", "SEAT", "COLON", 
  "MOT", "WS"
};

dfa::Vocabulary HistoryFileGrammarParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> HistoryFileGrammarParser::_tokenNames;

HistoryFileGrammarParser::Initializer::Initializer() {
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
    0x3, 0x41, 0x29e, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x6, 0x9, 0xea, 0xa, 0x9, 0xd, 0x9, 
    0xe, 0x9, 0xeb, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 
    0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x6, 0x1d, 0x132, 0xa, 0x1d, 0xd, 0x1d, 
    0xe, 0x1d, 0x133, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 
    0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x6, 0x24, 0x14d, 
    0xa, 0x24, 0xd, 0x24, 0xe, 0x24, 0x14e, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
    0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x6, 0x27, 0x159, 
    0xa, 0x27, 0xd, 0x27, 0xe, 0x27, 0x15a, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x6, 0x29, 0x163, 0xa, 0x29, 0xd, 0x29, 
    0xe, 0x29, 0x164, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 
    0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x171, 
    0xa, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 
    0x2d, 0x5, 0x2d, 0x179, 0xa, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2f, 
    0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x181, 0xa, 0x2f, 0x3, 0x30, 
    0x3, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 0x3, 
    0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x33, 0x3, 0x33, 0x6, 0x33, 
    0x190, 0xa, 0x33, 0xd, 0x33, 0xe, 0x33, 0x191, 0x5, 0x33, 0x194, 0xa, 
    0x33, 0x3, 0x33, 0x5, 0x33, 0x197, 0xa, 0x33, 0x3, 0x33, 0x5, 0x33, 
    0x19a, 0xa, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 
    0x3, 0x35, 0x3, 0x35, 0x5, 0x35, 0x1a3, 0xa, 0x35, 0x3, 0x36, 0x3, 0x36, 
    0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x5, 0x36, 0x1ab, 0xa, 0x36, 
    0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 
    0x38, 0x5, 0x38, 0x1b4, 0xa, 0x38, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 
    0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x1bd, 0xa, 0x3a, 
    0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 
    0x3e, 0x3, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 
    0x3, 0x40, 0x3, 0x40, 0x6, 0x40, 0x1ce, 0xa, 0x40, 0xd, 0x40, 0xe, 0x40, 
    0x1cf, 0x5, 0x40, 0x1d2, 0xa, 0x40, 0x3, 0x40, 0x5, 0x40, 0x1d5, 0xa, 
    0x40, 0x3, 0x40, 0x5, 0x40, 0x1d8, 0xa, 0x40, 0x3, 0x41, 0x3, 0x41, 
    0x3, 0x41, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 
    0x42, 0x3, 0x43, 0x3, 0x43, 0x6, 0x43, 0x1e5, 0xa, 0x43, 0xd, 0x43, 
    0xe, 0x43, 0x1e6, 0x5, 0x43, 0x1e9, 0xa, 0x43, 0x3, 0x43, 0x5, 0x43, 
    0x1ec, 0xa, 0x43, 0x3, 0x43, 0x5, 0x43, 0x1ef, 0xa, 0x43, 0x3, 0x44, 
    0x3, 0x44, 0x3, 0x44, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 
    0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x46, 0x3, 0x46, 
    0x6, 0x46, 0x1ff, 0xa, 0x46, 0xd, 0x46, 0xe, 0x46, 0x200, 0x5, 0x46, 
    0x203, 0xa, 0x46, 0x3, 0x46, 0x5, 0x46, 0x206, 0xa, 0x46, 0x3, 0x46, 
    0x5, 0x46, 0x209, 0xa, 0x46, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x48, 
    0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 
    0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x49, 0x3, 0x49, 0x6, 0x49, 0x21a, 
    0xa, 0x49, 0xd, 0x49, 0xe, 0x49, 0x21b, 0x3, 0x49, 0x6, 0x49, 0x21f, 
    0xa, 0x49, 0xd, 0x49, 0xe, 0x49, 0x220, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4b, 
    0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4c, 0x3, 0x4c, 0x6, 
    0x4c, 0x22c, 0xa, 0x4c, 0xd, 0x4c, 0xe, 0x4c, 0x22d, 0x3, 0x4c, 0x3, 
    0x4c, 0x6, 0x4c, 0x232, 0xa, 0x4c, 0xd, 0x4c, 0xe, 0x4c, 0x233, 0x5, 
    0x4c, 0x236, 0xa, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4d, 0x3, 0x4d, 
    0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 
    0x4e, 0x5, 0x4e, 0x243, 0xa, 0x4e, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x50, 
    0x3, 0x50, 0x3, 0x50, 0x5, 0x50, 0x24a, 0xa, 0x50, 0x3, 0x50, 0x6, 0x50, 
    0x24d, 0xa, 0x50, 0xd, 0x50, 0xe, 0x50, 0x24e, 0x3, 0x51, 0x3, 0x51, 
    0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x5, 0x52, 0x258, 
    0xa, 0x52, 0x3, 0x53, 0x3, 0x53, 0x3, 0x54, 0x3, 0x54, 0x3, 0x55, 0x3, 
    0x55, 0x3, 0x55, 0x3, 0x56, 0x3, 0x56, 0x6, 0x56, 0x263, 0xa, 0x56, 
    0xd, 0x56, 0xe, 0x56, 0x264, 0x3, 0x56, 0x3, 0x56, 0x3, 0x57, 0x3, 0x57, 
    0x3, 0x57, 0x5, 0x57, 0x26c, 0xa, 0x57, 0x3, 0x57, 0x3, 0x57, 0x5, 0x57, 
    0x270, 0xa, 0x57, 0x3, 0x57, 0x3, 0x57, 0x5, 0x57, 0x274, 0xa, 0x57, 
    0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 
    0x58, 0x3, 0x58, 0x3, 0x58, 0x5, 0x58, 0x27f, 0xa, 0x58, 0x3, 0x59, 
    0x3, 0x59, 0x3, 0x59, 0x5, 0x59, 0x284, 0xa, 0x59, 0x3, 0x5a, 0x3, 0x5a, 
    0x6, 0x5a, 0x288, 0xa, 0x5a, 0xd, 0x5a, 0xe, 0x5a, 0x289, 0x3, 0x5a, 
    0x3, 0x5a, 0x6, 0x5a, 0x28e, 0xa, 0x5a, 0xd, 0x5a, 0xe, 0x5a, 0x28f, 
    0x5, 0x5a, 0x292, 0xa, 0x5a, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5c, 
    0x3, 0x5c, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5e, 0x3, 0x5e, 0x3, 
    0x5e, 0x2, 0x2, 0x5f, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 
    0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 
    0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 
    0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 
    0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 
    0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 
    0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 
    0xa4, 0xa6, 0xa8, 0xaa, 0xac, 0xae, 0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 0xba, 
    0x2, 0x5, 0x3, 0x2, 0x38, 0x39, 0x4, 0x2, 0x39, 0x39, 0x40, 0x40, 0x4, 
    0x2, 0x38, 0x38, 0x40, 0x40, 0x2, 0x279, 0x2, 0xbd, 0x3, 0x2, 0x2, 0x2, 
    0x4, 0xc1, 0x3, 0x2, 0x2, 0x2, 0x6, 0xc6, 0x3, 0x2, 0x2, 0x2, 0x8, 0xc9, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xc, 0xe0, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0xe5, 0x3, 0x2, 0x2, 0x2, 0x10, 0xe7, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0xef, 0x3, 0x2, 0x2, 0x2, 0x14, 0xf5, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0xf7, 0x3, 0x2, 0x2, 0x2, 0x18, 0xf9, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0xfc, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x101, 
    0x3, 0x2, 0x2, 0x2, 0x20, 0x103, 0x3, 0x2, 0x2, 0x2, 0x22, 0x10c, 0x3, 
    0x2, 0x2, 0x2, 0x24, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x26, 0x110, 0x3, 0x2, 
    0x2, 0x2, 0x28, 0x112, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x11e, 0x3, 0x2, 0x2, 
    0x2, 0x2c, 0x120, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x122, 0x3, 0x2, 0x2, 0x2, 
    0x30, 0x124, 0x3, 0x2, 0x2, 0x2, 0x32, 0x126, 0x3, 0x2, 0x2, 0x2, 0x34, 
    0x128, 0x3, 0x2, 0x2, 0x2, 0x36, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x38, 0x12f, 
    0x3, 0x2, 0x2, 0x2, 0x3a, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x13e, 0x3, 
    0x2, 0x2, 0x2, 0x3e, 0x140, 0x3, 0x2, 0x2, 0x2, 0x40, 0x143, 0x3, 0x2, 
    0x2, 0x2, 0x42, 0x145, 0x3, 0x2, 0x2, 0x2, 0x44, 0x149, 0x3, 0x2, 0x2, 
    0x2, 0x46, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x48, 0x150, 0x3, 0x2, 0x2, 0x2, 
    0x4a, 0x154, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x158, 0x3, 0x2, 0x2, 0x2, 0x4e, 
    0x15c, 0x3, 0x2, 0x2, 0x2, 0x50, 0x160, 0x3, 0x2, 0x2, 0x2, 0x52, 0x16a, 
    0x3, 0x2, 0x2, 0x2, 0x54, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x56, 0x172, 0x3, 
    0x2, 0x2, 0x2, 0x58, 0x174, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x17a, 0x3, 0x2, 
    0x2, 0x2, 0x5c, 0x17c, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x182, 0x3, 0x2, 0x2, 
    0x2, 0x60, 0x184, 0x3, 0x2, 0x2, 0x2, 0x62, 0x188, 0x3, 0x2, 0x2, 0x2, 
    0x64, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x66, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x68, 
    0x1a2, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x1ac, 
    0x3, 0x2, 0x2, 0x2, 0x6e, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x70, 0x1b5, 0x3, 
    0x2, 0x2, 0x2, 0x72, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x74, 0x1be, 0x3, 0x2, 
    0x2, 0x2, 0x76, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x78, 0x1c2, 0x3, 0x2, 0x2, 
    0x2, 0x7a, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x1c6, 0x3, 0x2, 0x2, 0x2, 
    0x7e, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x80, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x82, 
    0x1dc, 0x3, 0x2, 0x2, 0x2, 0x84, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x86, 0x1f0, 
    0x3, 0x2, 0x2, 0x2, 0x88, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x1fc, 0x3, 
    0x2, 0x2, 0x2, 0x8c, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x20d, 0x3, 0x2, 
    0x2, 0x2, 0x90, 0x217, 0x3, 0x2, 0x2, 0x2, 0x92, 0x222, 0x3, 0x2, 0x2, 
    0x2, 0x94, 0x224, 0x3, 0x2, 0x2, 0x2, 0x96, 0x229, 0x3, 0x2, 0x2, 0x2, 
    0x98, 0x239, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x242, 0x3, 0x2, 0x2, 0x2, 0x9c, 
    0x244, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x246, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x250, 
    0x3, 0x2, 0x2, 0x2, 0xa2, 0x252, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x259, 0x3, 
    0x2, 0x2, 0x2, 0xa6, 0x25b, 0x3, 0x2, 0x2, 0x2, 0xa8, 0x25d, 0x3, 0x2, 
    0x2, 0x2, 0xaa, 0x260, 0x3, 0x2, 0x2, 0x2, 0xac, 0x268, 0x3, 0x2, 0x2, 
    0x2, 0xae, 0x27e, 0x3, 0x2, 0x2, 0x2, 0xb0, 0x283, 0x3, 0x2, 0x2, 0x2, 
    0xb2, 0x285, 0x3, 0x2, 0x2, 0x2, 0xb4, 0x293, 0x3, 0x2, 0x2, 0x2, 0xb6, 
    0x296, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x298, 0x3, 0x2, 0x2, 0x2, 0xba, 0x29b, 
    0x3, 0x2, 0x2, 0x2, 0xbc, 0xbe, 0x5, 0x4, 0x3, 0x2, 0xbd, 0xbc, 0x3, 
    0x2, 0x2, 0x2, 0xbe, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xbd, 0x3, 0x2, 
    0x2, 0x2, 0xbf, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc0, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0xc1, 0xc2, 0x5, 0x6, 0x4, 0x2, 0xc2, 0xc3, 0x5, 0x46, 0x24, 0x2, 
    0xc3, 0xc4, 0x5, 0x8, 0x5, 0x2, 0xc4, 0xc5, 0x5, 0x9e, 0x50, 0x2, 0xc5, 
    0x5, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc7, 0x5, 0xa, 0x6, 0x2, 0xc7, 0xc8, 
    0x5, 0x36, 0x1c, 0x2, 0xc8, 0x7, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xca, 0x5, 
    0x50, 0x29, 0x2, 0xca, 0xcc, 0x5, 0x64, 0x33, 0x2, 0xcb, 0xcd, 0x5, 
    0x7e, 0x40, 0x2, 0xcc, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x3, 0x2, 
    0x2, 0x2, 0xcd, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xce, 0xd0, 0x5, 0x84, 0x43, 
    0x2, 0xcf, 0xce, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 0x3, 0x2, 0x2, 0x2, 
    0xd0, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd3, 0x5, 0x8a, 0x46, 0x2, 0xd2, 
    0xd1, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd5, 
    0x3, 0x2, 0x2, 0x2, 0xd4, 0xd6, 0x5, 0x90, 0x49, 0x2, 0xd5, 0xd4, 0x3, 
    0x2, 0x2, 0x2, 0xd5, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd6, 0x9, 0x3, 0x2, 
    0x2, 0x2, 0xd7, 0xd8, 0x7, 0x3, 0x2, 0x2, 0xd8, 0xd9, 0x5, 0xc, 0x7, 
    0x2, 0xd9, 0xda, 0x7, 0x4, 0x2, 0x2, 0xda, 0xdb, 0x5, 0x1c, 0xf, 0x2, 
    0xdb, 0xdc, 0x7, 0x4, 0x2, 0x2, 0xdc, 0xdd, 0x5, 0x20, 0x11, 0x2, 0xdd, 
    0xde, 0x7, 0x4, 0x2, 0x2, 0xde, 0xdf, 0x5, 0x28, 0x15, 0x2, 0xdf, 0xb, 
    0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 0x5, 0xe, 0x8, 0x2, 0xe1, 0xe2, 0x5, 
    0x10, 0x9, 0x2, 0xe2, 0xe3, 0x5, 0x12, 0xa, 0x2, 0xe3, 0xe4, 0x5, 0x18, 
    0xd, 0x2, 0xe4, 0xd, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe6, 0x7, 0x5, 0x2, 
    0x2, 0xe6, 0xf, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe9, 0x7, 0x6, 0x2, 0x2, 
    0xe8, 0xea, 0x7, 0x40, 0x2, 0x2, 0xe9, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xea, 
    0xeb, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xec, 
    0x3, 0x2, 0x2, 0x2, 0xec, 0xed, 0x3, 0x2, 0x2, 0x2, 0xed, 0xee, 0x7, 
    0x6, 0x2, 0x2, 0xee, 0x11, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 0x7, 0x7, 
    0x2, 0x2, 0xf0, 0xf1, 0x5, 0x14, 0xb, 0x2, 0xf1, 0xf2, 0x7, 0x8, 0x2, 
    0x2, 0xf2, 0xf3, 0x5, 0x16, 0xc, 0x2, 0xf3, 0xf4, 0x7, 0x9, 0x2, 0x2, 
    0xf4, 0x13, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf6, 0x9, 0x2, 0x2, 0x2, 0xf6, 
    0x15, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf8, 0x9, 0x2, 0x2, 0x2, 0xf8, 0x17, 
    0x3, 0x2, 0x2, 0x2, 0xf9, 0xfa, 0x7, 0xa, 0x2, 0x2, 0xfa, 0xfb, 0x5, 
    0x1a, 0xe, 0x2, 0xfb, 0x19, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfd, 0x9, 0x2, 
    0x2, 0x2, 0xfd, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xff, 0x7, 0xb, 0x2, 
    0x2, 0xff, 0x100, 0x5, 0x1e, 0x10, 0x2, 0x100, 0x1d, 0x3, 0x2, 0x2, 
    0x2, 0x101, 0x102, 0x7, 0x40, 0x2, 0x2, 0x102, 0x1f, 0x3, 0x2, 0x2, 
    0x2, 0x103, 0x104, 0x7, 0xc, 0x2, 0x2, 0x104, 0x105, 0x7, 0x3a, 0x2, 
    0x2, 0x105, 0x106, 0x5, 0x22, 0x12, 0x2, 0x106, 0x107, 0x7, 0xd, 0x2, 
    0x2, 0x107, 0x108, 0x5, 0x24, 0x13, 0x2, 0x108, 0x109, 0x7, 0xd, 0x2, 
    0x2, 0x109, 0x10a, 0x5, 0x26, 0x14, 0x2, 0x10a, 0x10b, 0x7, 0x3b, 0x2, 
    0x2, 0x10b, 0x21, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10d, 0x9, 0x2, 0x2, 0x2, 
    0x10d, 0x23, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10f, 0x9, 0x2, 0x2, 0x2, 0x10f, 
    0x25, 0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 0x9, 0x2, 0x2, 0x2, 0x111, 0x27, 
    0x3, 0x2, 0x2, 0x2, 0x112, 0x113, 0x5, 0x2a, 0x16, 0x2, 0x113, 0x114, 
    0x7, 0xd, 0x2, 0x2, 0x114, 0x115, 0x5, 0x2c, 0x17, 0x2, 0x115, 0x116, 
    0x7, 0xd, 0x2, 0x2, 0x116, 0x117, 0x5, 0x2e, 0x18, 0x2, 0x117, 0x118, 
    0x5, 0x30, 0x19, 0x2, 0x118, 0x119, 0x7, 0x3f, 0x2, 0x2, 0x119, 0x11a, 
    0x5, 0x32, 0x1a, 0x2, 0x11a, 0x11b, 0x7, 0x3f, 0x2, 0x2, 0x11b, 0x11c, 
    0x5, 0x34, 0x1b, 0x2, 0x11c, 0x11d, 0x7, 0xe, 0x2, 0x2, 0x11d, 0x29, 
    0x3, 0x2, 0x2, 0x2, 0x11e, 0x11f, 0x7, 0x39, 0x2, 0x2, 0x11f, 0x2b, 
    0x3, 0x2, 0x2, 0x2, 0x120, 0x121, 0x7, 0x39, 0x2, 0x2, 0x121, 0x2d, 
    0x3, 0x2, 0x2, 0x2, 0x122, 0x123, 0x7, 0x39, 0x2, 0x2, 0x123, 0x2f, 
    0x3, 0x2, 0x2, 0x2, 0x124, 0x125, 0x7, 0x39, 0x2, 0x2, 0x125, 0x31, 
    0x3, 0x2, 0x2, 0x2, 0x126, 0x127, 0x7, 0x39, 0x2, 0x2, 0x127, 0x33, 
    0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x7, 0x39, 0x2, 0x2, 0x129, 0x35, 
    0x3, 0x2, 0x2, 0x2, 0x12a, 0x12b, 0x7, 0xf, 0x2, 0x2, 0x12b, 0x12c, 
    0x5, 0x38, 0x1d, 0x2, 0x12c, 0x12d, 0x5, 0x3e, 0x20, 0x2, 0x12d, 0x12e, 
    0x5, 0x42, 0x22, 0x2, 0x12e, 0x37, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x131, 
    0x7, 0x10, 0x2, 0x2, 0x130, 0x132, 0x7, 0x40, 0x2, 0x2, 0x131, 0x130, 
    0x3, 0x2, 0x2, 0x2, 0x132, 0x133, 0x3, 0x2, 0x2, 0x2, 0x133, 0x131, 
    0x3, 0x2, 0x2, 0x2, 0x133, 0x134, 0x3, 0x2, 0x2, 0x2, 0x134, 0x135, 
    0x3, 0x2, 0x2, 0x2, 0x135, 0x136, 0x7, 0x3a, 0x2, 0x2, 0x136, 0x137, 
    0x5, 0x3a, 0x1e, 0x2, 0x137, 0x138, 0x7, 0x3b, 0x2, 0x2, 0x138, 0x139, 
    0x7, 0x11, 0x2, 0x2, 0x139, 0x13a, 0x5, 0x3c, 0x1f, 0x2, 0x13a, 0x13b, 
    0x7, 0x10, 0x2, 0x2, 0x13b, 0x39, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13d, 
    0x7, 0x39, 0x2, 0x2, 0x13d, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x13f, 
    0x7, 0x39, 0x2, 0x2, 0x13f, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x140, 0x141, 
    0x5, 0x40, 0x21, 0x2, 0x141, 0x142, 0x7, 0x12, 0x2, 0x2, 0x142, 0x3f, 
    0x3, 0x2, 0x2, 0x2, 0x143, 0x144, 0x7, 0x40, 0x2, 0x2, 0x144, 0x41, 
    0x3, 0x2, 0x2, 0x2, 0x145, 0x146, 0x7, 0x13, 0x2, 0x2, 0x146, 0x147, 
    0x5, 0x44, 0x23, 0x2, 0x147, 0x148, 0x7, 0x14, 0x2, 0x2, 0x148, 0x43, 
    0x3, 0x2, 0x2, 0x2, 0x149, 0x14a, 0x7, 0x38, 0x2, 0x2, 0x14a, 0x45, 
    0x3, 0x2, 0x2, 0x2, 0x14b, 0x14d, 0x5, 0x48, 0x25, 0x2, 0x14c, 0x14b, 
    0x3, 0x2, 0x2, 0x2, 0x14d, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x14c, 
    0x3, 0x2, 0x2, 0x2, 0x14e, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x47, 0x3, 
    0x2, 0x2, 0x2, 0x150, 0x151, 0x5, 0x4a, 0x26, 0x2, 0x151, 0x152, 0x5, 
    0x4c, 0x27, 0x2, 0x152, 0x153, 0x5, 0x4e, 0x28, 0x2, 0x153, 0x49, 0x3, 
    0x2, 0x2, 0x2, 0x154, 0x155, 0x7, 0x3e, 0x2, 0x2, 0x155, 0x156, 0x7, 
    0x3f, 0x2, 0x2, 0x156, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x157, 0x159, 0x9, 
    0x3, 0x2, 0x2, 0x158, 0x157, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15a, 0x3, 
    0x2, 0x2, 0x2, 0x15a, 0x158, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x15b, 0x3, 
    0x2, 0x2, 0x2, 0x15b, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x15d, 0x7, 0x3a, 
    0x2, 0x2, 0x15d, 0x15e, 0x7, 0x39, 0x2, 0x2, 0x15e, 0x15f, 0x7, 0x3b, 
    0x2, 0x2, 0x15f, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x160, 0x162, 0x5, 0x52, 
    0x2a, 0x2, 0x161, 0x163, 0x5, 0x54, 0x2b, 0x2, 0x162, 0x161, 0x3, 0x2, 
    0x2, 0x2, 0x163, 0x164, 0x3, 0x2, 0x2, 0x2, 0x164, 0x162, 0x3, 0x2, 
    0x2, 0x2, 0x164, 0x165, 0x3, 0x2, 0x2, 0x2, 0x165, 0x166, 0x3, 0x2, 
    0x2, 0x2, 0x166, 0x167, 0x5, 0x58, 0x2d, 0x2, 0x167, 0x168, 0x5, 0x5c, 
    0x2f, 0x2, 0x168, 0x169, 0x5, 0x60, 0x31, 0x2, 0x169, 0x51, 0x3, 0x2, 
    0x2, 0x2, 0x16a, 0x16b, 0x7, 0x15, 0x2, 0x2, 0x16b, 0x53, 0x3, 0x2, 
    0x2, 0x2, 0x16c, 0x16d, 0x5, 0x4c, 0x27, 0x2, 0x16d, 0x16e, 0x7, 0x16, 
    0x2, 0x2, 0x16e, 0x170, 0x5, 0x56, 0x2c, 0x2, 0x16f, 0x171, 0x7, 0x17, 
    0x2, 0x2, 0x170, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x170, 0x171, 0x3, 0x2, 
    0x2, 0x2, 0x171, 0x55, 0x3, 0x2, 0x2, 0x2, 0x172, 0x173, 0x9, 0x2, 0x2, 
    0x2, 0x173, 0x57, 0x3, 0x2, 0x2, 0x2, 0x174, 0x175, 0x5, 0x4c, 0x27, 
    0x2, 0x175, 0x176, 0x7, 0x18, 0x2, 0x2, 0x176, 0x178, 0x5, 0x5a, 0x2e, 
    0x2, 0x177, 0x179, 0x7, 0x17, 0x2, 0x2, 0x178, 0x177, 0x3, 0x2, 0x2, 
    0x2, 0x178, 0x179, 0x3, 0x2, 0x2, 0x2, 0x179, 0x59, 0x3, 0x2, 0x2, 0x2, 
    0x17a, 0x17b, 0x7, 0x39, 0x2, 0x2, 0x17b, 0x5b, 0x3, 0x2, 0x2, 0x2, 
    0x17c, 0x17d, 0x5, 0x4c, 0x27, 0x2, 0x17d, 0x17e, 0x7, 0x19, 0x2, 0x2, 
    0x17e, 0x180, 0x5, 0x5e, 0x30, 0x2, 0x17f, 0x181, 0x7, 0x17, 0x2, 0x2, 
    0x180, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x180, 0x181, 0x3, 0x2, 0x2, 0x2, 
    0x181, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x182, 0x183, 0x7, 0x39, 0x2, 0x2, 
    0x183, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x184, 0x185, 0x7, 0x1a, 0x2, 0x2, 
    0x185, 0x186, 0x5, 0x4c, 0x27, 0x2, 0x186, 0x187, 0x5, 0x62, 0x32, 0x2, 
    0x187, 0x61, 0x3, 0x2, 0x2, 0x2, 0x188, 0x189, 0x7, 0x3c, 0x2, 0x2, 
    0x189, 0x18a, 0x7, 0x40, 0x2, 0x2, 0x18a, 0x18b, 0x7, 0x40, 0x2, 0x2, 
    0x18b, 0x18c, 0x7, 0x3d, 0x2, 0x2, 0x18c, 0x63, 0x3, 0x2, 0x2, 0x2, 
    0x18d, 0x193, 0x5, 0x66, 0x34, 0x2, 0x18e, 0x190, 0x5, 0x68, 0x35, 0x2, 
    0x18f, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x190, 0x191, 0x3, 0x2, 0x2, 0x2, 
    0x191, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x191, 0x192, 0x3, 0x2, 0x2, 0x2, 
    0x192, 0x194, 0x3, 0x2, 0x2, 0x2, 0x193, 0x18f, 0x3, 0x2, 0x2, 0x2, 
    0x193, 0x194, 0x3, 0x2, 0x2, 0x2, 0x194, 0x196, 0x3, 0x2, 0x2, 0x2, 
    0x195, 0x197, 0x5, 0x94, 0x4b, 0x2, 0x196, 0x195, 0x3, 0x2, 0x2, 0x2, 
    0x196, 0x197, 0x3, 0x2, 0x2, 0x2, 0x197, 0x199, 0x3, 0x2, 0x2, 0x2, 
    0x198, 0x19a, 0x5, 0x7c, 0x3f, 0x2, 0x199, 0x198, 0x3, 0x2, 0x2, 0x2, 
    0x199, 0x19a, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x65, 0x3, 0x2, 0x2, 0x2, 0x19b, 
    0x19c, 0x7, 0x1b, 0x2, 0x2, 0x19c, 0x67, 0x3, 0x2, 0x2, 0x2, 0x19d, 
    0x1a3, 0x5, 0x6a, 0x36, 0x2, 0x19e, 0x1a3, 0x5, 0x6c, 0x37, 0x2, 0x19f, 
    0x1a3, 0x5, 0x6e, 0x38, 0x2, 0x1a0, 0x1a3, 0x5, 0x70, 0x39, 0x2, 0x1a1, 
    0x1a3, 0x5, 0x72, 0x3a, 0x2, 0x1a2, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x1a2, 
    0x19e, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x1a2, 
    0x1a0, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a3, 
    0x69, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a5, 0x5, 0x4c, 0x27, 0x2, 0x1a5, 
    0x1a6, 0x7, 0x1c, 0x2, 0x2, 0x1a6, 0x1a7, 0x5, 0x74, 0x3b, 0x2, 0x1a7, 
    0x1a8, 0x7, 0x1d, 0x2, 0x2, 0x1a8, 0x1aa, 0x5, 0x76, 0x3c, 0x2, 0x1a9, 
    0x1ab, 0x7, 0x17, 0x2, 0x2, 0x1aa, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1aa, 
    0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1ad, 
    0x5, 0x4c, 0x27, 0x2, 0x1ad, 0x1ae, 0x7, 0x1e, 0x2, 0x2, 0x1ae, 0x6d, 
    0x3, 0x2, 0x2, 0x2, 0x1af, 0x1b0, 0x5, 0x4c, 0x27, 0x2, 0x1b0, 0x1b1, 
    0x7, 0x1f, 0x2, 0x2, 0x1b1, 0x1b3, 0x5, 0x78, 0x3d, 0x2, 0x1b2, 0x1b4, 
    0x7, 0x17, 0x2, 0x2, 0x1b3, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b4, 
    0x3, 0x2, 0x2, 0x2, 0x1b4, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x1b5, 0x1b6, 0x5, 
    0x4c, 0x27, 0x2, 0x1b6, 0x1b7, 0x7, 0x20, 0x2, 0x2, 0x1b7, 0x71, 0x3, 
    0x2, 0x2, 0x2, 0x1b8, 0x1b9, 0x5, 0x4c, 0x27, 0x2, 0x1b9, 0x1ba, 0x7, 
    0x21, 0x2, 0x2, 0x1ba, 0x1bc, 0x5, 0x7a, 0x3e, 0x2, 0x1bb, 0x1bd, 0x7, 
    0x17, 0x2, 0x2, 0x1bc, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1bd, 0x3, 
    0x2, 0x2, 0x2, 0x1bd, 0x73, 0x3, 0x2, 0x2, 0x2, 0x1be, 0x1bf, 0x7, 0x39, 
    0x2, 0x2, 0x1bf, 0x75, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1c1, 0x7, 0x39, 
    0x2, 0x2, 0x1c1, 0x77, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1c3, 0x7, 0x39, 
    0x2, 0x2, 0x1c3, 0x79, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c5, 0x7, 0x39, 
    0x2, 0x2, 0x1c5, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1c7, 0x5, 0x4c, 
    0x27, 0x2, 0x1c7, 0x1c8, 0x7, 0x22, 0x2, 0x2, 0x1c8, 0x1c9, 0x7, 0x39, 
    0x2, 0x2, 0x1c9, 0x1ca, 0x7, 0x23, 0x2, 0x2, 0x1ca, 0x7d, 0x3, 0x2, 
    0x2, 0x2, 0x1cb, 0x1d1, 0x5, 0x80, 0x41, 0x2, 0x1cc, 0x1ce, 0x5, 0x68, 
    0x35, 0x2, 0x1cd, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1cf, 0x3, 0x2, 
    0x2, 0x2, 0x1cf, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1d0, 0x3, 0x2, 
    0x2, 0x2, 0x1d0, 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1cd, 0x3, 0x2, 
    0x2, 0x2, 0x1d1, 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1d4, 0x3, 0x2, 
    0x2, 0x2, 0x1d3, 0x1d5, 0x5, 0x94, 0x4b, 0x2, 0x1d4, 0x1d3, 0x3, 0x2, 
    0x2, 0x2, 0x1d4, 0x1d5, 0x3, 0x2, 0x2, 0x2, 0x1d5, 0x1d7, 0x3, 0x2, 
    0x2, 0x2, 0x1d6, 0x1d8, 0x5, 0x7c, 0x3f, 0x2, 0x1d7, 0x1d6, 0x3, 0x2, 
    0x2, 0x2, 0x1d7, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x1d8, 0x7f, 0x3, 0x2, 0x2, 
    0x2, 0x1d9, 0x1da, 0x7, 0x24, 0x2, 0x2, 0x1da, 0x1db, 0x5, 0x82, 0x42, 
    0x2, 0x1db, 0x81, 0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1dd, 0x7, 0x3c, 0x2, 
    0x2, 0x1dd, 0x1de, 0x7, 0x40, 0x2, 0x2, 0x1de, 0x1df, 0x7, 0x40, 0x2, 
    0x2, 0x1df, 0x1e0, 0x7, 0x40, 0x2, 0x2, 0x1e0, 0x1e1, 0x7, 0x3d, 0x2, 
    0x2, 0x1e1, 0x83, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1e8, 0x5, 0x86, 0x44, 
    0x2, 0x1e3, 0x1e5, 0x5, 0x68, 0x35, 0x2, 0x1e4, 0x1e3, 0x3, 0x2, 0x2, 
    0x2, 0x1e5, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1e4, 0x3, 0x2, 0x2, 
    0x2, 0x1e6, 0x1e7, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1e9, 0x3, 0x2, 0x2, 
    0x2, 0x1e8, 0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1e9, 0x3, 0x2, 0x2, 
    0x2, 0x1e9, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1ea, 0x1ec, 0x5, 0x94, 0x4b, 
    0x2, 0x1eb, 0x1ea, 0x3, 0x2, 0x2, 0x2, 0x1eb, 0x1ec, 0x3, 0x2, 0x2, 
    0x2, 0x1ec, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1ef, 0x5, 0x7c, 0x3f, 
    0x2, 0x1ee, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1ef, 0x3, 0x2, 0x2, 
    0x2, 0x1ef, 0x85, 0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1f1, 0x7, 0x25, 0x2, 
    0x2, 0x1f1, 0x1f2, 0x5, 0x88, 0x45, 0x2, 0x1f2, 0x87, 0x3, 0x2, 0x2, 
    0x2, 0x1f3, 0x1f4, 0x7, 0x3c, 0x2, 0x2, 0x1f4, 0x1f5, 0x7, 0x40, 0x2, 
    0x2, 0x1f5, 0x1f6, 0x7, 0x40, 0x2, 0x2, 0x1f6, 0x1f7, 0x7, 0x40, 0x2, 
    0x2, 0x1f7, 0x1f8, 0x7, 0x3d, 0x2, 0x2, 0x1f8, 0x1f9, 0x7, 0x3c, 0x2, 
    0x2, 0x1f9, 0x1fa, 0x7, 0x40, 0x2, 0x2, 0x1fa, 0x1fb, 0x7, 0x3d, 0x2, 
    0x2, 0x1fb, 0x89, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x202, 0x5, 0x8c, 0x47, 
    0x2, 0x1fd, 0x1ff, 0x5, 0x68, 0x35, 0x2, 0x1fe, 0x1fd, 0x3, 0x2, 0x2, 
    0x2, 0x1ff, 0x200, 0x3, 0x2, 0x2, 0x2, 0x200, 0x1fe, 0x3, 0x2, 0x2, 
    0x2, 0x200, 0x201, 0x3, 0x2, 0x2, 0x2, 0x201, 0x203, 0x3, 0x2, 0x2, 
    0x2, 0x202, 0x1fe, 0x3, 0x2, 0x2, 0x2, 0x202, 0x203, 0x3, 0x2, 0x2, 
    0x2, 0x203, 0x205, 0x3, 0x2, 0x2, 0x2, 0x204, 0x206, 0x5, 0x94, 0x4b, 
    0x2, 0x205, 0x204, 0x3, 0x2, 0x2, 0x2, 0x205, 0x206, 0x3, 0x2, 0x2, 
    0x2, 0x206, 0x208, 0x3, 0x2, 0x2, 0x2, 0x207, 0x209, 0x5, 0x7c, 0x3f, 
    0x2, 0x208, 0x207, 0x3, 0x2, 0x2, 0x2, 0x208, 0x209, 0x3, 0x2, 0x2, 
    0x2, 0x209, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x20b, 0x7, 0x26, 0x2, 
    0x2, 0x20b, 0x20c, 0x5, 0x8e, 0x48, 0x2, 0x20c, 0x8d, 0x3, 0x2, 0x2, 
    0x2, 0x20d, 0x20e, 0x7, 0x3c, 0x2, 0x2, 0x20e, 0x20f, 0x7, 0x40, 0x2, 
    0x2, 0x20f, 0x210, 0x7, 0x40, 0x2, 0x2, 0x210, 0x211, 0x7, 0x40, 0x2, 
    0x2, 0x211, 0x212, 0x7, 0x40, 0x2, 0x2, 0x212, 0x213, 0x7, 0x3d, 0x2, 
    0x2, 0x213, 0x214, 0x7, 0x3c, 0x2, 0x2, 0x214, 0x215, 0x7, 0x40, 0x2, 
    0x2, 0x215, 0x216, 0x7, 0x3d, 0x2, 0x2, 0x216, 0x8f, 0x3, 0x2, 0x2, 
    0x2, 0x217, 0x219, 0x5, 0x92, 0x4a, 0x2, 0x218, 0x21a, 0x5, 0x94, 0x4b, 
    0x2, 0x219, 0x218, 0x3, 0x2, 0x2, 0x2, 0x21a, 0x21b, 0x3, 0x2, 0x2, 
    0x2, 0x21b, 0x219, 0x3, 0x2, 0x2, 0x2, 0x21b, 0x21c, 0x3, 0x2, 0x2, 
    0x2, 0x21c, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x21d, 0x21f, 0x5, 0x98, 0x4d, 
    0x2, 0x21e, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x220, 0x3, 0x2, 0x2, 
    0x2, 0x220, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x220, 0x221, 0x3, 0x2, 0x2, 
    0x2, 0x221, 0x91, 0x3, 0x2, 0x2, 0x2, 0x222, 0x223, 0x7, 0x27, 0x2, 
    0x2, 0x223, 0x93, 0x3, 0x2, 0x2, 0x2, 0x224, 0x225, 0x5, 0x4c, 0x27, 
    0x2, 0x225, 0x226, 0x7, 0x28, 0x2, 0x2, 0x226, 0x227, 0x5, 0x62, 0x32, 
    0x2, 0x227, 0x228, 0x5, 0x96, 0x4c, 0x2, 0x228, 0x95, 0x3, 0x2, 0x2, 
    0x2, 0x229, 0x22b, 0x7, 0x3a, 0x2, 0x2, 0x22a, 0x22c, 0x9, 0x4, 0x2, 
    0x2, 0x22b, 0x22a, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x22d, 0x3, 0x2, 0x2, 
    0x2, 0x22d, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x22e, 0x3, 0x2, 0x2, 
    0x2, 0x22e, 0x235, 0x3, 0x2, 0x2, 0x2, 0x22f, 0x231, 0x7, 0x3f, 0x2, 
    0x2, 0x230, 0x232, 0x9, 0x4, 0x2, 0x2, 0x231, 0x230, 0x3, 0x2, 0x2, 
    0x2, 0x232, 0x233, 0x3, 0x2, 0x2, 0x2, 0x233, 0x231, 0x3, 0x2, 0x2, 
    0x2, 0x233, 0x234, 0x3, 0x2, 0x2, 0x2, 0x234, 0x236, 0x3, 0x2, 0x2, 
    0x2, 0x235, 0x22f, 0x3, 0x2, 0x2, 0x2, 0x235, 0x236, 0x3, 0x2, 0x2, 
    0x2, 0x236, 0x237, 0x3, 0x2, 0x2, 0x2, 0x237, 0x238, 0x7, 0x3b, 0x2, 
    0x2, 0x238, 0x97, 0x3, 0x2, 0x2, 0x2, 0x239, 0x23a, 0x5, 0x4c, 0x27, 
    0x2, 0x23a, 0x23b, 0x7, 0x22, 0x2, 0x2, 0x23b, 0x23c, 0x5, 0x9c, 0x4f, 
    0x2, 0x23c, 0x23d, 0x5, 0x9a, 0x4e, 0x2, 0x23d, 0x99, 0x3, 0x2, 0x2, 
    0x2, 0x23e, 0x243, 0x7, 0x23, 0x2, 0x2, 0x23f, 0x240, 0x7, 0x29, 0x2, 
    0x2, 0x240, 0x243, 0x9, 0x2, 0x2, 0x2, 0x241, 0x243, 0x7, 0x2a, 0x2, 
    0x2, 0x242, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x242, 0x23f, 0x3, 0x2, 0x2, 
    0x2, 0x242, 0x241, 0x3, 0x2, 0x2, 0x2, 0x243, 0x9b, 0x3, 0x2, 0x2, 0x2, 
    0x244, 0x245, 0x7, 0x39, 0x2, 0x2, 0x245, 0x9d, 0x3, 0x2, 0x2, 0x2, 
    0x246, 0x247, 0x5, 0xa0, 0x51, 0x2, 0x247, 0x249, 0x5, 0xa2, 0x52, 0x2, 
    0x248, 0x24a, 0x5, 0xa8, 0x55, 0x2, 0x249, 0x248, 0x3, 0x2, 0x2, 0x2, 
    0x249, 0x24a, 0x3, 0x2, 0x2, 0x2, 0x24a, 0x24c, 0x3, 0x2, 0x2, 0x2, 
    0x24b, 0x24d, 0x5, 0xac, 0x57, 0x2, 0x24c, 0x24b, 0x3, 0x2, 0x2, 0x2, 
    0x24d, 0x24e, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x24c, 0x3, 0x2, 0x2, 0x2, 
    0x24e, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x24f, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x250, 
    0x251, 0x7, 0x2b, 0x2, 0x2, 0x251, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x252, 
    0x253, 0x7, 0x2c, 0x2, 0x2, 0x253, 0x254, 0x5, 0xa4, 0x53, 0x2, 0x254, 
    0x257, 0x7, 0x2d, 0x2, 0x2, 0x255, 0x258, 0x7, 0x2e, 0x2, 0x2, 0x256, 
    0x258, 0x5, 0xa6, 0x54, 0x2, 0x257, 0x255, 0x3, 0x2, 0x2, 0x2, 0x257, 
    0x256, 0x3, 0x2, 0x2, 0x2, 0x258, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x259, 0x25a, 
    0x7, 0x39, 0x2, 0x2, 0x25a, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x25b, 0x25c, 
    0x7, 0x39, 0x2, 0x2, 0x25c, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x25d, 0x25e, 
    0x7, 0x2f, 0x2, 0x2, 0x25e, 0x25f, 0x5, 0xaa, 0x56, 0x2, 0x25f, 0xa9, 
    0x3, 0x2, 0x2, 0x2, 0x260, 0x262, 0x7, 0x3c, 0x2, 0x2, 0x261, 0x263, 
    0x7, 0x40, 0x2, 0x2, 0x262, 0x261, 0x3, 0x2, 0x2, 0x2, 0x263, 0x264, 
    0x3, 0x2, 0x2, 0x2, 0x264, 0x262, 0x3, 0x2, 0x2, 0x2, 0x264, 0x265, 
    0x3, 0x2, 0x2, 0x2, 0x265, 0x266, 0x3, 0x2, 0x2, 0x2, 0x266, 0x267, 
    0x7, 0x3d, 0x2, 0x2, 0x267, 0xab, 0x3, 0x2, 0x2, 0x2, 0x268, 0x269, 
    0x5, 0x4a, 0x26, 0x2, 0x269, 0x26b, 0x5, 0x4c, 0x27, 0x2, 0x26a, 0x26c, 
    0x5, 0xae, 0x58, 0x2, 0x26b, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x26b, 0x26c, 
    0x3, 0x2, 0x2, 0x2, 0x26c, 0x26f, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x26e, 
    0x7, 0x30, 0x2, 0x2, 0x26e, 0x270, 0x5, 0x62, 0x32, 0x2, 0x26f, 0x26d, 
    0x3, 0x2, 0x2, 0x2, 0x26f, 0x270, 0x3, 0x2, 0x2, 0x2, 0x270, 0x271, 
    0x3, 0x2, 0x2, 0x2, 0x271, 0x273, 0x5, 0xb0, 0x59, 0x2, 0x272, 0x274, 
    0x5, 0xb2, 0x5a, 0x2, 0x273, 0x272, 0x3, 0x2, 0x2, 0x2, 0x273, 0x274, 
    0x3, 0x2, 0x2, 0x2, 0x274, 0xad, 0x3, 0x2, 0x2, 0x2, 0x275, 0x276, 0x7, 
    0x3a, 0x2, 0x2, 0x276, 0x277, 0x7, 0x31, 0x2, 0x2, 0x277, 0x27f, 0x7, 
    0x3b, 0x2, 0x2, 0x278, 0x279, 0x7, 0x3a, 0x2, 0x2, 0x279, 0x27a, 0x7, 
    0x32, 0x2, 0x2, 0x27a, 0x27f, 0x7, 0x3b, 0x2, 0x2, 0x27b, 0x27c, 0x7, 
    0x3a, 0x2, 0x2, 0x27c, 0x27d, 0x7, 0x33, 0x2, 0x2, 0x27d, 0x27f, 0x7, 
    0x3b, 0x2, 0x2, 0x27e, 0x275, 0x3, 0x2, 0x2, 0x2, 0x27e, 0x278, 0x3, 
    0x2, 0x2, 0x2, 0x27e, 0x27b, 0x3, 0x2, 0x2, 0x2, 0x27f, 0xaf, 0x3, 0x2, 
    0x2, 0x2, 0x280, 0x284, 0x5, 0xb4, 0x5b, 0x2, 0x281, 0x284, 0x5, 0xb6, 
    0x5c, 0x2, 0x282, 0x284, 0x5, 0xb8, 0x5d, 0x2, 0x283, 0x280, 0x3, 0x2, 
    0x2, 0x2, 0x283, 0x281, 0x3, 0x2, 0x2, 0x2, 0x283, 0x282, 0x3, 0x2, 
    0x2, 0x2, 0x284, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x285, 0x287, 0x7, 0x34, 
    0x2, 0x2, 0x286, 0x288, 0x9, 0x3, 0x2, 0x2, 0x287, 0x286, 0x3, 0x2, 
    0x2, 0x2, 0x288, 0x289, 0x3, 0x2, 0x2, 0x2, 0x289, 0x287, 0x3, 0x2, 
    0x2, 0x2, 0x289, 0x28a, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x291, 0x3, 0x2, 
    0x2, 0x2, 0x28b, 0x28d, 0x7, 0x3f, 0x2, 0x2, 0x28c, 0x28e, 0x9, 0x3, 
    0x2, 0x2, 0x28d, 0x28c, 0x3, 0x2, 0x2, 0x2, 0x28e, 0x28f, 0x3, 0x2, 
    0x2, 0x2, 0x28f, 0x28d, 0x3, 0x2, 0x2, 0x2, 0x28f, 0x290, 0x3, 0x2, 
    0x2, 0x2, 0x290, 0x292, 0x3, 0x2, 0x2, 0x2, 0x291, 0x28b, 0x3, 0x2, 
    0x2, 0x2, 0x291, 0x292, 0x3, 0x2, 0x2, 0x2, 0x292, 0xb3, 0x3, 0x2, 0x2, 
    0x2, 0x293, 0x294, 0x7, 0x35, 0x2, 0x2, 0x294, 0x295, 0x5, 0xba, 0x5e, 
    0x2, 0x295, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x296, 0x297, 0x7, 0x36, 0x2, 
    0x2, 0x297, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x298, 0x299, 0x7, 0x37, 0x2, 
    0x2, 0x299, 0x29a, 0x5, 0xba, 0x5e, 0x2, 0x29a, 0xb9, 0x3, 0x2, 0x2, 
    0x2, 0x29b, 0x29c, 0x7, 0x39, 0x2, 0x2, 0x29c, 0xbb, 0x3, 0x2, 0x2, 
    0x2, 0x35, 0xbf, 0xcc, 0xcf, 0xd2, 0xd5, 0xeb, 0x133, 0x14e, 0x15a, 
    0x164, 0x170, 0x178, 0x180, 0x191, 0x193, 0x196, 0x199, 0x1a2, 0x1aa, 
    0x1b3, 0x1bc, 0x1cf, 0x1d1, 0x1d4, 0x1d7, 0x1e6, 0x1e8, 0x1eb, 0x1ee, 
    0x200, 0x202, 0x205, 0x208, 0x21b, 0x220, 0x22d, 0x233, 0x235, 0x242, 
    0x249, 0x24e, 0x257, 0x264, 0x26b, 0x26f, 0x273, 0x27e, 0x283, 0x289, 
    0x28f, 0x291, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

HistoryFileGrammarParser::Initializer HistoryFileGrammarParser::_init;
