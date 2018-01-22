
// Generated from History.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpptest {


class  HistoryParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, T__43 = 44, 
    T__44 = 45, T__45 = 46, T__46 = 47, T__47 = 48, T__48 = 49, T__49 = 50, 
    T__50 = 51, T__51 = 52, T__52 = 53, DIGIT = 54, NUMBER = 55, LPAREN = 56, 
    RPAREN = 57, LCROCH = 58, RCROCH = 59, SEAT = 60, COLON = 61, MOT = 62, 
    WS = 63
  };

  enum {
    RuleFichier = 0, RuleHand = 1, RuleHandHeader = 2, RuleJeu = 3, RuleFirstLine = 4, 
    RuleGameInfo = 5, RuleTypeOfGame = 6, RuleNameOfGame = 7, RuleBuyin = 8, 
    RuleBuyValue = 9, RuleRakeBuyValue = 10, RuleLevel = 11, RuleLevelValue = 12, 
    RuleHandId = 13, RuleHandIdValue = 14, RuleTypePlay = 15, RuleAnteValue = 16, 
    RuleSmallblindValue = 17, RuleBigblindValue = 18, RuleDate = 19, RuleAnnee = 20, 
    RuleMois = 21, RuleJour = 22, RuleHeure = 23, RuleMinutes = 24, RuleSecondes = 25, 
    RuleSecondLine = 26, RuleTableInfo = 27, RuleIdTable = 28, RuleDiez = 29, 
    RuleFormat = 30, RuleNumberOfPlayer = 31, RuleWhoIsButton = 32, RuleButtonId = 33, 
    RulePositions = 34, RuleRecapPlace = 35, RuleSiege = 36, RulePseudo = 37, 
    RuleTapis = 38, RuleAnteblindSection = 39, RuleAnteblindHeader = 40, 
    RuleAnteligne = 41, RuleAnteSomme = 42, RuleSmallblindligne = 43, RuleSmallblindSomme = 44, 
    RuleBigblindligne = 45, RuleBigblindSomme = 46, RuleCardligne = 47, 
    RuleCartePerso = 48, RulePreflopSection = 49, RulePreflopHeader = 50, 
    RulePlayAction = 51, RuleRaiseAction = 52, RuleFoldAction = 53, RuleBetAction = 54, 
    RuleCheckAction = 55, RuleCallAction = 56, RuleInitialRaiseValue = 57, 
    RuleFinalraiseValue = 58, RuleBetValue = 59, RuleCallValue = 60, RuleWin = 61, 
    RuleFlopSection = 62, RuleFlopHeader = 63, RuleFlopcards = 64, RuleTurnSection = 65, 
    RuleTurnHeader = 66, RuleTurnCards = 67, RuleRiverSection = 68, RuleRiverHeader = 69, 
    RuleRiverCards = 70, RuleShowdownSection = 71, RuleShowdownHeader = 72, 
    RuleCombinaisonLigne = 73, RuleCombinaison = 74, RuleResultLigne = 75, 
    RuleWhereCollected = 76, RuleShowdownValue = 77, RuleSummarySection = 78, 
    RuleSummaryHeader = 79, RulePotSummary = 80, RulePotValue = 81, RuleRakeValue = 82, 
    RuleBoardline = 83, RuleBoardCards = 84, RulePlayerSummary = 85, RulePosition = 86, 
    RuleResult = 87, RuleWithWhat = 88, RuleShowdownWin = 89, RuleShowdownLose = 90, 
    RuleJustWin = 91, RuleWinValue = 92
  };

  HistoryParser(antlr4::TokenStream *input);
  ~HistoryParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class FichierContext;
  class HandContext;
  class HandHeaderContext;
  class JeuContext;
  class FirstLineContext;
  class GameInfoContext;
  class TypeOfGameContext;
  class NameOfGameContext;
  class BuyinContext;
  class BuyValueContext;
  class RakeBuyValueContext;
  class LevelContext;
  class LevelValueContext;
  class HandIdContext;
  class HandIdValueContext;
  class TypePlayContext;
  class AnteValueContext;
  class SmallblindValueContext;
  class BigblindValueContext;
  class DateContext;
  class AnneeContext;
  class MoisContext;
  class JourContext;
  class HeureContext;
  class MinutesContext;
  class SecondesContext;
  class SecondLineContext;
  class TableInfoContext;
  class IdTableContext;
  class DiezContext;
  class FormatContext;
  class NumberOfPlayerContext;
  class WhoIsButtonContext;
  class ButtonIdContext;
  class PositionsContext;
  class RecapPlaceContext;
  class SiegeContext;
  class PseudoContext;
  class TapisContext;
  class AnteblindSectionContext;
  class AnteblindHeaderContext;
  class AnteligneContext;
  class AnteSommeContext;
  class SmallblindligneContext;
  class SmallblindSommeContext;
  class BigblindligneContext;
  class BigblindSommeContext;
  class CardligneContext;
  class CartePersoContext;
  class PreflopSectionContext;
  class PreflopHeaderContext;
  class PlayActionContext;
  class RaiseActionContext;
  class FoldActionContext;
  class BetActionContext;
  class CheckActionContext;
  class CallActionContext;
  class InitialRaiseValueContext;
  class FinalraiseValueContext;
  class BetValueContext;
  class CallValueContext;
  class WinContext;
  class FlopSectionContext;
  class FlopHeaderContext;
  class FlopcardsContext;
  class TurnSectionContext;
  class TurnHeaderContext;
  class TurnCardsContext;
  class RiverSectionContext;
  class RiverHeaderContext;
  class RiverCardsContext;
  class ShowdownSectionContext;
  class ShowdownHeaderContext;
  class CombinaisonLigneContext;
  class CombinaisonContext;
  class ResultLigneContext;
  class WhereCollectedContext;
  class ShowdownValueContext;
  class SummarySectionContext;
  class SummaryHeaderContext;
  class PotSummaryContext;
  class PotValueContext;
  class RakeValueContext;
  class BoardlineContext;
  class BoardCardsContext;
  class PlayerSummaryContext;
  class PositionContext;
  class ResultContext;
  class WithWhatContext;
  class ShowdownWinContext;
  class ShowdownLoseContext;
  class JustWinContext;
  class WinValueContext; 

  class  FichierContext : public antlr4::ParserRuleContext {
  public:
    FichierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<HandContext *> hand();
    HandContext* hand(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FichierContext* fichier();

  class  HandContext : public antlr4::ParserRuleContext {
  public:
    HandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HandHeaderContext *handHeader();
    PositionsContext *positions();
    JeuContext *jeu();
    SummarySectionContext *summarySection();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HandContext* hand();

  class  HandHeaderContext : public antlr4::ParserRuleContext {
  public:
    HandHeaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FirstLineContext *firstLine();
    SecondLineContext *secondLine();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HandHeaderContext* handHeader();

  class  JeuContext : public antlr4::ParserRuleContext {
  public:
    JeuContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AnteblindSectionContext *anteblindSection();
    PreflopSectionContext *preflopSection();
    FlopSectionContext *flopSection();
    TurnSectionContext *turnSection();
    RiverSectionContext *riverSection();
    ShowdownSectionContext *showdownSection();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JeuContext* jeu();

  class  FirstLineContext : public antlr4::ParserRuleContext {
  public:
    FirstLineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GameInfoContext *gameInfo();
    HandIdContext *handId();
    TypePlayContext *typePlay();
    DateContext *date();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FirstLineContext* firstLine();

  class  GameInfoContext : public antlr4::ParserRuleContext {
  public:
    GameInfoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeOfGameContext *typeOfGame();
    NameOfGameContext *nameOfGame();
    BuyinContext *buyin();
    LevelContext *level();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GameInfoContext* gameInfo();

  class  TypeOfGameContext : public antlr4::ParserRuleContext {
  public:
    TypeOfGameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeOfGameContext* typeOfGame();

  class  NameOfGameContext : public antlr4::ParserRuleContext {
  public:
    NameOfGameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> MOT();
    antlr4::tree::TerminalNode* MOT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NameOfGameContext* nameOfGame();

  class  BuyinContext : public antlr4::ParserRuleContext {
  public:
    BuyinContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BuyValueContext *buyValue();
    RakeBuyValueContext *rakeBuyValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BuyinContext* buyin();

  class  BuyValueContext : public antlr4::ParserRuleContext {
  public:
    BuyValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *DIGIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BuyValueContext* buyValue();

  class  RakeBuyValueContext : public antlr4::ParserRuleContext {
  public:
    RakeBuyValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *DIGIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RakeBuyValueContext* rakeBuyValue();

  class  LevelContext : public antlr4::ParserRuleContext {
  public:
    LevelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LevelValueContext *levelValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LevelContext* level();

  class  LevelValueContext : public antlr4::ParserRuleContext {
  public:
    LevelValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *DIGIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LevelValueContext* levelValue();

  class  HandIdContext : public antlr4::ParserRuleContext {
  public:
    HandIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HandIdValueContext *handIdValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HandIdContext* handId();

  class  HandIdValueContext : public antlr4::ParserRuleContext {
  public:
    HandIdValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HandIdValueContext* handIdValue();

  class  TypePlayContext : public antlr4::ParserRuleContext {
  public:
    TypePlayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    AnteValueContext *anteValue();
    SmallblindValueContext *smallblindValue();
    BigblindValueContext *bigblindValue();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypePlayContext* typePlay();

  class  AnteValueContext : public antlr4::ParserRuleContext {
  public:
    AnteValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *DIGIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnteValueContext* anteValue();

  class  SmallblindValueContext : public antlr4::ParserRuleContext {
  public:
    SmallblindValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *DIGIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SmallblindValueContext* smallblindValue();

  class  BigblindValueContext : public antlr4::ParserRuleContext {
  public:
    BigblindValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *DIGIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BigblindValueContext* bigblindValue();

  class  DateContext : public antlr4::ParserRuleContext {
  public:
    DateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AnneeContext *annee();
    MoisContext *mois();
    JourContext *jour();
    HeureContext *heure();
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    MinutesContext *minutes();
    SecondesContext *secondes();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DateContext* date();

  class  AnneeContext : public antlr4::ParserRuleContext {
  public:
    AnneeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnneeContext* annee();

  class  MoisContext : public antlr4::ParserRuleContext {
  public:
    MoisContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MoisContext* mois();

  class  JourContext : public antlr4::ParserRuleContext {
  public:
    JourContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JourContext* jour();

  class  HeureContext : public antlr4::ParserRuleContext {
  public:
    HeureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HeureContext* heure();

  class  MinutesContext : public antlr4::ParserRuleContext {
  public:
    MinutesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MinutesContext* minutes();

  class  SecondesContext : public antlr4::ParserRuleContext {
  public:
    SecondesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SecondesContext* secondes();

  class  SecondLineContext : public antlr4::ParserRuleContext {
  public:
    SecondLineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableInfoContext *tableInfo();
    FormatContext *format();
    WhoIsButtonContext *whoIsButton();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SecondLineContext* secondLine();

  class  TableInfoContext : public antlr4::ParserRuleContext {
  public:
    TableInfoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    IdTableContext *idTable();
    antlr4::tree::TerminalNode *RPAREN();
    DiezContext *diez();
    std::vector<antlr4::tree::TerminalNode *> MOT();
    antlr4::tree::TerminalNode* MOT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableInfoContext* tableInfo();

  class  IdTableContext : public antlr4::ParserRuleContext {
  public:
    IdTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdTableContext* idTable();

  class  DiezContext : public antlr4::ParserRuleContext {
  public:
    DiezContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DiezContext* diez();

  class  FormatContext : public antlr4::ParserRuleContext {
  public:
    FormatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberOfPlayerContext *numberOfPlayer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FormatContext* format();

  class  NumberOfPlayerContext : public antlr4::ParserRuleContext {
  public:
    NumberOfPlayerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberOfPlayerContext* numberOfPlayer();

  class  WhoIsButtonContext : public antlr4::ParserRuleContext {
  public:
    WhoIsButtonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ButtonIdContext *buttonId();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhoIsButtonContext* whoIsButton();

  class  ButtonIdContext : public antlr4::ParserRuleContext {
  public:
    ButtonIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIGIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ButtonIdContext* buttonId();

  class  PositionsContext : public antlr4::ParserRuleContext {
  public:
    PositionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RecapPlaceContext *> recapPlace();
    RecapPlaceContext* recapPlace(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PositionsContext* positions();

  class  RecapPlaceContext : public antlr4::ParserRuleContext {
  public:
    RecapPlaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SiegeContext *siege();
    PseudoContext *pseudo();
    TapisContext *tapis();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RecapPlaceContext* recapPlace();

  class  SiegeContext : public antlr4::ParserRuleContext {
  public:
    SiegeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEAT();
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SiegeContext* siege();

  class  PseudoContext : public antlr4::ParserRuleContext {
  public:
    PseudoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> MOT();
    antlr4::tree::TerminalNode* MOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PseudoContext* pseudo();

  class  TapisContext : public antlr4::ParserRuleContext {
  public:
    TapisContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TapisContext* tapis();

  class  AnteblindSectionContext : public antlr4::ParserRuleContext {
  public:
    AnteblindSectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AnteblindHeaderContext *anteblindHeader();
    SmallblindligneContext *smallblindligne();
    BigblindligneContext *bigblindligne();
    CardligneContext *cardligne();
    std::vector<AnteligneContext *> anteligne();
    AnteligneContext* anteligne(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnteblindSectionContext* anteblindSection();

  class  AnteblindHeaderContext : public antlr4::ParserRuleContext {
  public:
    AnteblindHeaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnteblindHeaderContext* anteblindHeader();

  class  AnteligneContext : public antlr4::ParserRuleContext {
  public:
    AnteligneContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PseudoContext *pseudo();
    AnteSommeContext *anteSomme();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnteligneContext* anteligne();

  class  AnteSommeContext : public antlr4::ParserRuleContext {
  public:
    AnteSommeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *DIGIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnteSommeContext* anteSomme();

  class  SmallblindligneContext : public antlr4::ParserRuleContext {
  public:
    SmallblindligneContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PseudoContext *pseudo();
    SmallblindSommeContext *smallblindSomme();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SmallblindligneContext* smallblindligne();

  class  SmallblindSommeContext : public antlr4::ParserRuleContext {
  public:
    SmallblindSommeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SmallblindSommeContext* smallblindSomme();

  class  BigblindligneContext : public antlr4::ParserRuleContext {
  public:
    BigblindligneContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PseudoContext *pseudo();
    BigblindSommeContext *bigblindSomme();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BigblindligneContext* bigblindligne();

  class  BigblindSommeContext : public antlr4::ParserRuleContext {
  public:
    BigblindSommeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BigblindSommeContext* bigblindSomme();

  class  CardligneContext : public antlr4::ParserRuleContext {
  public:
    CardligneContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PseudoContext *pseudo();
    CartePersoContext *cartePerso();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CardligneContext* cardligne();

  class  CartePersoContext : public antlr4::ParserRuleContext {
  public:
    CartePersoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LCROCH();
    std::vector<antlr4::tree::TerminalNode *> MOT();
    antlr4::tree::TerminalNode* MOT(size_t i);
    antlr4::tree::TerminalNode *RCROCH();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CartePersoContext* cartePerso();

  class  PreflopSectionContext : public antlr4::ParserRuleContext {
  public:
    PreflopSectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PreflopHeaderContext *preflopHeader();
    CombinaisonLigneContext *combinaisonLigne();
    WinContext *win();
    std::vector<PlayActionContext *> playAction();
    PlayActionContext* playAction(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PreflopSectionContext* preflopSection();

  class  PreflopHeaderContext : public antlr4::ParserRuleContext {
  public:
    PreflopHeaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PreflopHeaderContext* preflopHeader();

  class  PlayActionContext : public antlr4::ParserRuleContext {
  public:
    PlayActionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RaiseActionContext *raiseAction();
    FoldActionContext *foldAction();
    BetActionContext *betAction();
    CheckActionContext *checkAction();
    CallActionContext *callAction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlayActionContext* playAction();

  class  RaiseActionContext : public antlr4::ParserRuleContext {
  public:
    RaiseActionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PseudoContext *pseudo();
    InitialRaiseValueContext *initialRaiseValue();
    FinalraiseValueContext *finalraiseValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RaiseActionContext* raiseAction();

  class  FoldActionContext : public antlr4::ParserRuleContext {
  public:
    FoldActionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PseudoContext *pseudo();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FoldActionContext* foldAction();

  class  BetActionContext : public antlr4::ParserRuleContext {
  public:
    BetActionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PseudoContext *pseudo();
    BetValueContext *betValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BetActionContext* betAction();

  class  CheckActionContext : public antlr4::ParserRuleContext {
  public:
    CheckActionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PseudoContext *pseudo();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CheckActionContext* checkAction();

  class  CallActionContext : public antlr4::ParserRuleContext {
  public:
    CallActionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PseudoContext *pseudo();
    CallValueContext *callValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CallActionContext* callAction();

  class  InitialRaiseValueContext : public antlr4::ParserRuleContext {
  public:
    InitialRaiseValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitialRaiseValueContext* initialRaiseValue();

  class  FinalraiseValueContext : public antlr4::ParserRuleContext {
  public:
    FinalraiseValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FinalraiseValueContext* finalraiseValue();

  class  BetValueContext : public antlr4::ParserRuleContext {
  public:
    BetValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BetValueContext* betValue();

  class  CallValueContext : public antlr4::ParserRuleContext {
  public:
    CallValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CallValueContext* callValue();

  class  WinContext : public antlr4::ParserRuleContext {
  public:
    WinContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PseudoContext *pseudo();
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WinContext* win();

  class  FlopSectionContext : public antlr4::ParserRuleContext {
  public:
    FlopSectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FlopHeaderContext *flopHeader();
    CombinaisonLigneContext *combinaisonLigne();
    WinContext *win();
    std::vector<PlayActionContext *> playAction();
    PlayActionContext* playAction(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FlopSectionContext* flopSection();

  class  FlopHeaderContext : public antlr4::ParserRuleContext {
  public:
    FlopHeaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FlopcardsContext *flopcards();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FlopHeaderContext* flopHeader();

  class  FlopcardsContext : public antlr4::ParserRuleContext {
  public:
    FlopcardsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LCROCH();
    std::vector<antlr4::tree::TerminalNode *> MOT();
    antlr4::tree::TerminalNode* MOT(size_t i);
    antlr4::tree::TerminalNode *RCROCH();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FlopcardsContext* flopcards();

  class  TurnSectionContext : public antlr4::ParserRuleContext {
  public:
    TurnSectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TurnHeaderContext *turnHeader();
    CombinaisonLigneContext *combinaisonLigne();
    WinContext *win();
    std::vector<PlayActionContext *> playAction();
    PlayActionContext* playAction(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TurnSectionContext* turnSection();

  class  TurnHeaderContext : public antlr4::ParserRuleContext {
  public:
    TurnHeaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TurnCardsContext *turnCards();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TurnHeaderContext* turnHeader();

  class  TurnCardsContext : public antlr4::ParserRuleContext {
  public:
    TurnCardsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LCROCH();
    antlr4::tree::TerminalNode* LCROCH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MOT();
    antlr4::tree::TerminalNode* MOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RCROCH();
    antlr4::tree::TerminalNode* RCROCH(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TurnCardsContext* turnCards();

  class  RiverSectionContext : public antlr4::ParserRuleContext {
  public:
    RiverSectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RiverHeaderContext *riverHeader();
    CombinaisonLigneContext *combinaisonLigne();
    WinContext *win();
    std::vector<PlayActionContext *> playAction();
    PlayActionContext* playAction(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RiverSectionContext* riverSection();

  class  RiverHeaderContext : public antlr4::ParserRuleContext {
  public:
    RiverHeaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RiverCardsContext *riverCards();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RiverHeaderContext* riverHeader();

  class  RiverCardsContext : public antlr4::ParserRuleContext {
  public:
    RiverCardsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LCROCH();
    antlr4::tree::TerminalNode* LCROCH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MOT();
    antlr4::tree::TerminalNode* MOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RCROCH();
    antlr4::tree::TerminalNode* RCROCH(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RiverCardsContext* riverCards();

  class  ShowdownSectionContext : public antlr4::ParserRuleContext {
  public:
    ShowdownSectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ShowdownHeaderContext *showdownHeader();
    std::vector<CombinaisonLigneContext *> combinaisonLigne();
    CombinaisonLigneContext* combinaisonLigne(size_t i);
    std::vector<ResultLigneContext *> resultLigne();
    ResultLigneContext* resultLigne(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowdownSectionContext* showdownSection();

  class  ShowdownHeaderContext : public antlr4::ParserRuleContext {
  public:
    ShowdownHeaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowdownHeaderContext* showdownHeader();

  class  CombinaisonLigneContext : public antlr4::ParserRuleContext {
  public:
    CombinaisonLigneContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PseudoContext *pseudo();
    CartePersoContext *cartePerso();
    CombinaisonContext *combinaison();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CombinaisonLigneContext* combinaisonLigne();

  class  CombinaisonContext : public antlr4::ParserRuleContext {
  public:
    CombinaisonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *COLON();
    std::vector<antlr4::tree::TerminalNode *> MOT();
    antlr4::tree::TerminalNode* MOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIGIT();
    antlr4::tree::TerminalNode* DIGIT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CombinaisonContext* combinaison();

  class  ResultLigneContext : public antlr4::ParserRuleContext {
  public:
    ResultLigneContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PseudoContext *pseudo();
    ShowdownValueContext *showdownValue();
    WhereCollectedContext *whereCollected();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResultLigneContext* resultLigne();

  class  WhereCollectedContext : public antlr4::ParserRuleContext {
  public:
    WhereCollectedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *DIGIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhereCollectedContext* whereCollected();

  class  ShowdownValueContext : public antlr4::ParserRuleContext {
  public:
    ShowdownValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowdownValueContext* showdownValue();

  class  SummarySectionContext : public antlr4::ParserRuleContext {
  public:
    SummarySectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SummaryHeaderContext *summaryHeader();
    PotSummaryContext *potSummary();
    BoardlineContext *boardline();
    std::vector<PlayerSummaryContext *> playerSummary();
    PlayerSummaryContext* playerSummary(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SummarySectionContext* summarySection();

  class  SummaryHeaderContext : public antlr4::ParserRuleContext {
  public:
    SummaryHeaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SummaryHeaderContext* summaryHeader();

  class  PotSummaryContext : public antlr4::ParserRuleContext {
  public:
    PotSummaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PotValueContext *potValue();
    RakeValueContext *rakeValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PotSummaryContext* potSummary();

  class  PotValueContext : public antlr4::ParserRuleContext {
  public:
    PotValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PotValueContext* potValue();

  class  RakeValueContext : public antlr4::ParserRuleContext {
  public:
    RakeValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RakeValueContext* rakeValue();

  class  BoardlineContext : public antlr4::ParserRuleContext {
  public:
    BoardlineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BoardCardsContext *boardCards();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BoardlineContext* boardline();

  class  BoardCardsContext : public antlr4::ParserRuleContext {
  public:
    BoardCardsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LCROCH();
    antlr4::tree::TerminalNode *RCROCH();
    std::vector<antlr4::tree::TerminalNode *> MOT();
    antlr4::tree::TerminalNode* MOT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BoardCardsContext* boardCards();

  class  PlayerSummaryContext : public antlr4::ParserRuleContext {
  public:
    PlayerSummaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SiegeContext *siege();
    PseudoContext *pseudo();
    ResultContext *result();
    PositionContext *position();
    CartePersoContext *cartePerso();
    WithWhatContext *withWhat();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlayerSummaryContext* playerSummary();

  class  PositionContext : public antlr4::ParserRuleContext {
  public:
    PositionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PositionContext* position();

  class  ResultContext : public antlr4::ParserRuleContext {
  public:
    ResultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ShowdownWinContext *showdownWin();
    ShowdownLoseContext *showdownLose();
    JustWinContext *justWin();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResultContext* result();

  class  WithWhatContext : public antlr4::ParserRuleContext {
  public:
    WithWhatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    std::vector<antlr4::tree::TerminalNode *> MOT();
    antlr4::tree::TerminalNode* MOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WithWhatContext* withWhat();

  class  ShowdownWinContext : public antlr4::ParserRuleContext {
  public:
    ShowdownWinContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WinValueContext *winValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowdownWinContext* showdownWin();

  class  ShowdownLoseContext : public antlr4::ParserRuleContext {
  public:
    ShowdownLoseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowdownLoseContext* showdownLose();

  class  JustWinContext : public antlr4::ParserRuleContext {
  public:
    JustWinContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WinValueContext *winValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JustWinContext* justWin();

  class  WinValueContext : public antlr4::ParserRuleContext {
  public:
    WinValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WinValueContext* winValue();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace antlrcpptest
