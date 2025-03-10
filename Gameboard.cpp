// Gameboard.cpp
#include <iostream>
#include "Gameboard.hpp"

GameBoard::GameBoard()
{
  initializeGameBoard();
}

void GameBoard::initializeGameBoard()
{
  //initialize GameBoard with ' ' for all elements
  for (int i = 0; i< 6; i++)
      {
        for (int j = 0; j < 7; j++)
        {
          board[i][j] = ' ';
        }
      }
}

void GameBoard::displayGameBoard() const
{
  //displays game board visually in bash
  std::cout << "---------------------" << std::endl;
  for (int a = 0; a < 6; a++)
  {
    for (int b = 0; b < 7; b++)
    {
      std::cout << "|" << board[a][b] << "|";
    }
    std::cout << std::endl;
    std::cout << "---------------------" << std::endl;
  }
}

//check if there is a space at top of board to place piece
bool GameBoard::validityCheck(int col)
{
  bool valid_play = false;
  if (col < 0 || col > 6)
  {
    std::cout << "Please select a column that is listed, sweaty. NEXT!!" << std::endl;
    return false;
  }
  
  if (board[0][col] != ' ')
  {
    std::cout << "That column is full, choose another" << std::endl;
    return false;
  }
  else
  {
    std::cout << "That's one valid ass move" << std::endl;
    return true;
  }
}
    /*bool to see if board is full
void GameBoard::fullBoard()
{
;
}
//check for a vicroy - do this later
void GameBoard::winCheck()
{
;
}
//use player choice to place piece
void GameBoard::placePiece()
{
;
}
    */
