// standard headers:
#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <string>

// user-defined headers:
#include "util.h"
#include "word_count.h"

void word_counter(const std::string &filename) {
  std::map<std::string, int> counter_map;

  std::ifstream input_file;

  input_file.open(filename);

  if (!input_file) { // check if file was opened succesfully:
    std::cerr << "File could not be opened!\n";
    return;
  }

  std::string current_line{};

  while (std::getline(input_file, current_line)) {
    // use stringstream to split line into words:
    std::stringstream ss{current_line};
    std::string token{};

    while (ss >> token) {
      // clean current line to only contain a-z/A-Z characters:
      clean_line(token);
      counter_map[token]++;
    }
  }

  input_file.close();
  display_results(counter_map);
}

// # Part 1:
// Display each unique word in the file and, immediately following each word, display the
// number of times it occurs in the text file. The words should be displayed in ascending order.
// Here is a sample listing of the first few words:

// Word         Count
// ===================
// Aunt              5
// Dorothy           8
// Dorothy's         1
// Em                5
// Even              1
// From              1

// Please use a map with <string, int> Key/ Value pairs.