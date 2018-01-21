
// Generated from HistoryFileGrammar.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "HistoryFileGrammarParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by HistoryFileGrammarParser.
 */
class  HistoryFileGrammarListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterFichier(HistoryFileGrammarParser::FichierContext *ctx) = 0;
  virtual void exitFichier(HistoryFileGrammarParser::FichierContext *ctx) = 0;

  virtual void enterHand(HistoryFileGrammarParser::HandContext *ctx) = 0;
  virtual void exitHand(HistoryFileGrammarParser::HandContext *ctx) = 0;

  virtual void enterHandHeader(HistoryFileGrammarParser::HandHeaderContext *ctx) = 0;
  virtual void exitHandHeader(HistoryFileGrammarParser::HandHeaderContext *ctx) = 0;

  virtual void enterJeu(HistoryFileGrammarParser::JeuContext *ctx) = 0;
  virtual void exitJeu(HistoryFileGrammarParser::JeuContext *ctx) = 0;

  virtual void enterFirstLine(HistoryFileGrammarParser::FirstLineContext *ctx) = 0;
  virtual void exitFirstLine(HistoryFileGrammarParser::FirstLineContext *ctx) = 0;

  virtual void enterGameInfo(HistoryFileGrammarParser::GameInfoContext *ctx) = 0;
  virtual void exitGameInfo(HistoryFileGrammarParser::GameInfoContext *ctx) = 0;

  virtual void enterTypeOfGame(HistoryFileGrammarParser::TypeOfGameContext *ctx) = 0;
  virtual void exitTypeOfGame(HistoryFileGrammarParser::TypeOfGameContext *ctx) = 0;

  virtual void enterNameOfGame(HistoryFileGrammarParser::NameOfGameContext *ctx) = 0;
  virtual void exitNameOfGame(HistoryFileGrammarParser::NameOfGameContext *ctx) = 0;

  virtual void enterBuyin(HistoryFileGrammarParser::BuyinContext *ctx) = 0;
  virtual void exitBuyin(HistoryFileGrammarParser::BuyinContext *ctx) = 0;

  virtual void enterBuyValue(HistoryFileGrammarParser::BuyValueContext *ctx) = 0;
  virtual void exitBuyValue(HistoryFileGrammarParser::BuyValueContext *ctx) = 0;

  virtual void enterRakeBuyValue(HistoryFileGrammarParser::RakeBuyValueContext *ctx) = 0;
  virtual void exitRakeBuyValue(HistoryFileGrammarParser::RakeBuyValueContext *ctx) = 0;

  virtual void enterLevel(HistoryFileGrammarParser::LevelContext *ctx) = 0;
  virtual void exitLevel(HistoryFileGrammarParser::LevelContext *ctx) = 0;

  virtual void enterLevelValue(HistoryFileGrammarParser::LevelValueContext *ctx) = 0;
  virtual void exitLevelValue(HistoryFileGrammarParser::LevelValueContext *ctx) = 0;

  virtual void enterHandId(HistoryFileGrammarParser::HandIdContext *ctx) = 0;
  virtual void exitHandId(HistoryFileGrammarParser::HandIdContext *ctx) = 0;

  virtual void enterHandIdValue(HistoryFileGrammarParser::HandIdValueContext *ctx) = 0;
  virtual void exitHandIdValue(HistoryFileGrammarParser::HandIdValueContext *ctx) = 0;

  virtual void enterTypePlay(HistoryFileGrammarParser::TypePlayContext *ctx) = 0;
  virtual void exitTypePlay(HistoryFileGrammarParser::TypePlayContext *ctx) = 0;

  virtual void enterAnteValue(HistoryFileGrammarParser::AnteValueContext *ctx) = 0;
  virtual void exitAnteValue(HistoryFileGrammarParser::AnteValueContext *ctx) = 0;

  virtual void enterSmallblindValue(HistoryFileGrammarParser::SmallblindValueContext *ctx) = 0;
  virtual void exitSmallblindValue(HistoryFileGrammarParser::SmallblindValueContext *ctx) = 0;

  virtual void enterBigblindValue(HistoryFileGrammarParser::BigblindValueContext *ctx) = 0;
  virtual void exitBigblindValue(HistoryFileGrammarParser::BigblindValueContext *ctx) = 0;

  virtual void enterDate(HistoryFileGrammarParser::DateContext *ctx) = 0;
  virtual void exitDate(HistoryFileGrammarParser::DateContext *ctx) = 0;

  virtual void enterAnnee(HistoryFileGrammarParser::AnneeContext *ctx) = 0;
  virtual void exitAnnee(HistoryFileGrammarParser::AnneeContext *ctx) = 0;

  virtual void enterMois(HistoryFileGrammarParser::MoisContext *ctx) = 0;
  virtual void exitMois(HistoryFileGrammarParser::MoisContext *ctx) = 0;

  virtual void enterJour(HistoryFileGrammarParser::JourContext *ctx) = 0;
  virtual void exitJour(HistoryFileGrammarParser::JourContext *ctx) = 0;

  virtual void enterHeure(HistoryFileGrammarParser::HeureContext *ctx) = 0;
  virtual void exitHeure(HistoryFileGrammarParser::HeureContext *ctx) = 0;

  virtual void enterMinutes(HistoryFileGrammarParser::MinutesContext *ctx) = 0;
  virtual void exitMinutes(HistoryFileGrammarParser::MinutesContext *ctx) = 0;

  virtual void enterSecondes(HistoryFileGrammarParser::SecondesContext *ctx) = 0;
  virtual void exitSecondes(HistoryFileGrammarParser::SecondesContext *ctx) = 0;

  virtual void enterSecondLine(HistoryFileGrammarParser::SecondLineContext *ctx) = 0;
  virtual void exitSecondLine(HistoryFileGrammarParser::SecondLineContext *ctx) = 0;

  virtual void enterTableInfo(HistoryFileGrammarParser::TableInfoContext *ctx) = 0;
  virtual void exitTableInfo(HistoryFileGrammarParser::TableInfoContext *ctx) = 0;

  virtual void enterIdTable(HistoryFileGrammarParser::IdTableContext *ctx) = 0;
  virtual void exitIdTable(HistoryFileGrammarParser::IdTableContext *ctx) = 0;

  virtual void enterDiez(HistoryFileGrammarParser::DiezContext *ctx) = 0;
  virtual void exitDiez(HistoryFileGrammarParser::DiezContext *ctx) = 0;

  virtual void enterFormat(HistoryFileGrammarParser::FormatContext *ctx) = 0;
  virtual void exitFormat(HistoryFileGrammarParser::FormatContext *ctx) = 0;

  virtual void enterNumberOfPlayer(HistoryFileGrammarParser::NumberOfPlayerContext *ctx) = 0;
  virtual void exitNumberOfPlayer(HistoryFileGrammarParser::NumberOfPlayerContext *ctx) = 0;

  virtual void enterWhoIsButton(HistoryFileGrammarParser::WhoIsButtonContext *ctx) = 0;
  virtual void exitWhoIsButton(HistoryFileGrammarParser::WhoIsButtonContext *ctx) = 0;

  virtual void enterButtonId(HistoryFileGrammarParser::ButtonIdContext *ctx) = 0;
  virtual void exitButtonId(HistoryFileGrammarParser::ButtonIdContext *ctx) = 0;

  virtual void enterPositions(HistoryFileGrammarParser::PositionsContext *ctx) = 0;
  virtual void exitPositions(HistoryFileGrammarParser::PositionsContext *ctx) = 0;

  virtual void enterRecapPlace(HistoryFileGrammarParser::RecapPlaceContext *ctx) = 0;
  virtual void exitRecapPlace(HistoryFileGrammarParser::RecapPlaceContext *ctx) = 0;

  virtual void enterSiege(HistoryFileGrammarParser::SiegeContext *ctx) = 0;
  virtual void exitSiege(HistoryFileGrammarParser::SiegeContext *ctx) = 0;

  virtual void enterPseudo(HistoryFileGrammarParser::PseudoContext *ctx) = 0;
  virtual void exitPseudo(HistoryFileGrammarParser::PseudoContext *ctx) = 0;

  virtual void enterTapis(HistoryFileGrammarParser::TapisContext *ctx) = 0;
  virtual void exitTapis(HistoryFileGrammarParser::TapisContext *ctx) = 0;

  virtual void enterAnteblindSection(HistoryFileGrammarParser::AnteblindSectionContext *ctx) = 0;
  virtual void exitAnteblindSection(HistoryFileGrammarParser::AnteblindSectionContext *ctx) = 0;

  virtual void enterAnteblindHeader(HistoryFileGrammarParser::AnteblindHeaderContext *ctx) = 0;
  virtual void exitAnteblindHeader(HistoryFileGrammarParser::AnteblindHeaderContext *ctx) = 0;

  virtual void enterAnteligne(HistoryFileGrammarParser::AnteligneContext *ctx) = 0;
  virtual void exitAnteligne(HistoryFileGrammarParser::AnteligneContext *ctx) = 0;

  virtual void enterAnteSomme(HistoryFileGrammarParser::AnteSommeContext *ctx) = 0;
  virtual void exitAnteSomme(HistoryFileGrammarParser::AnteSommeContext *ctx) = 0;

  virtual void enterSmallblindligne(HistoryFileGrammarParser::SmallblindligneContext *ctx) = 0;
  virtual void exitSmallblindligne(HistoryFileGrammarParser::SmallblindligneContext *ctx) = 0;

  virtual void enterSmallblindSomme(HistoryFileGrammarParser::SmallblindSommeContext *ctx) = 0;
  virtual void exitSmallblindSomme(HistoryFileGrammarParser::SmallblindSommeContext *ctx) = 0;

  virtual void enterBigblindligne(HistoryFileGrammarParser::BigblindligneContext *ctx) = 0;
  virtual void exitBigblindligne(HistoryFileGrammarParser::BigblindligneContext *ctx) = 0;

  virtual void enterBigblindSomme(HistoryFileGrammarParser::BigblindSommeContext *ctx) = 0;
  virtual void exitBigblindSomme(HistoryFileGrammarParser::BigblindSommeContext *ctx) = 0;

  virtual void enterCardligne(HistoryFileGrammarParser::CardligneContext *ctx) = 0;
  virtual void exitCardligne(HistoryFileGrammarParser::CardligneContext *ctx) = 0;

  virtual void enterCartePerso(HistoryFileGrammarParser::CartePersoContext *ctx) = 0;
  virtual void exitCartePerso(HistoryFileGrammarParser::CartePersoContext *ctx) = 0;

  virtual void enterPreflopSection(HistoryFileGrammarParser::PreflopSectionContext *ctx) = 0;
  virtual void exitPreflopSection(HistoryFileGrammarParser::PreflopSectionContext *ctx) = 0;

  virtual void enterPreflopHeader(HistoryFileGrammarParser::PreflopHeaderContext *ctx) = 0;
  virtual void exitPreflopHeader(HistoryFileGrammarParser::PreflopHeaderContext *ctx) = 0;

  virtual void enterPlayAction(HistoryFileGrammarParser::PlayActionContext *ctx) = 0;
  virtual void exitPlayAction(HistoryFileGrammarParser::PlayActionContext *ctx) = 0;

  virtual void enterRaiseAction(HistoryFileGrammarParser::RaiseActionContext *ctx) = 0;
  virtual void exitRaiseAction(HistoryFileGrammarParser::RaiseActionContext *ctx) = 0;

  virtual void enterFoldAction(HistoryFileGrammarParser::FoldActionContext *ctx) = 0;
  virtual void exitFoldAction(HistoryFileGrammarParser::FoldActionContext *ctx) = 0;

  virtual void enterBetAction(HistoryFileGrammarParser::BetActionContext *ctx) = 0;
  virtual void exitBetAction(HistoryFileGrammarParser::BetActionContext *ctx) = 0;

  virtual void enterCheckAction(HistoryFileGrammarParser::CheckActionContext *ctx) = 0;
  virtual void exitCheckAction(HistoryFileGrammarParser::CheckActionContext *ctx) = 0;

  virtual void enterCallAction(HistoryFileGrammarParser::CallActionContext *ctx) = 0;
  virtual void exitCallAction(HistoryFileGrammarParser::CallActionContext *ctx) = 0;

  virtual void enterInitialRaiseValue(HistoryFileGrammarParser::InitialRaiseValueContext *ctx) = 0;
  virtual void exitInitialRaiseValue(HistoryFileGrammarParser::InitialRaiseValueContext *ctx) = 0;

  virtual void enterFinalraiseValue(HistoryFileGrammarParser::FinalraiseValueContext *ctx) = 0;
  virtual void exitFinalraiseValue(HistoryFileGrammarParser::FinalraiseValueContext *ctx) = 0;

  virtual void enterBetValue(HistoryFileGrammarParser::BetValueContext *ctx) = 0;
  virtual void exitBetValue(HistoryFileGrammarParser::BetValueContext *ctx) = 0;

  virtual void enterCallValue(HistoryFileGrammarParser::CallValueContext *ctx) = 0;
  virtual void exitCallValue(HistoryFileGrammarParser::CallValueContext *ctx) = 0;

  virtual void enterWin(HistoryFileGrammarParser::WinContext *ctx) = 0;
  virtual void exitWin(HistoryFileGrammarParser::WinContext *ctx) = 0;

  virtual void enterFlopSection(HistoryFileGrammarParser::FlopSectionContext *ctx) = 0;
  virtual void exitFlopSection(HistoryFileGrammarParser::FlopSectionContext *ctx) = 0;

  virtual void enterFlopHeader(HistoryFileGrammarParser::FlopHeaderContext *ctx) = 0;
  virtual void exitFlopHeader(HistoryFileGrammarParser::FlopHeaderContext *ctx) = 0;

  virtual void enterFlopcards(HistoryFileGrammarParser::FlopcardsContext *ctx) = 0;
  virtual void exitFlopcards(HistoryFileGrammarParser::FlopcardsContext *ctx) = 0;

  virtual void enterTurnSection(HistoryFileGrammarParser::TurnSectionContext *ctx) = 0;
  virtual void exitTurnSection(HistoryFileGrammarParser::TurnSectionContext *ctx) = 0;

  virtual void enterTurnHeader(HistoryFileGrammarParser::TurnHeaderContext *ctx) = 0;
  virtual void exitTurnHeader(HistoryFileGrammarParser::TurnHeaderContext *ctx) = 0;

  virtual void enterTurnCards(HistoryFileGrammarParser::TurnCardsContext *ctx) = 0;
  virtual void exitTurnCards(HistoryFileGrammarParser::TurnCardsContext *ctx) = 0;

  virtual void enterRiverSection(HistoryFileGrammarParser::RiverSectionContext *ctx) = 0;
  virtual void exitRiverSection(HistoryFileGrammarParser::RiverSectionContext *ctx) = 0;

  virtual void enterRiverHeader(HistoryFileGrammarParser::RiverHeaderContext *ctx) = 0;
  virtual void exitRiverHeader(HistoryFileGrammarParser::RiverHeaderContext *ctx) = 0;

  virtual void enterRiverCards(HistoryFileGrammarParser::RiverCardsContext *ctx) = 0;
  virtual void exitRiverCards(HistoryFileGrammarParser::RiverCardsContext *ctx) = 0;

  virtual void enterShowdownSection(HistoryFileGrammarParser::ShowdownSectionContext *ctx) = 0;
  virtual void exitShowdownSection(HistoryFileGrammarParser::ShowdownSectionContext *ctx) = 0;

  virtual void enterShowdownHeader(HistoryFileGrammarParser::ShowdownHeaderContext *ctx) = 0;
  virtual void exitShowdownHeader(HistoryFileGrammarParser::ShowdownHeaderContext *ctx) = 0;

  virtual void enterCombinaisonLigne(HistoryFileGrammarParser::CombinaisonLigneContext *ctx) = 0;
  virtual void exitCombinaisonLigne(HistoryFileGrammarParser::CombinaisonLigneContext *ctx) = 0;

  virtual void enterCombinaison(HistoryFileGrammarParser::CombinaisonContext *ctx) = 0;
  virtual void exitCombinaison(HistoryFileGrammarParser::CombinaisonContext *ctx) = 0;

  virtual void enterResultLigne(HistoryFileGrammarParser::ResultLigneContext *ctx) = 0;
  virtual void exitResultLigne(HistoryFileGrammarParser::ResultLigneContext *ctx) = 0;

  virtual void enterWhereCollected(HistoryFileGrammarParser::WhereCollectedContext *ctx) = 0;
  virtual void exitWhereCollected(HistoryFileGrammarParser::WhereCollectedContext *ctx) = 0;

  virtual void enterShowdownValue(HistoryFileGrammarParser::ShowdownValueContext *ctx) = 0;
  virtual void exitShowdownValue(HistoryFileGrammarParser::ShowdownValueContext *ctx) = 0;

  virtual void enterSummarySection(HistoryFileGrammarParser::SummarySectionContext *ctx) = 0;
  virtual void exitSummarySection(HistoryFileGrammarParser::SummarySectionContext *ctx) = 0;

  virtual void enterSummaryHeader(HistoryFileGrammarParser::SummaryHeaderContext *ctx) = 0;
  virtual void exitSummaryHeader(HistoryFileGrammarParser::SummaryHeaderContext *ctx) = 0;

  virtual void enterPotSummary(HistoryFileGrammarParser::PotSummaryContext *ctx) = 0;
  virtual void exitPotSummary(HistoryFileGrammarParser::PotSummaryContext *ctx) = 0;

  virtual void enterPotValue(HistoryFileGrammarParser::PotValueContext *ctx) = 0;
  virtual void exitPotValue(HistoryFileGrammarParser::PotValueContext *ctx) = 0;

  virtual void enterRakeValue(HistoryFileGrammarParser::RakeValueContext *ctx) = 0;
  virtual void exitRakeValue(HistoryFileGrammarParser::RakeValueContext *ctx) = 0;

  virtual void enterBoardline(HistoryFileGrammarParser::BoardlineContext *ctx) = 0;
  virtual void exitBoardline(HistoryFileGrammarParser::BoardlineContext *ctx) = 0;

  virtual void enterBoardCards(HistoryFileGrammarParser::BoardCardsContext *ctx) = 0;
  virtual void exitBoardCards(HistoryFileGrammarParser::BoardCardsContext *ctx) = 0;

  virtual void enterPlayerSummary(HistoryFileGrammarParser::PlayerSummaryContext *ctx) = 0;
  virtual void exitPlayerSummary(HistoryFileGrammarParser::PlayerSummaryContext *ctx) = 0;

  virtual void enterPosition(HistoryFileGrammarParser::PositionContext *ctx) = 0;
  virtual void exitPosition(HistoryFileGrammarParser::PositionContext *ctx) = 0;

  virtual void enterResult(HistoryFileGrammarParser::ResultContext *ctx) = 0;
  virtual void exitResult(HistoryFileGrammarParser::ResultContext *ctx) = 0;

  virtual void enterWithWhat(HistoryFileGrammarParser::WithWhatContext *ctx) = 0;
  virtual void exitWithWhat(HistoryFileGrammarParser::WithWhatContext *ctx) = 0;

  virtual void enterShowdownWin(HistoryFileGrammarParser::ShowdownWinContext *ctx) = 0;
  virtual void exitShowdownWin(HistoryFileGrammarParser::ShowdownWinContext *ctx) = 0;

  virtual void enterShowdownLose(HistoryFileGrammarParser::ShowdownLoseContext *ctx) = 0;
  virtual void exitShowdownLose(HistoryFileGrammarParser::ShowdownLoseContext *ctx) = 0;

  virtual void enterJustWin(HistoryFileGrammarParser::JustWinContext *ctx) = 0;
  virtual void exitJustWin(HistoryFileGrammarParser::JustWinContext *ctx) = 0;

  virtual void enterWinValue(HistoryFileGrammarParser::WinValueContext *ctx) = 0;
  virtual void exitWinValue(HistoryFileGrammarParser::WinValueContext *ctx) = 0;


};

