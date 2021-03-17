#include <iostream>
#include "MyString.h"

int main()
{
    MyString emptyStr;           // Calls the no-args constructor
    MyString userName("James");  // Overloaded constructor
    MyString copyName{userName}; // Copy constructor

    emptyStr = copyName; // Copy assignment
    userName = "John";   // Move assignment
    copyName = userName; // Copy assignment

    emptyStr.displayMyString();
    userName.displayMyString();
    copyName.displayMyString();

    std::cout << "copyName is the same as userName? " << (copyName == userName) << "\n"; // Check for equality
    std::cout << "emptyStr is the same as copyName? " << (emptyStr == copyName) << "\n"; // Check for equality

    emptyStr = -userName; // Make a lowercase copy

    emptyStr.displayMyString();
    userName.displayMyString();
    copyName.displayMyString();

    MyString everybody = emptyStr + " " + userName + " " + copyName; // Concatenate objects

    everybody.displayMyString();

    emptyStr = "Joe"; // Move assignment

    bool cmpStr = (emptyStr > userName);
    std::cout << (cmpStr ? "emptyStr holds the larger string" : "userName is the same size or larger") << "\n";

    std::cout << "Username: " << userName << "\n";

    std::cout << "Enter new username: ";
    std::cin >> userName;

    std::cout << "Username: " << userName << "\n";

    return 0;
}