#pragma once

#include <iostream>
#include <vector>
#include <memory>

class Test
{
  friend void display(std::vector<std::shared_ptr<Test>> &v);

private:
  int points;

public:
  Test();
  Test(int p);
  int get_points(void);
  ~Test();
};