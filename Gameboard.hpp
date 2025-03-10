// Gameboard.hpp
#pragma once
#include <iostream>
#include <array>

class GameBoard
{ 
  private:
    //create the 'board' array that will hold the gameboard
    std::array<std::array<char, 7>, 6> board;
    //initialize board function in private to prevent tampering
    void initializeGameBoard();
    //use player choice to place piece
    void placePiece();

  public:
    //constructor
    GameBoard();
    //display the board - can be public as no data is changed with this function
    void displayGameBoard() const;
    //check if there is a space at top of board to place piece
    bool validityCheck(int sub_col);
    /*
    //bool to see if board is full
    void fullBoard() const;
    //check for a vicroy - do this later
    void winCheck() const;
    //use player choice to place piece
    void placePiece();
    */
};