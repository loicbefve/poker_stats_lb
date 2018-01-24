
// Generated from /media/loic/Data/Users/Loïc/Documents/poker_stats_lb/grammar/HistoryParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "HistoryParserListener.h"


namespace antlrcpptest {

/**
 * This class provides an empty implementation of HistoryParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  HistoryParserBaseListener : public HistoryParserListener {
public:

  virtual void enterFichier(HistoryParser::FichierContext * /*ctx*/) override { }
  virtual void exitFichier(HistoryParser::FichierContext * /*ctx*/) override { }

  virtual void enterHand(HistoryParser::HandContext * /*ctx*/) override { }
  virtual void exitHand(HistoryParser::HandContext * /*ctx*/) override { }

  virtual void enterHandHeader(HistoryParser::HandHeaderContext * /*ctx*/) override { }
  virtual void exitHandHeader(HistoryParser::HandHeaderContext * /*ctx*/) override { }

  virtual void enterJeu(HistoryParser::JeuContext * /*ctx*/) override { }
  virtual void exitJeu(HistoryParser::JeuContext * /*ctx*/) override { }

  virtual void enterFirstLine(HistoryParser::FirstLineContext * /*ctx*/) override { }
  virtual void exitFirstLine(HistoryParser::FirstLineContext * /*ctx*/) override { }

  virtual void enterGameInfo(HistoryParser::GameInfoContext * /*ctx*/) override { }
  virtual void exitGameInfo(HistoryParser::GameInfoContext * /*ctx*/) override { }

  virtual void enterTypeOfGame(HistoryParser::TypeOfGameContext * /*ctx*/) override { }
  virtual void exitTypeOfGame(HistoryParser::TypeOfGameContext * /*ctx*/) override { }

  virtual void enterNameOfGame(HistoryParser::NameOfGameContext * /*ctx*/) override { }
  virtual void exitNameOfGame(HistoryParser::NameOfGameContext * /*ctx*/) override { }

  virtual void enterBuyin(HistoryParser::BuyinContext * /*ctx*/) override { }
  virtual void exitBuyin(HistoryParser::BuyinContext * /*ctx*/) override { }

  virtual void enterBuyValue(HistoryParser::BuyValueContext * /*ctx*/) override { }
  virtual void exitBuyValue(HistoryParser::BuyValueContext * /*ctx*/) override { }

  virtual void enterRakeBuyValue(HistoryParser::RakeBuyValueContext * /*ctx*/) override { }
  virtual void exitRakeBuyValue(HistoryParser::RakeBuyValueContext * /*ctx*/) override { }

  virtual void enterLevel(HistoryParser::LevelContext * /*ctx*/) override { }
  virtual void exitLevel(HistoryParser::LevelContext * /*ctx*/) override { }

  virtual void enterLevelValue(HistoryParser::LevelValueContext * /*ctx*/) override { }
  virtual void exitLevelValue(HistoryParser::LevelValueContext * /*ctx*/) override { }

  virtual void enterHandId(HistoryParser::HandIdContext * /*ctx*/) override { }
  virtual void exitHandId(HistoryParser::HandIdContext * /*ctx*/) override { }

  virtual void enterHandIdValue(HistoryParser::HandIdValueContext * /*ctx*/) override { }
  virtual void exitHandIdValue(HistoryParser::HandIdValueContext * /*ctx*/) override { }

  virtual void enterTypePlay(HistoryParser::TypePlayContext * /*ctx*/) override { }
  virtual void exitTypePlay(HistoryParser::TypePlayContext * /*ctx*/) override { }

  virtual void enterAnteValue(HistoryParser::AnteValueContext * /*ctx*/) override { }
  virtual void exitAnteValue(HistoryParser::AnteValueContext * /*ctx*/) override { }

  virtual void enterSmallblindValue(HistoryParser::SmallblindValueContext * /*ctx*/) override { }
  virtual void exitSmallblindValue(HistoryParser::SmallblindValueContext * /*ctx*/) override { }

  virtual void enterBigblindValue(HistoryParser::BigblindValueContext * /*ctx*/) override { }
  virtual void exitBigblindValue(HistoryParser::BigblindValueContext * /*ctx*/) override { }

  virtual void enterDate(HistoryParser::DateContext * /*ctx*/) override { }
  virtual void exitDate(HistoryParser::DateContext * /*ctx*/) override { }

  virtual void enterAnnee(HistoryParser::AnneeContext * /*ctx*/) override { }
  virtual void exitAnnee(HistoryParser::AnneeContext * /*ctx*/) override { }

  virtual void enterMois(HistoryParser::MoisContext * /*ctx*/) override { }
  virtual void exitMois(HistoryParser::MoisContext * /*ctx*/) override { }

  virtual void enterJour(HistoryParser::JourContext * /*ctx*/) override { }
  virtual void exitJour(HistoryParser::JourContext * /*ctx*/) override { }

  virtual void enterHeure(HistoryParser::HeureContext * /*ctx*/) override { }
  virtual void exitHeure(HistoryParser::HeureContext * /*ctx*/) override { }

  virtual void enterMinutes(HistoryParser::MinutesContext * /*ctx*/) override { }
  virtual void exitMinutes(HistoryParser::MinutesContext * /*ctx*/) override { }

  virtual void enterSecondes(HistoryParser::SecondesContext * /*ctx*/) override { }
  virtual void exitSecondes(HistoryParser::SecondesContext * /*ctx*/) override { }

  virtual void enterSecondLine(HistoryParser::SecondLineContext * /*ctx*/) override { }
  virtual void exitSecondLine(HistoryParser::SecondLineContext * /*ctx*/) override { }

  virtual void enterTableInfo(HistoryParser::TableInfoContext * /*ctx*/) override { }
  virtual void exitTableInfo(HistoryParser::TableInfoContext * /*ctx*/) override { }

  virtual void enterIdTable(HistoryParser::IdTableContext * /*ctx*/) override { }
  virtual void exitIdTable(HistoryParser::IdTableContext * /*ctx*/) override { }

  virtual void enterDiez(HistoryParser::DiezContext * /*ctx*/) override { }
  virtual void exitDiez(HistoryParser::DiezContext * /*ctx*/) override { }

  virtual void enterFormat(HistoryParser::FormatContext * /*ctx*/) override { }
  virtual void exitFormat(HistoryParser::FormatContext * /*ctx*/) override { }

  virtual void enterNumberOfPlayer(HistoryParser::NumberOfPlayerContext * /*ctx*/) override { }
  virtual void exitNumberOfPlayer(HistoryParser::NumberOfPlayerContext * /*ctx*/) override { }

  virtual void enterWhoIsButton(HistoryParser::WhoIsButtonContext * /*ctx*/) override { }
  virtual void exitWhoIsButton(HistoryParser::WhoIsButtonContext * /*ctx*/) override { }

  virtual void enterButtonId(HistoryParser::ButtonIdContext * /*ctx*/) override { }
  virtual void exitButtonId(HistoryParser::ButtonIdContext * /*ctx*/) override { }

  virtual void enterPositions(HistoryParser::PositionsContext * /*ctx*/) override { }
  virtual void exitPositions(HistoryParser::PositionsContext * /*ctx*/) override { }

  virtual void enterRecapPlace(HistoryParser::RecapPlaceContext * /*ctx*/) override { }
  virtual void exitRecapPlace(HistoryParser::RecapPlaceContext * /*ctx*/) override { }

  virtual void enterSiege(HistoryParser::SiegeContext * /*ctx*/) override { }
  virtual void exitSiege(HistoryParser::SiegeContext * /*ctx*/) override { }

  virtual void enterPseudo(HistoryParser::PseudoContext * /*ctx*/) override { }
  virtual void exitPseudo(HistoryParser::PseudoContext * /*ctx*/) override { }

  virtual void enterTapis(HistoryParser::TapisContext * /*ctx*/) override { }
  virtual void exitTapis(HistoryParser::TapisContext * /*ctx*/) override { }

  virtual void enterAnteblindSection(HistoryParser::AnteblindSectionContext * /*ctx*/) override { }
  virtual void exitAnteblindSection(HistoryParser::AnteblindSectionContext * /*ctx*/) override { }

  virtual void enterAnteblindHeader(HistoryParser::AnteblindHeaderContext * /*ctx*/) override { }
  virtual void exitAnteblindHeader(HistoryParser::AnteblindHeaderContext * /*ctx*/) override { }

  virtual void enterAnteligne(HistoryParser::AnteligneContext * /*ctx*/) override { }
  virtual void exitAnteligne(HistoryParser::AnteligneContext * /*ctx*/) override { }

  virtual void enterAnteSomme(HistoryParser::AnteSommeContext * /*ctx*/) override { }
  virtual void exitAnteSomme(HistoryParser::AnteSommeContext * /*ctx*/) override { }

  virtual void enterSmallblindligne(HistoryParser::SmallblindligneContext * /*ctx*/) override { }
  virtual void exitSmallblindligne(HistoryParser::SmallblindligneContext * /*ctx*/) override { }

  virtual void enterSmallblindSomme(HistoryParser::SmallblindSommeContext * /*ctx*/) override { }
  virtual void exitSmallblindSomme(HistoryParser::SmallblindSommeContext * /*ctx*/) override { }

  virtual void enterBigblindligne(HistoryParser::BigblindligneContext * /*ctx*/) override { }
  virtual void exitBigblindligne(HistoryParser::BigblindligneContext * /*ctx*/) override { }

  virtual void enterBigblindSomme(HistoryParser::BigblindSommeContext * /*ctx*/) override { }
  virtual void exitBigblindSomme(HistoryParser::BigblindSommeContext * /*ctx*/) override { }

  virtual void enterCardligne(HistoryParser::CardligneContext * /*ctx*/) override { }
  virtual void exitCardligne(HistoryParser::CardligneContext * /*ctx*/) override { }

  virtual void enterCartePerso(HistoryParser::CartePersoContext * /*ctx*/) override { }
  virtual void exitCartePerso(HistoryParser::CartePersoContext * /*ctx*/) override { }

  virtual void enterPreflopSection(HistoryParser::PreflopSectionContext * /*ctx*/) override { }
  virtual void exitPreflopSection(HistoryParser::PreflopSectionContext * /*ctx*/) override { }

  virtual void enterPreflopHeader(HistoryParser::PreflopHeaderContext * /*ctx*/) override { }
  virtual void exitPreflopHeader(HistoryParser::PreflopHeaderContext * /*ctx*/) override { }

  virtual void enterPlayAction(HistoryParser::PlayActionContext * /*ctx*/) override { }
  virtual void exitPlayAction(HistoryParser::PlayActionContext * /*ctx*/) override { }

  virtual void enterRaiseAction(HistoryParser::RaiseActionContext * /*ctx*/) override { }
  virtual void exitRaiseAction(HistoryParser::RaiseActionContext * /*ctx*/) override { }

  virtual void enterFoldAction(HistoryParser::FoldActionContext * /*ctx*/) override { }
  virtual void exitFoldAction(HistoryParser::FoldActionContext * /*ctx*/) override { }

  virtual void enterBetAction(HistoryParser::BetActionContext * /*ctx*/) override { }
  virtual void exitBetAction(HistoryParser::BetActionContext * /*ctx*/) override { }

  virtual void enterCheckAction(HistoryParser::CheckActionContext * /*ctx*/) override { }
  virtual void exitCheckAction(HistoryParser::CheckActionContext * /*ctx*/) override { }

  virtual void enterCallAction(HistoryParser::CallActionContext * /*ctx*/) override { }
  virtual void exitCallAction(HistoryParser::CallActionContext * /*ctx*/) override { }

  virtual void enterInitialRaiseValue(HistoryParser::InitialRaiseValueContext * /*ctx*/) override { }
  virtual void exitInitialRaiseValue(HistoryParser::InitialRaiseValueContext * /*ctx*/) override { }

  virtual void enterFinalraiseValue(HistoryParser::FinalraiseValueContext * /*ctx*/) override { }
  virtual void exitFinalraiseValue(HistoryParser::FinalraiseValueContext * /*ctx*/) override { }

  virtual void enterBetValue(HistoryParser::BetValueContext * /*ctx*/) override { }
  virtual void exitBetValue(HistoryParser::BetValueContext * /*ctx*/) override { }

  virtual void enterCallValue(HistoryParser::CallValueContext * /*ctx*/) override { }
  virtual void exitCallValue(HistoryParser::CallValueContext * /*ctx*/) override { }

  virtual void enterWin(HistoryParser::WinContext * /*ctx*/) override { }
  virtual void exitWin(HistoryParser::WinContext * /*ctx*/) override { }

  virtual void enterFlopSection(HistoryParser::FlopSectionContext * /*ctx*/) override { }
  virtual void exitFlopSection(HistoryParser::FlopSectionContext * /*ctx*/) override { }

  virtual void enterFlopHeader(HistoryParser::FlopHeaderContext * /*ctx*/) override { }
  virtual void exitFlopHeader(HistoryParser::FlopHeaderContext * /*ctx*/) override { }

  virtual void enterFlopcards(HistoryParser::FlopcardsContext * /*ctx*/) override { }
  virtual void exitFlopcards(HistoryParser::FlopcardsContext * /*ctx*/) override { }

  virtual void enterTurnSection(HistoryParser::TurnSectionContext * /*ctx*/) override { }
  virtual void exitTurnSection(HistoryParser::TurnSectionContext * /*ctx*/) override { }

  virtual void enterTurnHeader(HistoryParser::TurnHeaderContext * /*ctx*/) override { }
  virtual void exitTurnHeader(HistoryParser::TurnHeaderContext * /*ctx*/) override { }

  virtual void enterTurnCards(HistoryParser::TurnCardsContext * /*ctx*/) override { }
  virtual void exitTurnCards(HistoryParser::TurnCardsContext * /*ctx*/) override { }

  virtual void enterRiverSection(HistoryParser::RiverSectionContext * /*ctx*/) override { }
  virtual void exitRiverSection(HistoryParser::RiverSectionContext * /*ctx*/) override { }

  virtual void enterRiverHeader(HistoryParser::RiverHeaderContext * /*ctx*/) override { }
  virtual void exitRiverHeader(HistoryParser::RiverHeaderContext * /*ctx*/) override { }

  virtual void enterRiverCards(HistoryParser::RiverCardsContext * /*ctx*/) override { }
  virtual void exitRiverCards(HistoryParser::RiverCardsContext * /*ctx*/) override { }

  virtual void enterShowdownSection(HistoryParser::ShowdownSectionContext * /*ctx*/) override { }
  virtual void exitShowdownSection(HistoryParser::ShowdownSectionContext * /*ctx*/) override { }

  virtual void enterShowdownHeader(HistoryParser::ShowdownHeaderContext * /*ctx*/) override { }
  virtual void exitShowdownHeader(HistoryParser::ShowdownHeaderContext * /*ctx*/) override { }

  virtual void enterCombinaisonLigne(HistoryParser::CombinaisonLigneContext * /*ctx*/) override { }
  virtual void exitCombinaisonLigne(HistoryParser::CombinaisonLigneContext * /*ctx*/) override { }

  virtual void enterCombinaison(HistoryParser::CombinaisonContext * /*ctx*/) override { }
  virtual void exitCombinaison(HistoryParser::CombinaisonContext * /*ctx*/) override { }

  virtual void enterResultLigne(HistoryParser::ResultLigneContext * /*ctx*/) override { }
  virtual void exitResultLigne(HistoryParser::ResultLigneContext * /*ctx*/) override { }

  virtual void enterWhereCollected(HistoryParser::WhereCollectedContext * /*ctx*/) override { }
  virtual void exitWhereCollected(HistoryParser::WhereCollectedContext * /*ctx*/) override { }

  virtual void enterShowdownValue(HistoryParser::ShowdownValueContext * /*ctx*/) override { }
  virtual void exitShowdownValue(HistoryParser::ShowdownValueContext * /*ctx*/) override { }

  virtual void enterSummarySection(HistoryParser::SummarySectionContext * /*ctx*/) override { }
  virtual void exitSummarySection(HistoryParser::SummarySectionContext * /*ctx*/) override { }

  virtual void enterSummaryHeader(HistoryParser::SummaryHeaderContext * /*ctx*/) override { }
  virtual void exitSummaryHeader(HistoryParser::SummaryHeaderContext * /*ctx*/) override { }

  virtual void enterPotSummary(HistoryParser::PotSummaryContext * /*ctx*/) override { }
  virtual void exitPotSummary(HistoryParser::PotSummaryContext * /*ctx*/) override { }

  virtual void enterPotValue(HistoryParser::PotValueContext * /*ctx*/) override { }
  virtual void exitPotValue(HistoryParser::PotValueContext * /*ctx*/) override { }

  virtual void enterRakeValue(HistoryParser::RakeValueContext * /*ctx*/) override { }
  virtual void exitRakeValue(HistoryParser::RakeValueContext * /*ctx*/) override { }

  virtual void enterBoardline(HistoryParser::BoardlineContext * /*ctx*/) override { }
  virtual void exitBoardline(HistoryParser::BoardlineContext * /*ctx*/) override { }

  virtual void enterBoardCards(HistoryParser::BoardCardsContext * /*ctx*/) override { }
  virtual void exitBoardCards(HistoryParser::BoardCardsContext * /*ctx*/) override { }

  virtual void enterPlayerSummary(HistoryParser::PlayerSummaryContext * /*ctx*/) override { }
  virtual void exitPlayerSummary(HistoryParser::PlayerSummaryContext * /*ctx*/) override { }

  virtual void enterPosition(HistoryParser::PositionContext * /*ctx*/) override { }
  virtual void exitPosition(HistoryParser::PositionContext * /*ctx*/) override { }

  virtual void enterResult(HistoryParser::ResultContext * /*ctx*/) override { }
  virtual void exitResult(HistoryParser::ResultContext * /*ctx*/) override { }

  virtual void enterWithWhat(HistoryParser::WithWhatContext * /*ctx*/) override { }
  virtual void exitWithWhat(HistoryParser::WithWhatContext * /*ctx*/) override { }

  virtual void enterShowdownWin(HistoryParser::ShowdownWinContext * /*ctx*/) override { }
  virtual void exitShowdownWin(HistoryParser::ShowdownWinContext * /*ctx*/) override { }

  virtual void enterShowdownLose(HistoryParser::ShowdownLoseContext * /*ctx*/) override { }
  virtual void exitShowdownLose(HistoryParser::ShowdownLoseContext * /*ctx*/) override { }

  virtual void enterJustWin(HistoryParser::JustWinContext * /*ctx*/) override { }
  virtual void exitJustWin(HistoryParser::JustWinContext * /*ctx*/) override { }

  virtual void enterWinValue(HistoryParser::WinValueContext * /*ctx*/) override { }
  virtual void exitWinValue(HistoryParser::WinValueContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace antlrcpptest
