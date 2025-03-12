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

  board[2][0] = 'x';
  board[3][0] = 'x';
  board[4][0] = 'x';
  board[5][0] = 'x';
}

void GameBoard::placePiece(int b)
{
  char player_turn = 'o';
  bool valid_placement = validityCheck(b);
  int row = lowestYValue(b);
  std::cout << row << ": this row shall receive a piece of MY mind" << std::endl;
  if (valid_placement)
  {
    board[row][b] = player_turn;
    std::cout << player_turn << " has been placed." << std::endl;
  }
  else
  return;
}

//find the lowest row that a piece can be places on
int GameBoard::lowestYValue(int col_to_search) const
{
  int current_row = 5;
  do
  {
    if (board[current_row][col_to_search] == ' ')
    {
      return current_row;                   //returns the first empty row
    }
      current_row--;                        //moves to next row
  } while (current_row >= 0);

  return -1;
}

//check if there is a space at top of board to place piece
bool GameBoard::validityCheck(int player_col) const
{
  bool valid_play = false;
  if (player_col < 0 || player_col > 6)
  {
    std::cout << "Please select a column that is listed, sweaty. NEXT!!" << std::endl;
    return valid_play;
  }
  else if (board[0][player_col] != ' ')
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

//bool to see if board is full
bool GameBoard::fullBoard() const
{
    for (int i = 0; i < 7; i++)
    {
        if (board[0][i] == ' ')
        {
          std::cout << "That board ain't full" << std::endl;
          return false;
        }
    }
    std::cout << "That board is hella full" << std::endl;
    return true;
}

/*
//check for a vicroy - do this later
void GameBoard::winCheck()
{
;
}
    */
