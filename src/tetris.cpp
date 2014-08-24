#include "tetris.h"

using std::cout;
using std::cin;

// BOARD CLASS DEFINITIONS

board::board() {
  game = new string[HEIGHT];
  build();
}

board::~board() {
  delete [] game;
}

void board::build() {
  for(int i=0; i<HEIGHT; ++i)
    game[i] = ". . . . . . . . . .";
}


void board::display() {
  for(int i=0; i<HEIGHT; ++i)
    cout << game[i] << '\n';
}


void board::play() {
  char * input = new char[LENGTH+1];
  for(int i=0; i<HEIGHT; ++i) {
    cin.get(input, LENGTH, '\n'); cin.ignore();
    game[i] = input;
  }
}


// TETRIS CLASS DEFINITIONS

void tetris::display() {
  game.display();
}


void tetris::play() {
  game.play();
}
