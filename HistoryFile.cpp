#include "HistoryFile.h"

HistoryFile::HistoryFile( string fileName ){
  alias = "Balbo6z";
  data = setData(fileName);
  // nRaws = 0;
  // nHands = 0;
  // typeOfPlay = nullptr;
}

string HistoryFile::setData( string fileName ){
  //Defines the path
  string path =
  "D:/Users/Loic/Documents/Winamax Poker/accounts/"+alias+"/history/"+
  fileName;

  cout << path << endl;
  string line;
  ifstream file(path, ios::in);  // open of the file in read mode

  if(file)  // if success
  {
    while (getline( file , line )) {
      data += line;
      cout << line; //TODO: Supprimer l'affichage
    }
    file.close();  // close of the file
  }
  else  // else print error
          cerr << "Impossible d'ouvrir le fichier !" << endl;
  return "nijlnj";
}
