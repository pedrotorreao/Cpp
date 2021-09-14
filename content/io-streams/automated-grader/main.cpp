/* -- Challenge - Automated Grader:
Description:
  Write a program that reads a file named "responses.txt" that contains the answer key for a quiz
  as well as student responses for the quiz. You should read the file and display each student's 
  name and score (#correct out of 5). At the end, the class average should be displayed. You may 
  assume that the data in the file is properly formatted.
*/

#include <iostream>
#include <string>
#include "process_scores.h"

int main()
{
  std::string filename{"answers.txt"};

  process_scores(filename);

  return 0;
}
