#include <iostream>
#include <map>
#include <set>
#include <string>

void display_results(const std::map<std::string, int> &wordCount) {
  //..
}

void display_results(const std::map<std::string, std::set<int>> &wordLocation) {
  //..
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
      continue;
    }
    default:
      clean_line += charac;
    }
  }
  raw_line = clean_line;
}