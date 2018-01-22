
// Generated from History.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "HistoryParser.h"


namespace antlrcpptest {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by HistoryParser.
 */
class  HistoryVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by HistoryParser.
   */
    virtual antlrcpp::Any visitFichier(HistoryParser::FichierContext *context) = 0;

    virtual antlrcpp::Any visitHand(HistoryParser::HandContext *context) = 0;

    virtual antlrcpp::Any visitHandHeader(HistoryParser::HandHeaderContext *context) = 0;

    virtual antlrcpp::Any visitJeu(HistoryParser::JeuContext *context) = 0;

    virtual antlrcpp::Any visitFirstLine(HistoryParser::FirstLineContext *context) = 0;

    virtual antlrcpp::Any visitGameInfo(HistoryParser::GameInfoContext *context) = 0;

    virtual antlrcpp::Any visitTypeOfGame(HistoryParser::TypeOfGameContext *context) = 0;

    virtual antlrcpp::Any visitNameOfGame(HistoryParser::NameOfGameContext *context) = 0;

    virtual antlrcpp::Any visitBuyin(HistoryParser::BuyinContext *context) = 0;

    virtual antlrcpp::Any visitBuyValue(HistoryParser::BuyValueContext *context) = 0;

    virtual antlrcpp::Any visitRakeBuyValue(HistoryParser::RakeBuyValueContext *context) = 0;

    virtual antlrcpp::Any visitLevel(HistoryParser::LevelContext *context) = 0;

    virtual antlrcpp::Any visitLevelValue(HistoryParser::LevelValueContext *context) = 0;

    virtual antlrcpp::Any visitHandId(HistoryParser::HandIdContext *context) = 0;

    virtual antlrcpp::Any visitHandIdValue(HistoryParser::HandIdValueContext *context) = 0;

    virtual antlrcpp::Any visitTypePlay(HistoryParser::TypePlayContext *context) = 0;

    virtual antlrcpp::Any visitAnteValue(HistoryParser::AnteValueContext *context) = 0;

    virtual antlrcpp::Any visitSmallblindValue(HistoryParser::SmallblindValueContext *context) = 0;

    virtual antlrcpp::Any visitBigblindValue(HistoryParser::BigblindValueContext *context) = 0;

    virtual antlrcpp::Any visitDate(HistoryParser::DateContext *context) = 0;

    virtual antlrcpp::Any visitAnnee(HistoryParser::AnneeContext *context) = 0;

    virtual antlrcpp::Any visitMois(HistoryParser::MoisContext *context) = 0;

    virtual antlrcpp::Any visitJour(HistoryParser::JourContext *context) = 0;

    virtual antlrcpp::Any visitHeure(HistoryParser::HeureContext *context) = 0;

    virtual antlrcpp::Any visitMinutes(HistoryParser::MinutesContext *context) = 0;

    virtual antlrcpp::Any visitSecondes(HistoryParser::SecondesContext *context) = 0;

    virtual antlrcpp::Any visitSecondLine(HistoryParser::SecondLineContext *context) = 0;

    virtual antlrcpp::Any visitTableInfo(HistoryParser::TableInfoContext *context) = 0;

    virtual antlrcpp::Any visitIdTable(HistoryParser::IdTableContext *context) = 0;

    virtual antlrcpp::Any visitDiez(HistoryParser::DiezContext *context) = 0;

    virtual antlrcpp::Any visitFormat(HistoryParser::FormatContext *context) = 0;

    virtual antlrcpp::Any visitNumberOfPlayer(HistoryParser::NumberOfPlayerContext *context) = 0;

    virtual antlrcpp::Any visitWhoIsButton(HistoryParser::WhoIsButtonContext *context) = 0;

    virtual antlrcpp::Any visitButtonId(HistoryParser::ButtonIdContext *context) = 0;

    virtual antlrcpp::Any visitPositions(HistoryParser::PositionsContext *context) = 0;

    virtual antlrcpp::Any visitRecapPlace(HistoryParser::RecapPlaceContext *context) = 0;

    virtual antlrcpp::Any visitSiege(HistoryParser::SiegeContext *context) = 0;

    virtual antlrcpp::Any visitPseudo(HistoryParser::PseudoContext *context) = 0;

    virtual antlrcpp::Any visitTapis(HistoryParser::TapisContext *context) = 0;

    virtual antlrcpp::Any visitAnteblindSection(HistoryParser::AnteblindSectionContext *context) = 0;

    virtual antlrcpp::Any visitAnteblindHeader(HistoryParser::AnteblindHeaderContext *context) = 0;

    virtual antlrcpp::Any visitAnteligne(HistoryParser::AnteligneContext *context) = 0;

    virtual antlrcpp::Any visitAnteSomme(HistoryParser::AnteSommeContext *context) = 0;

    virtual antlrcpp::Any visitSmallblindligne(HistoryParser::SmallblindligneContext *context) = 0;

    virtual antlrcpp::Any visitSmallblindSomme(HistoryParser::SmallblindSommeContext *context) = 0;

    virtual antlrcpp::Any visitBigblindligne(HistoryParser::BigblindligneContext *context) = 0;

    virtual antlrcpp::Any visitBigblindSomme(HistoryParser::BigblindSommeContext *context) = 0;

    virtual antlrcpp::Any visitCardligne(HistoryParser::CardligneContext *context) = 0;

    virtual antlrcpp::Any visitCartePerso(HistoryParser::CartePersoContext *context) = 0;

    virtual antlrcpp::Any visitPreflopSection(HistoryParser::PreflopSectionContext *context) = 0;

    virtual antlrcpp::Any visitPreflopHeader(HistoryParser::PreflopHeaderContext *context) = 0;

    virtual antlrcpp::Any visitPlayAction(HistoryParser::PlayActionContext *context) = 0;

    virtual antlrcpp::Any visitRaiseAction(HistoryParser::RaiseActionContext *context) = 0;

    virtual antlrcpp::Any visitFoldAction(HistoryParser::FoldActionContext *context) = 0;

    virtual antlrcpp::Any visitBetAction(HistoryParser::BetActionContext *context) = 0;

    virtual antlrcpp::Any visitCheckAction(HistoryParser::CheckActionContext *context) = 0;

    virtual antlrcpp::Any visitCallAction(HistoryParser::CallActionContext *context) = 0;

    virtual antlrcpp::Any visitInitialRaiseValue(HistoryParser::InitialRaiseValueContext *context) = 0;

    virtual antlrcpp::Any visitFinalraiseValue(HistoryParser::FinalraiseValueContext *context) = 0;

    virtual antlrcpp::Any visitBetValue(HistoryParser::BetValueContext *context) = 0;

    virtual antlrcpp::Any visitCallValue(HistoryParser::CallValueContext *context) = 0;

    virtual antlrcpp::Any visitWin(HistoryParser::WinContext *context) = 0;

    virtual antlrcpp::Any visitFlopSection(HistoryParser::FlopSectionContext *context) = 0;

    virtual antlrcpp::Any visitFlopHeader(HistoryParser::FlopHeaderContext *context) = 0;

    virtual antlrcpp::Any visitFlopcards(HistoryParser::FlopcardsContext *context) = 0;

    virtual antlrcpp::Any visitTurnSection(HistoryParser::TurnSectionContext *context) = 0;

    virtual antlrcpp::Any visitTurnHeader(HistoryParser::TurnHeaderContext *context) = 0;

    virtual antlrcpp::Any visitTurnCards(HistoryParser::TurnCardsContext *context) = 0;

    virtual antlrcpp::Any visitRiverSection(HistoryParser::RiverSectionContext *context) = 0;

    virtual antlrcpp::Any visitRiverHeader(HistoryParser::RiverHeaderContext *context) = 0;

    virtual antlrcpp::Any visitRiverCards(HistoryParser::RiverCardsContext *context) = 0;

    virtual antlrcpp::Any visitShowdownSection(HistoryParser::ShowdownSectionContext *context) = 0;

    virtual antlrcpp::Any visitShowdownHeader(HistoryParser::ShowdownHeaderContext *context) = 0;

    virtual antlrcpp::Any visitCombinaisonLigne(HistoryParser::CombinaisonLigneContext *context) = 0;

    virtual antlrcpp::Any visitCombinaison(HistoryParser::CombinaisonContext *context) = 0;

    virtual antlrcpp::Any visitResultLigne(HistoryParser::ResultLigneContext *context) = 0;

    virtual antlrcpp::Any visitWhereCollected(HistoryParser::WhereCollectedContext *context) = 0;

    virtual antlrcpp::Any visitShowdownValue(HistoryParser::ShowdownValueContext *context) = 0;

    virtual antlrcpp::Any visitSummarySection(HistoryParser::SummarySectionContext *context) = 0;

    virtual antlrcpp::Any visitSummaryHeader(HistoryParser::SummaryHeaderContext *context) = 0;

    virtual antlrcpp::Any visitPotSummary(HistoryParser::PotSummaryContext *context) = 0;

    virtual antlrcpp::Any visitPotValue(HistoryParser::PotValueContext *context) = 0;

    virtual antlrcpp::Any visitRakeValue(HistoryParser::RakeValueContext *context) = 0;

    virtual antlrcpp::Any visitBoardline(HistoryParser::BoardlineContext *context) = 0;

    virtual antlrcpp::Any visitBoardCards(HistoryParser::BoardCardsContext *context) = 0;

    virtual antlrcpp::Any visitPlayerSummary(HistoryParser::PlayerSummaryContext *context) = 0;

    virtual antlrcpp::Any visitPosition(HistoryParser::PositionContext *context) = 0;

    virtual antlrcpp::Any visitResult(HistoryParser::ResultContext *context) = 0;

    virtual antlrcpp::Any visitWithWhat(HistoryParser::WithWhatContext *context) = 0;

    virtual antlrcpp::Any visitShowdownWin(HistoryParser::ShowdownWinContext *context) = 0;

    virtual antlrcpp::Any visitShowdownLose(HistoryParser::ShowdownLoseContext *context) = 0;

    virtual antlrcpp::Any visitJustWin(HistoryParser::JustWinContext *context) = 0;

    virtual antlrcpp::Any visitWinValue(HistoryParser::WinValueContext *context) = 0;


};

}  // namespace antlrcpptest
