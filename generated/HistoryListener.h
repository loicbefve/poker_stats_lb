
// Generated from History.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "HistoryParser.h"


namespace antlrcpptest {

/**
 * This interface defines an abstract listener for a parse tree produced by HistoryParser.
 */
class  HistoryListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterFichier(HistoryParser::FichierContext *ctx) = 0;
  virtual void exitFichier(HistoryParser::FichierContext *ctx) = 0;

  virtual void enterHand(HistoryParser::HandContext *ctx) = 0;
  virtual void exitHand(HistoryParser::HandContext *ctx) = 0;

  virtual void enterHandHeader(HistoryParser::HandHeaderContext *ctx) = 0;
  virtual void exitHandHeader(HistoryParser::HandHeaderContext *ctx) = 0;

  virtual void enterJeu(HistoryParser::JeuContext *ctx) = 0;
  virtual void exitJeu(HistoryParser::JeuContext *ctx) = 0;

  virtual void enterFirstLine(HistoryParser::FirstLineContext *ctx) = 0;
  virtual void exitFirstLine(HistoryParser::FirstLineContext *ctx) = 0;

  virtual void enterGameInfo(HistoryParser::GameInfoContext *ctx) = 0;
  virtual void exitGameInfo(HistoryParser::GameInfoContext *ctx) = 0;

  virtual void enterTypeOfGame(HistoryParser::TypeOfGameContext *ctx) = 0;
  virtual void exitTypeOfGame(HistoryParser::TypeOfGameContext *ctx) = 0;

  virtual void enterNameOfGame(HistoryParser::NameOfGameContext *ctx) = 0;
  virtual void exitNameOfGame(HistoryParser::NameOfGameContext *ctx) = 0;

  virtual void enterBuyin(HistoryParser::BuyinContext *ctx) = 0;
  virtual void exitBuyin(HistoryParser::BuyinContext *ctx) = 0;

  virtual void enterBuyValue(HistoryParser::BuyValueContext *ctx) = 0;
  virtual void exitBuyValue(HistoryParser::BuyValueContext *ctx) = 0;

  virtual void enterRakeBuyValue(HistoryParser::RakeBuyValueContext *ctx) = 0;
  virtual void exitRakeBuyValue(HistoryParser::RakeBuyValueContext *ctx) = 0;

  virtual void enterLevel(HistoryParser::LevelContext *ctx) = 0;
  virtual void exitLevel(HistoryParser::LevelContext *ctx) = 0;

  virtual void enterLevelValue(HistoryParser::LevelValueContext *ctx) = 0;
  virtual void exitLevelValue(HistoryParser::LevelValueContext *ctx) = 0;

  virtual void enterHandId(HistoryParser::HandIdContext *ctx) = 0;
  virtual void exitHandId(HistoryParser::HandIdContext *ctx) = 0;

  virtual void enterHandIdValue(HistoryParser::HandIdValueContext *ctx) = 0;
  virtual void exitHandIdValue(HistoryParser::HandIdValueContext *ctx) = 0;

  virtual void enterTypePlay(HistoryParser::TypePlayContext *ctx) = 0;
  virtual void exitTypePlay(HistoryParser::TypePlayContext *ctx) = 0;

  virtual void enterAnteValue(HistoryParser::AnteValueContext *ctx) = 0;
  virtual void exitAnteValue(HistoryParser::AnteValueContext *ctx) = 0;

  virtual void enterSmallblindValue(HistoryParser::SmallblindValueContext *ctx) = 0;
  virtual void exitSmallblindValue(HistoryParser::SmallblindValueContext *ctx) = 0;

  virtual void enterBigblindValue(HistoryParser::BigblindValueContext *ctx) = 0;
  virtual void exitBigblindValue(HistoryParser::BigblindValueContext *ctx) = 0;

  virtual void enterDate(HistoryParser::DateContext *ctx) = 0;
  virtual void exitDate(HistoryParser::DateContext *ctx) = 0;

  virtual void enterAnnee(HistoryParser::AnneeContext *ctx) = 0;
  virtual void exitAnnee(HistoryParser::AnneeContext *ctx) = 0;

  virtual void enterMois(HistoryParser::MoisContext *ctx) = 0;
  virtual void exitMois(HistoryParser::MoisContext *ctx) = 0;

  virtual void enterJour(HistoryParser::JourContext *ctx) = 0;
  virtual void exitJour(HistoryParser::JourContext *ctx) = 0;

  virtual void enterHeure(HistoryParser::HeureContext *ctx) = 0;
  virtual void exitHeure(HistoryParser::HeureContext *ctx) = 0;

  virtual void enterMinutes(HistoryParser::MinutesContext *ctx) = 0;
  virtual void exitMinutes(HistoryParser::MinutesContext *ctx) = 0;

  virtual void enterSecondes(HistoryParser::SecondesContext *ctx) = 0;
  virtual void exitSecondes(HistoryParser::SecondesContext *ctx) = 0;

  virtual void enterSecondLine(HistoryParser::SecondLineContext *ctx) = 0;
  virtual void exitSecondLine(HistoryParser::SecondLineContext *ctx) = 0;

  virtual void enterTableInfo(HistoryParser::TableInfoContext *ctx) = 0;
  virtual void exitTableInfo(HistoryParser::TableInfoContext *ctx) = 0;

  virtual void enterIdTable(HistoryParser::IdTableContext *ctx) = 0;
  virtual void exitIdTable(HistoryParser::IdTableContext *ctx) = 0;

  virtual void enterDiez(HistoryParser::DiezContext *ctx) = 0;
  virtual void exitDiez(HistoryParser::DiezContext *ctx) = 0;

  virtual void enterFormat(HistoryParser::FormatContext *ctx) = 0;
  virtual void exitFormat(HistoryParser::FormatContext *ctx) = 0;

  virtual void enterNumberOfPlayer(HistoryParser::NumberOfPlayerContext *ctx) = 0;
  virtual void exitNumberOfPlayer(HistoryParser::NumberOfPlayerContext *ctx) = 0;

  virtual void enterWhoIsButton(HistoryParser::WhoIsButtonContext *ctx) = 0;
  virtual void exitWhoIsButton(HistoryParser::WhoIsButtonContext *ctx) = 0;

  virtual void enterButtonId(HistoryParser::ButtonIdContext *ctx) = 0;
  virtual void exitButtonId(HistoryParser::ButtonIdContext *ctx) = 0;

  virtual void enterPositions(HistoryParser::PositionsContext *ctx) = 0;
  virtual void exitPositions(HistoryParser::PositionsContext *ctx) = 0;

  virtual void enterRecapPlace(HistoryParser::RecapPlaceContext *ctx) = 0;
  virtual void exitRecapPlace(HistoryParser::RecapPlaceContext *ctx) = 0;

  virtual void enterSiege(HistoryParser::SiegeContext *ctx) = 0;
  virtual void exitSiege(HistoryParser::SiegeContext *ctx) = 0;

  virtual void enterPseudo(HistoryParser::PseudoContext *ctx) = 0;
  virtual void exitPseudo(HistoryParser::PseudoContext *ctx) = 0;

  virtual void enterTapis(HistoryParser::TapisContext *ctx) = 0;
  virtual void exitTapis(HistoryParser::TapisContext *ctx) = 0;

  virtual void enterAnteblindSection(HistoryParser::AnteblindSectionContext *ctx) = 0;
  virtual void exitAnteblindSection(HistoryParser::AnteblindSectionContext *ctx) = 0;

  virtual void enterAnteblindHeader(HistoryParser::AnteblindHeaderContext *ctx) = 0;
  virtual void exitAnteblindHeader(HistoryParser::AnteblindHeaderContext *ctx) = 0;

  virtual void enterAnteligne(HistoryParser::AnteligneContext *ctx) = 0;
  virtual void exitAnteligne(HistoryParser::AnteligneContext *ctx) = 0;

  virtual void enterAnteSomme(HistoryParser::AnteSommeContext *ctx) = 0;
  virtual void exitAnteSomme(HistoryParser::AnteSommeContext *ctx) = 0;

  virtual void enterSmallblindligne(HistoryParser::SmallblindligneContext *ctx) = 0;
  virtual void exitSmallblindligne(HistoryParser::SmallblindligneContext *ctx) = 0;

  virtual void enterSmallblindSomme(HistoryParser::SmallblindSommeContext *ctx) = 0;
  virtual void exitSmallblindSomme(HistoryParser::SmallblindSommeContext *ctx) = 0;

  virtual void enterBigblindligne(HistoryParser::BigblindligneContext *ctx) = 0;
  virtual void exitBigblindligne(HistoryParser::BigblindligneContext *ctx) = 0;

  virtual void enterBigblindSomme(HistoryParser::BigblindSommeContext *ctx) = 0;
  virtual void exitBigblindSomme(HistoryParser::BigblindSommeContext *ctx) = 0;

  virtual void enterCardligne(HistoryParser::CardligneContext *ctx) = 0;
  virtual void exitCardligne(HistoryParser::CardligneContext *ctx) = 0;

  virtual void enterCartePerso(HistoryParser::CartePersoContext *ctx) = 0;
  virtual void exitCartePerso(HistoryParser::CartePersoContext *ctx) = 0;

  virtual void enterPreflopSection(HistoryParser::PreflopSectionContext *ctx) = 0;
  virtual void exitPreflopSection(HistoryParser::PreflopSectionContext *ctx) = 0;

  virtual void enterPreflopHeader(HistoryParser::PreflopHeaderContext *ctx) = 0;
  virtual void exitPreflopHeader(HistoryParser::PreflopHeaderContext *ctx) = 0;

  virtual void enterPlayAction(HistoryParser::PlayActionContext *ctx) = 0;
  virtual void exitPlayAction(HistoryParser::PlayActionContext *ctx) = 0;

  virtual void enterRaiseAction(HistoryParser::RaiseActionContext *ctx) = 0;
  virtual void exitRaiseAction(HistoryParser::RaiseActionContext *ctx) = 0;

  virtual void enterFoldAction(HistoryParser::FoldActionContext *ctx) = 0;
  virtual void exitFoldAction(HistoryParser::FoldActionContext *ctx) = 0;

  virtual void enterBetAction(HistoryParser::BetActionContext *ctx) = 0;
  virtual void exitBetAction(HistoryParser::BetActionContext *ctx) = 0;

  virtual void enterCheckAction(HistoryParser::CheckActionContext *ctx) = 0;
  virtual void exitCheckAction(HistoryParser::CheckActionContext *ctx) = 0;

  virtual void enterCallAction(HistoryParser::CallActionContext *ctx) = 0;
  virtual void exitCallAction(HistoryParser::CallActionContext *ctx) = 0;

  virtual void enterInitialRaiseValue(HistoryParser::InitialRaiseValueContext *ctx) = 0;
  virtual void exitInitialRaiseValue(HistoryParser::InitialRaiseValueContext *ctx) = 0;

  virtual void enterFinalraiseValue(HistoryParser::FinalraiseValueContext *ctx) = 0;
  virtual void exitFinalraiseValue(HistoryParser::FinalraiseValueContext *ctx) = 0;

  virtual void enterBetValue(HistoryParser::BetValueContext *ctx) = 0;
  virtual void exitBetValue(HistoryParser::BetValueContext *ctx) = 0;

  virtual void enterCallValue(HistoryParser::CallValueContext *ctx) = 0;
  virtual void exitCallValue(HistoryParser::CallValueContext *ctx) = 0;

  virtual void enterWin(HistoryParser::WinContext *ctx) = 0;
  virtual void exitWin(HistoryParser::WinContext *ctx) = 0;

  virtual void enterFlopSection(HistoryParser::FlopSectionContext *ctx) = 0;
  virtual void exitFlopSection(HistoryParser::FlopSectionContext *ctx) = 0;

  virtual void enterFlopHeader(HistoryParser::FlopHeaderContext *ctx) = 0;
  virtual void exitFlopHeader(HistoryParser::FlopHeaderContext *ctx) = 0;

  virtual void enterFlopcards(HistoryParser::FlopcardsContext *ctx) = 0;
  virtual void exitFlopcards(HistoryParser::FlopcardsContext *ctx) = 0;

  virtual void enterTurnSection(HistoryParser::TurnSectionContext *ctx) = 0;
  virtual void exitTurnSection(HistoryParser::TurnSectionContext *ctx) = 0;

  virtual void enterTurnHeader(HistoryParser::TurnHeaderContext *ctx) = 0;
  virtual void exitTurnHeader(HistoryParser::TurnHeaderContext *ctx) = 0;

  virtual void enterTurnCards(HistoryParser::TurnCardsContext *ctx) = 0;
  virtual void exitTurnCards(HistoryParser::TurnCardsContext *ctx) = 0;

  virtual void enterRiverSection(HistoryParser::RiverSectionContext *ctx) = 0;
  virtual void exitRiverSection(HistoryParser::RiverSectionContext *ctx) = 0;

  virtual void enterRiverHeader(HistoryParser::RiverHeaderContext *ctx) = 0;
  virtual void exitRiverHeader(HistoryParser::RiverHeaderContext *ctx) = 0;

  virtual void enterRiverCards(HistoryParser::RiverCardsContext *ctx) = 0;
  virtual void exitRiverCards(HistoryParser::RiverCardsContext *ctx) = 0;

  virtual void enterShowdownSection(HistoryParser::ShowdownSectionContext *ctx) = 0;
  virtual void exitShowdownSection(HistoryParser::ShowdownSectionContext *ctx) = 0;

  virtual void enterShowdownHeader(HistoryParser::ShowdownHeaderContext *ctx) = 0;
  virtual void exitShowdownHeader(HistoryParser::ShowdownHeaderContext *ctx) = 0;

  virtual void enterCombinaisonLigne(HistoryParser::CombinaisonLigneContext *ctx) = 0;
  virtual void exitCombinaisonLigne(HistoryParser::CombinaisonLigneContext *ctx) = 0;

  virtual void enterCombinaison(HistoryParser::CombinaisonContext *ctx) = 0;
  virtual void exitCombinaison(HistoryParser::CombinaisonContext *ctx) = 0;

  virtual void enterResultLigne(HistoryParser::ResultLigneContext *ctx) = 0;
  virtual void exitResultLigne(HistoryParser::ResultLigneContext *ctx) = 0;

  virtual void enterWhereCollected(HistoryParser::WhereCollectedContext *ctx) = 0;
  virtual void exitWhereCollected(HistoryParser::WhereCollectedContext *ctx) = 0;

  virtual void enterShowdownValue(HistoryParser::ShowdownValueContext *ctx) = 0;
  virtual void exitShowdownValue(HistoryParser::ShowdownValueContext *ctx) = 0;

  virtual void enterSummarySection(HistoryParser::SummarySectionContext *ctx) = 0;
  virtual void exitSummarySection(HistoryParser::SummarySectionContext *ctx) = 0;

  virtual void enterSummaryHeader(HistoryParser::SummaryHeaderContext *ctx) = 0;
  virtual void exitSummaryHeader(HistoryParser::SummaryHeaderContext *ctx) = 0;

  virtual void enterPotSummary(HistoryParser::PotSummaryContext *ctx) = 0;
  virtual void exitPotSummary(HistoryParser::PotSummaryContext *ctx) = 0;

  virtual void enterPotValue(HistoryParser::PotValueContext *ctx) = 0;
  virtual void exitPotValue(HistoryParser::PotValueContext *ctx) = 0;

  virtual void enterRakeValue(HistoryParser::RakeValueContext *ctx) = 0;
  virtual void exitRakeValue(HistoryParser::RakeValueContext *ctx) = 0;

  virtual void enterBoardline(HistoryParser::BoardlineContext *ctx) = 0;
  virtual void exitBoardline(HistoryParser::BoardlineContext *ctx) = 0;

  virtual void enterBoardCards(HistoryParser::BoardCardsContext *ctx) = 0;
  virtual void exitBoardCards(HistoryParser::BoardCardsContext *ctx) = 0;

  virtual void enterPlayerSummary(HistoryParser::PlayerSummaryContext *ctx) = 0;
  virtual void exitPlayerSummary(HistoryParser::PlayerSummaryContext *ctx) = 0;

  virtual void enterPosition(HistoryParser::PositionContext *ctx) = 0;
  virtual void exitPosition(HistoryParser::PositionContext *ctx) = 0;

  virtual void enterResult(HistoryParser::ResultContext *ctx) = 0;
  virtual void exitResult(HistoryParser::ResultContext *ctx) = 0;

  virtual void enterWithWhat(HistoryParser::WithWhatContext *ctx) = 0;
  virtual void exitWithWhat(HistoryParser::WithWhatContext *ctx) = 0;

  virtual void enterShowdownWin(HistoryParser::ShowdownWinContext *ctx) = 0;
  virtual void exitShowdownWin(HistoryParser::ShowdownWinContext *ctx) = 0;

  virtual void enterShowdownLose(HistoryParser::ShowdownLoseContext *ctx) = 0;
  virtual void exitShowdownLose(HistoryParser::ShowdownLoseContext *ctx) = 0;

  virtual void enterJustWin(HistoryParser::JustWinContext *ctx) = 0;
  virtual void exitJustWin(HistoryParser::JustWinContext *ctx) = 0;

  virtual void enterWinValue(HistoryParser::WinValueContext *ctx) = 0;
  virtual void exitWinValue(HistoryParser::WinValueContext *ctx) = 0;


};

}  // namespace antlrcpptest
