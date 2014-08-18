#include "tetris.h"


tetris::tetris() {
  board = new string[HEIGHT];
  build();
}

void tetris::build() {
  for(int i=0; i<HEIGHT; ++i) {
    board[i] = ". . . . . . . . . .\n";
  }
}

void tetris::display() {
  for(int i=0; i<HEIGHT; ++i)
    cout << board[i];
}
