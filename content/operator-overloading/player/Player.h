#pragma once

class Player
{
private:
  /* insert private data */
  char *userName;
  char *userClass;
  int userXP;
  int userHP;

public:
  /* insert constructors, getters and setters */
  Player();                                                                            // No-args constructor
  Player(const char *playerName, const char *playerClass, int playerXP, int playerHP); // Overloaded constructor
  Player(const Player &srcPlayer);                                                     // Copy constructor
  Player(Player &&srcPlayer);                                                          // Move constructor
  ~Player();                                                                           // Destructor

  /* overloading the assignment operators */
  Player &operator=(const Player &rhs); // Copy assignment
  Player &operator=(Player &&rhs);      // Move assignment
};