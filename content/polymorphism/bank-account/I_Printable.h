#pragma once

#include <iostream>

// 2. Create an I_Printable class interface as we did in the course and provide functionality so
//    all accounts are printable to an ostream using the overloaded insertion operator.
class I_Printable
{
  friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);

public:
  virtual void print(std::ostream &os) const = 0; // pure virtual function
  virtual ~I_Printable();
};