#ifndef HISTORY
#define HISTORY


#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class HistoryFile{

private:
  string alias;
  string data;
  int nRaws;
  int nHands;
  string typeOfPlay;
  string setData( string fileName );
  int setNRaws( string data );
  int setNHands( string data );
  string setTypeOfPlay( string data );

public:
  HistoryFile( string fileName );
  int initHistoryFile( HistoryFile f );
  string getData();
  int getNHands();
  string getTypeOfPlay();
};

#endif /* end of include guard: HISTORY */
