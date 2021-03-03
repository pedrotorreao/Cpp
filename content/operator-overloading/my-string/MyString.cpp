#include <cstring>
#include <iostream>
#include "MyString.h"

/* * * *  Definitions * * * */

// No-args constructor:
MyString::MyString()
    : str{nullptr}
{
    str = new char[1]; // Allocates storage for one char on the heap
    *str = '\0';       // Assigns the null terminator to the allocated memory
}

// Overloaded constructor:
MyString::MyString(const char *s)
    : str{nullptr}
{
    if (s == nullptr) // Checks if the string passed as argument is a nullptr
    {
        str = new char[1];
        *str = '\0';
    }
    else
    {
        str = new char[std::strlen(s) + 1]; // Allocates storage on the heap for s length + 1 ('\0')
        std::strcpy(str, s);                // Copies the string s to newly allocated memory
    }
}

// Copy constructor:
MyString::MyString(const MyString &src)
    : str{nullptr}
{
    str = new char[std::strlen(src.str) + 1]; // Allocates storage on the heap for s length + 1 ('\0')
    std::strcpy(str, src.str);                // Copies the string s to newly allocated memory
}

// Destructor:
MyString::~MyString()
{
    delete[] str;
}

void MyString::displayMyString() const
{
    std::cout << str << " : " << getMyStringLength() << "\n";
}
int MyString::getMyStringLength() const
{
    return std::strlen(str);
}
const char *MyString::getMyString() const
{
    return str;
}