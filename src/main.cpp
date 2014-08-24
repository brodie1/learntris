// learntris | brodie herrick

#include "tetris.h"
#include <cstdlib>

using std::cout;
using std::cin;

bool again();

int main(){
  tetris learn;
  char choice;
  // system("clear");
  // do{
  //   cout << "what would you like to do?\n"
  //        << "(p)rint the matrix\n"
  //        << "(g)ive a line to the program\n"
  //        << "(q)uit the program\n";
    cin >> choice; cin.ignore();
    switch(choice){
    case 'p':
      learn.display();
      break;
    case 'g':
      learn.play();
      break;
    case 'q':
      break;
    }
    // }while(again());
  return 0;
}

bool again() {
  char choice;
  cout << "again? (y/n) ";
  cin >> choice; cin.ignore();
  if(tolower(choice) == 'y')
    return true;
}
