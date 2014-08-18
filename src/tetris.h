// learntris | brodie herrick

// let's make tetris!

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

const int HEIGHT = 22;


class tetris{
 public:
  tetris();
  
  void build(); // builds an empty board
  void display(); //displays the state of the object's board

 private:
  string * board; //holds the state of the object's board
};
