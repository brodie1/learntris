// learntris | brodie herrick

// let's make tetris!

#include <iostream>
#include <string>
#include <cstring>
#include <cctype>

using std::string;

const int HEIGHT = 22;
const int LENGTH = 20;

class board {
 public:
  board();
  ~board();
  void build(); // builds an empty board
  void display(); // displays the state of the board
  void play(); // allows the player to input each line on the board

 private:
  string * game;
};

class tetris {
 public:
  void display();
  void play();

 private:
  board game;
};
