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
    std::cout << "Copy contructor used for " << str << "\n";
}

MyString::MyString(MyString &&src)
    : str{src.str} // Steals the pointer
{
    src.str = nullptr; // Nullify 'src.str'
    std::cout << "Move contructor used for " << str << "\n";
}

// Destructor:
MyString::~MyString()
{
    delete[] str;
}

// Copy assignment:
MyString &MyString::operator=(const MyString &rhs)
{
    std::cout << "...calling copy assignment for " << rhs.str << "\n";

    // 'this' is a pointer for the current object, the lhs of the assignment
    if (this == &rhs) // Checks for self-assignment, comparing both addresses
    {
        return *this;
    }

    // Deallocate storage for this->str, clearing whatever is on str, since it's gonna be overwritten:
    delete[] this->str;

    // Allocate storage for deep copy:
    str = new char[std::strlen(rhs.str) + 1];

    // Perform the copy:
    std::strcpy(this->str, rhs.str);

    return *this;
}

// Move assignment:
MyString &MyString::operator=(MyString &&rhs)
{
    std::cout << "...calling move assignment for " << rhs.str << "\n";

    // 'this' is a pointer for the current object, the lhs of the assignment
    if (this == &rhs) // Checks for self-assignment, comparing both addresses
    {
        return *this;
    }
    // Deallocate storage for this->str, clearing whatever is on str, since it's gonna be overwritten:
    delete[] this->str;

    // Steals the pointer, so now 'this->str' points to the same address as 'rhs.str':
    str = rhs.str;

    // Nullify the 'rhs.str' pointer to avoid the temporary object rhs taking the data with it when it gets destroyed:
    rhs.str = nullptr;

    return *this;
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