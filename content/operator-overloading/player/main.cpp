#include <iostream>
#include "Player.h"

int main()
{
  /* driver code and tests*/
  Player player1;                                    // Calls the no-args constructor
  Player player2("Gandalf", "Wizard", 1000, 100, 0); // Overloaded constructor
  Player player3("Sauron", "Villain", 2000, 100, 5); // Overloaded constructor
  Player player4("JohnDoe", "Soldier", 50, 50, 0);   // Overloaded constructor
  Player player5{player4};                           // Copy constructor

  player1 = Player("JaneDoe", "Soldier", 55, 55, 3); // Move assignment
  player5 = player1;                                 // Copy assignment called
  std::cout << "player1 equal to player5: " << (player1 == player5) << "\n";

  std::cout << player1;
  ++player1;
  std::cout << player1;

  std::cout << player2;
  --player2;
  std::cout << player2;

  std::cout << player3;
  --player3;
  std::cout << player3;

  std::cout << "player1 equal to player4: " << (player1 == player4) << "\n";

  std::cout << "player1 equal to player5: " << (player1 == player5) << "\n";
  ++player5;
  std::cout << "player1 equal to player5: " << (player1 == player5) << "\n";
  std::cout << player1;
  std::cout << player5;

  std::cout << "player1 stronger than player4: " << (player1 >= player4) << "\n";

  std::cout << "player2 stronger than player3: " << (player2 >= player3) << "\n";

  return 0;
}