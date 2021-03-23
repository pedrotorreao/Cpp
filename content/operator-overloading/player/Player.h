#pragma once

class Player
{
  // Overloads the stream insertion operator
  friend std::ostream &operator<<(std::ostream &os, const Player &srcPlayer);

  // Compare Player levels:
  friend bool operator>=(const Player &lhs, const Player &rhs);

private:
  /* insert private data */
  char *userName;
  char *userClass;
  int userXP;
  int userHP;
  int userLvl;

public:
  /* constructors, getters and setters */
  Player(); // No-args constructor

  Player(const char *playerName, const char *playerClass, int playerXP, int playerHP, int playerLvl); // Overloaded constructor

  Player(const Player &srcPlayer); // Copy constructor

  Player(Player &&srcPlayer); // Move constructor

  ~Player(); // Destructor

  /* overloading the assignment operators */
  Player &operator=(const Player &rhs); // Copy assignment
  Player &operator=(Player &&rhs);      // Move assignment

  /* overloading operators as member methods */
  void operator++();                        // Upgrade Player Class
  void operator--();                        // Lower Player Class
  bool operator==(const Player &rhs) const; // Check for equality
};