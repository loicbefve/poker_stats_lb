#ifndef PLAYER_HAND
#define PLAYER_HAND

class PlayerHand{

private:
  int handNumber;
  int seat;
  char* preFlopAction;
  char* flopAction;
  char* turnAction;
  char* riverAction;
  char* showDown;

public:
  PlayerHand();

};


#endif /* end of include guard: PLAYER_HAND */
