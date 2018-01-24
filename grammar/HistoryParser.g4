parser grammar HistoryParser;
/*
██████   █████  ██████  ███████ ███████ ██████  ██████  ██    ██ ██      ███████ ███████
██   ██ ██   ██ ██   ██ ██      ██      ██   ██ ██   ██ ██    ██ ██      ██      ██
██████  ███████ ██████  ███████ █████   ██████  ██████  ██    ██ ██      █████   ███████
██      ██   ██ ██   ██      ██ ██      ██   ██ ██   ██ ██    ██ ██      ██           ██
██      ██   ██ ██   ██ ███████ ███████ ██   ██ ██   ██  ██████  ███████ ███████ ███████
*/

options {
	tokenVocab = HistoryLexer;
}

fichier
  : hand+
  ;
  /*
  ██   ██  █████  ███    ██ ██████
  ██   ██ ██   ██ ████   ██ ██   ██
  ███████ ███████ ██ ██  ██ ██   ██
  ██   ██ ██   ██ ██  ██ ██ ██   ██
  ██   ██ ██   ██ ██   ████ ██████
  */


hand
  : handHeader positions jeu summarySection
  ;

handHeader
  : firstLine secondLine
  ;

jeu
  : anteblindSection preflopSection flopSection? turnSection? riverSection? showdownSection?
  ;

  /*
  ███████ ██ ██████  ███████ ████████     ██      ██ ███    ██ ███████
  ██      ██ ██   ██ ██         ██        ██      ██ ████   ██ ██
  █████   ██ ██████  ███████    ██        ██      ██ ██ ██  ██ █████
  ██      ██ ██   ██      ██    ██        ██      ██ ██  ██ ██ ██
  ██      ██ ██   ██ ███████    ██        ███████ ██ ██   ████ ███████
  */


firstLine
  : WINAMAXPOKER MINUS gameInfo MINUS handId MINUS typePlay MINUS date
  ;

gameInfo
  : typeOfGame nameOfGame buyin level
  ;

typeOfGame
  : TOURNAMENT
  ;

nameOfGame
  : QUOTE MOT+ QUOTE
  ;

buyin
  : BUYIN buyValue EURO PLUS rakeBuyValue EURO
  ;

buyValue
  : NUMBER
  | DIGIT
  ;

rakeBuyValue
  : NUMBER
  | DIGIT
  ;

level
  : LEVEL levelValue
  ;

levelValue
  : NUMBER
  | DIGIT
  ;

handId
  : HANDID handIdValue
  ;

handIdValue
  : MOT
  ;

typePlay
  : HNL LPAREN anteValue SLASH smallblindValue SLASH bigblindValue RPAREN
  ;

anteValue
  : NUMBER
  | DIGIT
  ;

smallblindValue
  : NUMBER
  | DIGIT
  ;

bigblindValue
  : NUMBER
  | DIGIT
  ;

date
  : annee SLASH mois SLASH jour heure COLON minutes COLON secondes UTC
  ;

annee
  : NUMBER
  ;

mois
    : NUMBER
    ;

jour
  : NUMBER
  ;

heure
  : NUMBER
  ;

minutes
  : NUMBER
  ;

secondes
  : NUMBER
  ;
/*********************************
*********************************/

/*
███████ ███████  ██████  ██████  ███    ██ ██████      ██      ██ ███    ██ ███████
██      ██      ██      ██    ██ ████   ██ ██   ██     ██      ██ ████   ██ ██
███████ █████   ██      ██    ██ ██ ██  ██ ██   ██     ██      ██ ██ ██  ██ █████
     ██ ██      ██      ██    ██ ██  ██ ██ ██   ██     ██      ██ ██  ██ ██ ██
███████ ███████  ██████  ██████  ██   ████ ██████      ███████ ██ ██   ████ ███████
*/


secondLine
  : TABLE tableInfo format whoIsButton
  ;

tableInfo
  : SQUOTE MOT+ LPAREN idTable RPAREN HASHTAG diez SQUOTE
  ;

idTable
  : NUMBER
  ;

diez
  : NUMBER
  ;

format
  : numberOfPlayer LPAREN REALMONEY RPAREN
  ;

numberOfPlayer
  : MOT
  ;

whoIsButton
  : SEATALONE HASHTAG buttonId ISBUTTON
  ;

buttonId
  : DIGIT
  ;

  /*
  ██████  ███████  ██████  █████  ██████
  ██   ██ ██      ██      ██   ██ ██   ██
  ██████  █████   ██      ███████ ██████
  ██   ██ ██      ██      ██   ██ ██
  ██   ██ ███████  ██████ ██   ██ ██
  */


positions
  : recapPlace+
  ;

recapPlace
  : siege pseudo tapis
  ;

siege
  : SEAT COLON
  ;

pseudo
  : (MOT|NUMBER)+
  ;

tapis
  : LPAREN NUMBER RPAREN
  ;
/*********************************
*********************************/

/*
 █████  ███    ██ ████████ ███████ ██████  ██      ██ ███    ██ ██████
██   ██ ████   ██    ██    ██      ██   ██ ██      ██ ████   ██ ██   ██
███████ ██ ██  ██    ██    █████   ██████  ██      ██ ██ ██  ██ ██   ██
██   ██ ██  ██ ██    ██    ██      ██   ██ ██      ██ ██  ██ ██ ██   ██
██   ██ ██   ████    ██    ███████ ██████  ███████ ██ ██   ████ ██████
*/


anteblindSection
  : anteblindHeader anteligne+ smallblindligne bigblindligne cardligne
  ;

anteblindHeader
  : ANTEBLIND
  ;

anteligne
  : pseudo POSTANTE anteSomme ISALLIN?
  ;

anteSomme
  : NUMBER
  | DIGIT
  ;

smallblindligne
  : pseudo POSTSB smallblindSomme ISALLIN?
  ;

smallblindSomme
  : NUMBER
  ;

bigblindligne
  : pseudo POSTBB bigblindSomme ISALLIN?
  ;

bigblindSomme
  : NUMBER
  ;

cardligne
  : DEALTTO pseudo cartePerso
  ;

cartePerso
  : LCROCH MOT MOT RCROCH
  ;
/*********************************
*********************************/

/*
██████  ██████  ███████ ███████ ██       ██████  ██████
██   ██ ██   ██ ██      ██      ██      ██    ██ ██   ██
██████  ██████  █████   █████   ██      ██    ██ ██████
██      ██   ██ ██      ██      ██      ██    ██ ██
██      ██   ██ ███████ ██      ███████  ██████  ██
*/


preflopSection
  : preflopHeader (playAction+)? combinaisonLigne? win?
  ;

preflopHeader
  : PREFLOP
  ;



playAction
  : (raiseAction|foldAction|betAction|checkAction|callAction)
  ;

raiseAction
  : pseudo RAISE initialRaiseValue TO finalraiseValue ISALLIN?
  ;

foldAction
  : pseudo FOLD
  ;

betAction
  : pseudo BET betValue ISALLIN?
  ;

checkAction
  : pseudo CHECK
  ;

callAction
  : pseudo CALL callValue ISALLIN?
  ;

initialRaiseValue
  : NUMBER
  ;

finalraiseValue
  : NUMBER
  ;

betValue
  : NUMBER
  ;

callValue
  : NUMBER
  ;

win
  : pseudo COLLECTED NUMBER FROMPOT
  ;
/*********************************
*********************************/

/*
███████ ██       ██████  ██████
██      ██      ██    ██ ██   ██
█████   ██      ██    ██ ██████
██      ██      ██    ██ ██
██      ███████  ██████  ██
*/


flopSection
  : flopHeader (playAction+)? combinaisonLigne? win?
  ;

flopHeader
  : FLOP flopcards
  ;

flopcards
  : LCROCH MOT MOT MOT RCROCH
  ;
/*********************************
*********************************/

/*
████████ ██    ██ ██████  ███    ██
   ██    ██    ██ ██   ██ ████   ██
   ██    ██    ██ ██████  ██ ██  ██
   ██    ██    ██ ██   ██ ██  ██ ██
   ██     ██████  ██   ██ ██   ████
*/


turnSection
  : turnHeader (playAction+)? combinaisonLigne? win?
  ;

turnHeader
  : TURN turnCards
  ;

turnCards
  : LCROCH MOT MOT MOT RCROCH LCROCH MOT RCROCH
  ;
/*********************************
*********************************/

/*
██████  ██ ██    ██ ███████ ██████
██   ██ ██ ██    ██ ██      ██   ██
██████  ██ ██    ██ █████   ██████
██   ██ ██  ██  ██  ██      ██   ██
██   ██ ██   ████   ███████ ██   ██
*/


riverSection
  : riverHeader (playAction+)? combinaisonLigne? win?
  ;

riverHeader
  : RIVER riverCards
  ;

riverCards
  : LCROCH MOT MOT MOT MOT RCROCH LCROCH MOT RCROCH
  ;
/*********************************
*********************************/

/*
███████ ██   ██  ██████  ██     ██ ██████   ██████  ██     ██ ███    ██
██      ██   ██ ██    ██ ██     ██ ██   ██ ██    ██ ██     ██ ████   ██
███████ ███████ ██    ██ ██  █  ██ ██   ██ ██    ██ ██  █  ██ ██ ██  ██
     ██ ██   ██ ██    ██ ██ ███ ██ ██   ██ ██    ██ ██ ███ ██ ██  ██ ██
███████ ██   ██  ██████   ███ ███  ██████   ██████   ███ ███  ██   ████
*/


showdownSection
  : showdownHeader combinaisonLigne+ resultLigne+
  ;

showdownHeader
  : SHOWDOWN
  ;

combinaisonLigne
  : pseudo SHOW cartePerso combinaison
  ;

combinaison
  : LPAREN (MOT|DIGIT)+ (COLON (MOT|DIGIT)+)? RPAREN
  ;
resultLigne
  : pseudo COLLECTED showdownValue whereCollected
  ;

whereCollected
  : FROMPOT
  | FROMSP (NUMBER|DIGIT)
  | FROMMP
  ;

showdownValue
  : NUMBER
  ;
/*********************************
*********************************/

/*
███████ ██    ██ ███    ███ ███    ███  █████  ██████  ██    ██
██      ██    ██ ████  ████ ████  ████ ██   ██ ██   ██  ██  ██
███████ ██    ██ ██ ████ ██ ██ ████ ██ ███████ ██████    ████
     ██ ██    ██ ██  ██  ██ ██  ██  ██ ██   ██ ██   ██    ██
███████  ██████  ██      ██ ██      ██ ██   ██ ██   ██    ██
*/


summarySection
  : summaryHeader potSummary boardline? playerSummary+
  ;

summaryHeader
  : SUMMARY
  ;

potSummary
  : TOTALPOT potValue OU (NORAKE|rakeValue)
  ;

potValue
  : NUMBER
  ;

rakeValue
  : NUMBER
  ;

boardline
  : BOARD boardCards
  ;

boardCards
  : LCROCH MOT+ RCROCH
  ;

playerSummary
  : siege pseudo position? (SHOWED cartePerso)? result withWhat?
  ;

position
  : LPAREN BUTTON RPAREN
  | LPAREN SMALLBLIND RPAREN
  | LPAREN BIGBLIND RPAREN
  ;

result
  : showdownWin
  | showdownLose
  | justWin
  ;

withWhat
  : WITH (MOT|NUMBER)+ (COLON (MOT|NUMBER)+)?
  ;

showdownWin
  : AND WON winValue
  ;

showdownLose
  : AND LOST
  ;

justWin
  : WON winValue
  ;

winValue
  : NUMBER
  ;
