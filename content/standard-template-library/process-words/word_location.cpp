// standard headers:
#include <fstream>
#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <string>

// user-defined headers:
#include "util.h"
#include "word_location.h"

void word_locator(const std::string &filename) {
  std::map<std::string, std::set<int>> location_map;

  std::ifstream input_file;

  input_file.open(filename);

  if (!input_file) { // check if file was opened succesfully:
    std::cerr << "File could not be opened!\n";
    return;
  }

  std::string current_line{};
  int line_count{1};

  while (std::getline(input_file, current_line)) {
    // use stringstream to split line into words:
    std::stringstream ss{current_line};
    std::string token{};

    while (ss >> token) {
      // clean current line to only contain a-z/A-Z characters:
      clean_line(token);
      // string: [... line positions]
      location_map[token].insert(line_count);
    }
    ++line_count;
  }

  input_file.close();
  display_results(location_map);
}

// # Part 2:
// Display each unique wordin the file and, immediately following each word, display the line
// numbers in which that word appears. The words should be displayed in ascending order and the
// line numbers for each word should also be displayed in ascending order. If a word appears
// more than once on a line then the line number should only appear once.
// Here is a sample listing of the first few words:

// Word       Occurrences
// =========================================
// Aunt            [ 2 7 25 29 48 ]
// Dorothy         [ 1 7 15 29 39 43 47 51 ]
// Dorothy's       [ 31 ]
// Em              [ 2 7 25 30 48 ]
// Even            [ 19 ]
// From            [ 50 ]

// Please use a map of <string,set<int>> Key/Value pairs.
