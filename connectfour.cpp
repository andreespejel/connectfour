#include <iostream>

/*
  call headers:
  - gameboard.hpp, gameboard.cpp <- these will do the following
    --create the board 
    --initialize board with ' ' 
    --display the current state of the board

  - gameplay.hpp, gameplay.cpp <- these will do the following
    --check validity of turn
    --place a piece
    --check for win
    --check for full board
    --switch player turn

  - players.hpp, players.cpp <- these will do the following
    --collect player usernames
    --hold player symbol (x or o)
*/
//gameboard call
#include "Gameboard.hpp"

int main()
{
  //create / initialize board / show board
  GameBoard board;
  int input = 3;

  board.displayGameBoard();
  board.validityCheck(input);
  //get player names

  //GAME LOOP BEGINS (42 turns or until winner is declared)
  
  //get player turn input
  
    //check for valid placement

  //place the piece

  //check for win horizontally, vertically, diagonally

    //win? break and declare winner

    //no win? check if board is full

      //board is full - declare a draw
  
  //switch player turn then restart loop

  //winner - call the loser a pussy, nice nice very good

  return 0;
}