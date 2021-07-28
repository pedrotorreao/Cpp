#pragma once

#include <iostream>
#include <memory>
#include <vector>

#include "Test.h"

/* 1.: make(): creates and returns a unique_ptr to a vector of shared_ptrs to Test objects: */
std::unique_ptr<std::vector<std::shared_ptr<Test>>> make(void);

/* 2.: fill(): expects a vector of shared_ptrs to Test objects and a int for the number of 
Test objects to create dynamically and add to the vector. Prompt the user to enter an integer, 
create a shared_ptr to a Test object initialized to the entered integer and add that shared 
pointer to the vector: */
void fill(std::vector<std::shared_ptr<Test>> &v, int n);

/* 3.: display(): expects a vector of shared_ptrs to Test objects and displays their data: */
void display(std::unique_ptr<std::vector<std::shared_ptr<Test>>> &v);