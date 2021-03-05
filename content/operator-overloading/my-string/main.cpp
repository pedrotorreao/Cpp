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

    return 0;
}