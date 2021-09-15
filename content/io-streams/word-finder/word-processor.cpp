#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

#include "word-processor.h"

void word_processor(const std::string &file, const std::string &word)
{
  std::ifstream input_file;

  input_file.open(file);

  if (!input_file)
  { // check if file was opened succesfully:
    std::cerr << "File could not be opened!\n";
    return;
  }

  int str_count{0}, substr_count{0}, total_words{0};
  std::string cur_word;

  while (input_file >> cur_word)
  {
    total_words++;
    if (cur_word.find(word) != std::string::npos)
    {
      if (cur_word.length() == word.length())
      {
        str_count++;
      }
      else
      {
        substr_count++;
      }
    }
  }

  display_results(word, str_count, substr_count, total_words);

  input_file.close();
}

void display_results(const std::string &word_target, int fullStrCount, int subsStrCount, int numOfWords)
{
  std::cout << "\n"
            << numOfWords << " words were searched...\n";
  std::cout << "Number of times the word \"" << word_target
            << "\" was found by itself: " << std::setw(15) << fullStrCount << "\n";

  std::cout << "Number of times the word \"" << word_target
            << "\" was found as a substring: " << std::setw(10) << subsStrCount << "\n";

  std::cout << "Number of times the word \"" << word_target
            << "\" was found in total: " << std::setw(16) << (subsStrCount + fullStrCount) << "\n\n";
}