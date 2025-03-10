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
  for (int i = 0; i < 6; i++)
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
bool GameBoard::validityCheck(int col) const
{
  bool valid_play = false;
  if (col < 0 || col > 6)
  {
    std::cout << "Please select a column that is listed, sweaty. NEXT!!" << std::endl;
    return valid_play;
  }
  
  if (board[0][col] != ' ')
  {
    std::cout << "That column is full, choose another" << std::endl;
    return valid_play;
  }
  else
  {
    valid_play = true;
    std::cout << "That's one valid ass move" << std::endl;
    return valid_play;
  }
}

//bool to see if board is full
bool GameBoard::fullBoard() const
{
    for (int i = 0; i < 7; i++)
    {
        if (board[0][i] == ' ')
        {
          return false;
        }
    }
    std::cout << "That board ain't full";
    return true;
}
/*
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
