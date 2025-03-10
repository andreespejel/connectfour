//Gameplay.hpp
#pragma once
#include <iostream>
#include "Gameboard.hpp"

class GamePlay 
{
  private:
    //switch player turn
    void switchTurn();

  public:
    //GamePlay constructor
    GamePlay();
    //runGame function, begins the running process
    void runGame();
};