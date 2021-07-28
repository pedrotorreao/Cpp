#include <iostream>
#include <vector>
#include <memory>
#include "Test.h"
#include "Util.h"

int main()
{
  // unique_ptr to a vector of shared_ptrs to Test objects:
  std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec_ptr;
  vec_ptr = make();

  std::cout << "How many data points to you want to enter: ";
  int data_points;
  std::cin >> data_points;

  fill(*vec_ptr, data_points);

  display(*vec_ptr);

  return 0;
}