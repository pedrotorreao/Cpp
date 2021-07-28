#include "Util.h"

/* 1.: make(): creates and returns a unique_ptr to a vector of shared_ptrs to Test objects: */
std::unique_ptr<std::vector<std::shared_ptr<Test>>> make(void)
{
  return std::make_unique<std::vector<std::shared_ptr<Test>>>();
}

/* 2.: fill(): expects a vector of shared_ptrs to Test objects and a int for the number of 
Test objects to create dynamically and add to the vector. Prompt the user to enter an integer, 
create a shared_ptr to a Test object initialized to the entered integer and add that shared 
pointer to the vector: */
void fill(std::vector<std::shared_ptr<Test>> &v, int n)
{
  int data;

  int i{1};

  while (i <= n)
  {
    std::cout << "Enter data point [" << i << "] : ";
    std::cin >> data;
    std::shared_ptr<Test> ptr = std::make_shared<Test>(data);

    v.push_back(ptr);

    i++;
  }
}

/* 3.: display(): expects a vector of shared_ptrs to Test objects and displays their data: */
void display(std::vector<std::shared_ptr<Test>> &v)
{
  std::cout << "==== Displaying vector data: ===="
            << "\n";
  for (const auto &i : v)
  {
    //std::cout << i->get_points() << "\n";
    std::cout << i->points << "\n";
  }
  std::cout << "================================="
            << "\n";
}