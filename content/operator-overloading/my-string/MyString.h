#pragma once

class MyString
{
    friend bool operator>(const MyString &lhs, const MyString &rhs); // Compares string sizes
private:
    char *str; // pointer to a char[] that holds a C-style string

public:
    MyString();                    // No args constructor
    MyString(const char *s);       // Overloaded constructor
    MyString(const MyString &src); // Copy constructor
    MyString(MyString &&src);      // Move constructor
    ~MyString();                   // Destructor

    MyString &operator=(const MyString &rhs); // Copy assignment
    MyString &operator=(MyString &&rhs);      // Move assignment

    MyString operator-() const;                    // Make object lowercase (overloading the '-' operator)
    MyString operator+(const MyString &rhs) const; // Concatenate objects (overloading the '+' operator). Note: the lhs part must be an object.
    bool operator==(const MyString &rhs) const;    // Check for equality (overloading the '==' operator)

    // Getters:
    void displayMyString() const;
    int getMyStringLength() const;
    const char *getMyString() const;
};
