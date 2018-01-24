lexer grammar HistoryLexer;
/*********************************
*********************************/
/*
██      ███████ ██   ██ ███████ ██████  ██████  ██    ██ ██      ███████ ███████
██      ██       ██ ██  ██      ██   ██ ██   ██ ██    ██ ██      ██      ██
██      █████     ███   █████   ██████  ██████  ██    ██ ██      █████   ███████
██      ██       ██ ██  ██      ██   ██ ██   ██ ██    ██ ██      ██           ██
███████ ███████ ██   ██ ███████ ██   ██ ██   ██  ██████  ███████ ███████ ███████
*/

WINAMAXPOKER
  : 'Winamax Poker'
  ;

MINUS
  : '-'
  ;

TOURNAMENT
  : 'Tournament'
  ;

QUOTE
  : '"'
  ;

BUYIN
  : 'buyIn:'
  ;

EURO
  : '€'
  ;

PLUS
  : '+'
  ;

LEVEL
  : 'level:'
  ;

HANDID
  : 'HandId: #'
  ;

HNL
    : 'Holdem no limit'
    ;

SLASH
  : '/'
  ;

UTC
  : 'UTC'
  ;

TABLE
  : 'Table:'
  ;

SQUOTE
  : '\''
  ;

HASHTAG
  : '#'
  ;

REALMONEY
  : 'real money'
  ;

SEATALONE
  : 'Seat'
  ;

ISBUTTON
  : 'is the button'
  ;

ANTEBLIND
  : '*** ANTE/BLINDS ***'
  ;

POSTANTE
  : 'posts ante'
  ;

ISALLIN
  : 'and is all-in'
  ;

POSTSB
  : 'posts small blind'
  ;

POSTBB
  : 'posts big blind'
  ;

DEALTTO
  : 'Dealt to'
  ;

PREFLOP
  : '*** PRE-FLOP ***'
  ;

RAISE
  : 'raises'
  ;

TO
  : 'to'
  ;

FOLD
  : 'folds'
  ;

BET
  : 'bets'
  ;

CHECK
  : 'checks'
  ;

CALL
  : 'calls'
  ;

COLLECTED
  : 'collected'
  ;

FROMPOT
  : 'from pot'
  ;

FLOP
  : '*** FLOP ***'
  ;

TURN
  : '*** TURN ***'
  ;

RIVER
  : '*** RIVER ***'
  ;

SHOWDOWN
  : '*** SHOW DOWN ***'
  ;

SHOW
  : 'shows'
  ;

FROMSP
  : 'from side pot'
  ;

FROMMP
  : 'from main pot'
  ;

SUMMARY
  : '*** SUMMARY ***'
  ;

TOTALPOT
  : 'Total pot'
  ;

OU
  : '|'
  ;

NORAKE
  : 'No rake'
  ;

BOARD
  : 'Board:'
  ;

SHOWED
  : 'showed'
  ;

BUTTON
  : 'button'
  ;

SMALLBLIND
  : 'small blind'
  ;

BIGBLIND
  : 'big blind'
  ;

WITH
  : 'with'
  ;

AND
  :'and'
  ;

WON
  : 'won'
  ;

LOST
  : 'lost'
  ;




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
