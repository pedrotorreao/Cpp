#pragma once

class MyString
{
private:
    char *str; // pointer to a char[] that holds a C-style string

public:
    MyString();                    // No args constructor
    MyString(const char *s);       // Overloaded constructor
    MyString(const MyString &src); // Copy constructor
    ~MyString();                   // Destructor

    MyString &operator=(const MyString &rhs); //Copy assignment

    // Getters:
    void displayMyString() const;
    int getMyStringLength() const;
    const char *getMyString() const;
};
