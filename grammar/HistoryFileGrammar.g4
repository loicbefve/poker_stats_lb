grammar HistoryFileGrammar;
/*
██████   █████  ██████  ███████ ███████ ██████  ██████  ██    ██ ██      ███████ ███████
██   ██ ██   ██ ██   ██ ██      ██      ██   ██ ██   ██ ██    ██ ██      ██      ██
██████  ███████ ██████  ███████ █████   ██████  ██████  ██    ██ ██      █████   ███████
██      ██   ██ ██   ██      ██ ██      ██   ██ ██   ██ ██    ██ ██      ██           ██
██      ██   ██ ██   ██ ███████ ███████ ██   ██ ██   ██  ██████  ███████ ███████ ███████
*/


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
  : 'Winamax Poker -' gameInfo '-' handId '-' typePlay '-' date
  ;

gameInfo
  : typeOfGame nameOfGame buyin level
  ;

typeOfGame
  : 'Tournament'
  ;

nameOfGame
  : '"' MOT+ '"'
  ;

buyin
  : 'buyIn:' buyValue '€ +' rakeBuyValue '€'
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
  : 'level:' levelValue
  ;

levelValue
  : NUMBER
  | DIGIT
  ;

handId
  : 'HandId: #' handIdValue
  ;

handIdValue
  : MOT
  ;

typePlay
  : 'Holdem no limit' LPAREN anteValue '/' smallblindValue '/' bigblindValue RPAREN
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
  : annee '/' mois '/' jour heure COLON minutes COLON secondes 'UTC'
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
  : 'Table:' tableInfo format whoIsButton
  ;

tableInfo
  : '\'' MOT+ LPAREN idTable RPAREN '#' diez '\''
  ;

idTable
  : NUMBER
  ;

diez
  : NUMBER
  ;

format
  : numberOfPlayer '(real money)'
  ;

numberOfPlayer
  : MOT
  ;

whoIsButton
  : 'Seat #' buttonId 'is the button'
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
  : '*** ANTE/BLINDS ***'
  ;

anteligne
  : pseudo 'posts ante' anteSomme 'and is all-in'?
  ;

anteSomme
  : NUMBER
  | DIGIT
  ;

smallblindligne
  : pseudo 'posts small blind' smallblindSomme 'and is all-in'?
  ;

smallblindSomme
  : NUMBER
  ;

bigblindligne
  : pseudo 'posts big blind' bigblindSomme 'and is all-in'?
  ;

bigblindSomme
  : NUMBER
  ;

cardligne
  : 'Dealt to' pseudo cartePerso
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
  : '*** PRE-FLOP ***'
  ;

playAction
  : (raiseAction|foldAction|betAction|checkAction|callAction)
  ;

raiseAction
  : pseudo 'raises' initialRaiseValue 'to' finalraiseValue 'and is all-in'?
  ;

foldAction
  : pseudo 'folds'
  ;

betAction
  : pseudo 'bets' betValue 'and is all-in'?
  ;

checkAction
  : pseudo 'checks'
  ;

callAction
  : pseudo 'calls' callValue 'and is all-in'?
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
  : pseudo 'collected' NUMBER 'from pot'
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
  : '*** FLOP ***' flopcards
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
  : '*** TURN ***' turnCards
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
  : '*** RIVER ***' riverCards
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
  : '*** SHOW DOWN ***'
  ;

combinaisonLigne
  : pseudo 'shows' cartePerso combinaison
  ;

combinaison
  : LPAREN (MOT|DIGIT)+ (COLON (MOT|DIGIT)+)? RPAREN
  ;
resultLigne
  : pseudo 'collected' showdownValue whereCollected
  ;

whereCollected
  : 'from pot'
  | 'from side pot' (NUMBER|DIGIT)
  | 'from main pot'
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
  : '*** SUMMARY ***'
  ;

potSummary
  : 'Total pot' potValue '|' ('No rake'|rakeValue)
  ;

potValue
  : NUMBER
  ;

rakeValue
  : NUMBER
  ;

boardline
  : 'Board:' boardCards
  ;

boardCards
  : LCROCH MOT+ RCROCH
  ;

playerSummary
  : siege pseudo position? ('showed' cartePerso)? result withWhat?
  ;

position
  : LPAREN 'button' RPAREN
  | LPAREN 'small blind' RPAREN
  | LPAREN 'big blind' RPAREN
  ;

result
  : showdownWin
  | showdownLose
  | justWin
  ;

withWhat
  : 'with' (MOT|NUMBER)+ (COLON (MOT|NUMBER)+)?
  ;

showdownWin
  : 'and won' winValue
  ;

showdownLose
  : 'and lost'
  ;

justWin
  : 'won' winValue
  ;

winValue
  : NUMBER
  ;


/*********************************
*********************************/
/*
██      ███████ ██   ██ ███████ ██████  ██████  ██    ██ ██      ███████ ███████
██      ██       ██ ██  ██      ██   ██ ██   ██ ██    ██ ██      ██      ██
██      █████     ███   █████   ██████  ██████  ██    ██ ██      █████   ███████
██      ██       ██ ██  ██      ██   ██ ██   ██ ██    ██ ██      ██           ██
███████ ███████ ██   ██ ███████ ██   ██ ██   ██  ██████  ███████ ███████ ███████
*/


DIGIT
  : [0-9]
  ;

NUMBER
  : DIGIT+
  ;

LPAREN
  : '('
  ;

RPAREN
  : ')'
  ;

LCROCH
  : '['
  ;

RCROCH
  : ']'
  ;

SEAT
  : 'Seat' WS NUMBER
  ;

COLON
  : ':'
  ;

MOT
  : [._a-zA-Z0-9-]+
  ;

WS
  : [ \t\r\n] -> skip
  ;
