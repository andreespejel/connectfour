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
    //check if there is a space at top of board to place piece
    bool validityCheck(int pl_choice_col) const;
    //find the lowest row value given a column as player input
    int lowestYValue(int column_to_search) const;
   
  public:
    //constructor
    GameBoard();
    //display the board - can be public as no data is changed with this function
    void displayGameBoard() const;
    //bool to see if board is full
    bool fullBoard() const;
    //use player choice to place piece
    void placePiece(int selected_col);

    /*
    //check for a vicroy - do this later
    void winCheck() const;
    */
};