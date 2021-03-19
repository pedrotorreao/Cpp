#include <cstring>
#include <iostream>
#include "Player.h"

/* * * *  Definitions * * * */

// No-args constructor:
Player::Player()
    : userName{nullptr}, userClass{nullptr}, userXP{0}, userHP{0}
{
  userName = new char[1];
  userClass = new char[1];
  *userName = '\0';
  *userClass = '\0';

  std::cout << "... no args constructor called"
            << "\n";
}

// Overloaded constructor:
Player::Player(const char *playerName, const char *playerClass, int playerXP, int playerHP)
    : userName{nullptr}, userClass{nullptr}, userXP{playerXP}, userHP{playerHP}
{
  if (playerName == nullptr)
  {
    userName = new char[1];
    *userName = '\0';
  }
  else
  {
    userName = new char[std::strlen(playerName) + 1];
    std::strcpy(userName, playerName);
  }

  if (playerClass == nullptr)
  {
    userClass = new char[1];
    *userClass = '\0';
  }
  else
  {
    userClass = new char[std::strlen(playerClass) + 1];
    std::strcpy(userClass, playerClass);
  }

  std::cout << "... overloaded constructor called"
            << "\n";
}

// Copy constructor:
Player::Player(const Player &srcPlayer)
    : userName{nullptr}, userClass{nullptr}, userXP{srcPlayer.userXP}, userHP{srcPlayer.userHP}
{
  userName = new char[std::strlen(srcPlayer.userName) + 1];
  std::strcpy(this->userName, srcPlayer.userName);

  userClass = new char[std::strlen(srcPlayer.userClass) + 1];
  std::strcpy(this->userClass, srcPlayer.userClass);

  std::cout << "... copy constructor called"
            << "\n";
}

// Move constructor:
Player::Player(Player &&srcPlayer)
    : userName{srcPlayer.userName}, userClass{srcPlayer.userClass}, userXP{srcPlayer.userXP}, userHP{srcPlayer.userHP}
{
  srcPlayer.userName = nullptr;
  srcPlayer.userClass = nullptr;

  std::cout << "... move constructor called"
            << "\n";
}
// Destructor:
Player::~Player()
{
  delete[] userName;
  delete[] userClass;

  std::cout << "... destructor called"
            << "\n";
}
// Copy assignment:

// Move assignment:

// Overloaded operators as member methods:

// Overloaded operators as non-member functions (friends):

// Setters and Getters: