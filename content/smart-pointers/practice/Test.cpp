#include <iostream>
#include "Test.h"

Test::Test() : points{0}
{
  std::cout << "\tTest constructor (" << this->points << ") \n";
}

Test::Test(int p) : points{p}
{
  std::cout << "\tTest constructor (" << this->points << ") \n";
}

int Test::get_points(void)
{
  return this->points;
}

Test::~Test()
{
  std::cout << "\tTest destructor (" << this->points << ") \n";
}