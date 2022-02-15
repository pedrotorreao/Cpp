#include <iomanip>
#include <iostream>
#include <map>
#include <set>
#include <string>

void display_results(const std::map<std::string, int> &wordCount) {
  const int TOTAL_WIDTH{50};
  const int WIDTH_1{TOTAL_WIDTH / 2};

  std::cout << std::setw(WIDTH_1) << std::left << "\nWord"
            << std::setw(WIDTH_1) << std::right << "Count" << std::endl;

  // display TOTAL_WIDTH '#':
  std::cout << std::setw(TOTAL_WIDTH)
            << std::setfill('#')
            << "" << std::endl;
  // reset setfill to blank spaces:
  std::cout << std::setfill(' ');

  // map<string,int>: itr->first - string mapped    itr->second - integer count
  for (auto itr = wordCount.begin(); itr != wordCount.end(); ++itr) {
    std::cout << std::setw(WIDTH_1) << std::left << (itr->first)
              << std::setw(WIDTH_1) << std::right << (itr->second) << std::endl;
  }
}

void display_results(const std::map<std::string, std::set<int>> &wordLocation) {
  const int TOTAL_WIDTH{60};
  const int WIDTH_1{TOTAL_WIDTH / 2};

  std::cout << std::setw(WIDTH_1) << std::left << "\nWord"
            << std::setw(WIDTH_1) << std::right << "Occurences" << std::endl;

  // display TOTAL_WIDTH '#':
  std::cout << std::setw(TOTAL_WIDTH)
            << std::setfill('#')
            << "" << std::endl;
  // reset setfill to blank spaces:
  std::cout << std::setfill(' ');

  // map<string,set<int>>: itr->first - string mapped    itr->second - set<int> line numbers
  for (auto itr = wordLocation.begin(); itr != wordLocation.end(); ++itr) {
    std::cout << std::setw(WIDTH_1) << std::left << (itr->first)
              << std::left << "[  ";

    for (auto itr_2 = (itr->second).begin(); itr_2 != (itr->second).end(); ++itr_2) {
      std::cout << *itr_2 << "  ";
    }
    std::cout << "]\n";
  }
}

void clean_line(std::string &raw_line) {
  std::string clean_line{};

  for (const auto &charac : raw_line) {
    switch (charac) {
    case '.':
    case ';':
    case ':':
    case '!':
    case '?':
    case ',': {
      break;
    }
    default:
      clean_line += charac;
    }
  }
  raw_line = clean_line;
}