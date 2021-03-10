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

// Make object lowercase (overloading the '-' operator):
MyString MyString::operator-() const
{
    char *buff = new char[std::strlen(this->str) + 1];
    std::strcpy(buff, this->str);

    for (size_t i{0}; i < std::strlen(buff); ++i)
    {
        buff[i] = std::tolower(buff[i]);
    }

    MyString temp{buff};
    delete[] buff;

    return temp;
}

// Concatenate objects (overloading the '+' operator):
MyString MyString::operator+(const MyString &rhs) const
{
    size_t buffSize = std::strlen(this->str) + std::strlen(rhs.str) + 1;
    char *buff = new char[buffSize];

    std::strcpy(buff, this->str);
    std::strcat(buff, rhs.str);

    MyString temp{buff};
    delete[] buff;

    return temp;
}

// Check for equality (overloading the '==' operator):
bool MyString::operator==(const MyString &rhs) const
{
    if (std::strcmp(this->str, rhs.str) == 0)
    {
        return true;
    }
    return false;
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