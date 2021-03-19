#include <iostream>
#include "Player.h"

int main()
{
  /* driver code and tests*/
  Player player1;                                 // Calls the no-args constructor
  Player player2("Gandalf", "Wizard", 1000, 100); // Overloaded constructor
  Player player3("Sauron", "Villain", 2000, 100); // Overloaded constructor
  Player player4("JohnDoe", "Soldier", 50, 50);   // Overloaded constructor
  Player player5{player4};                        // Copy constructor

  player1 = Player("JaneDoe", "Maiden", 55, 55); // Move assignment
  player5 = player1;                             // Copy assignment called

  return 0;
}