// standard headers:
#include <cctype>
#include <iostream>
#include <string>

// user-defined headers:
#include "util.h"

void clean_line(std::string &raw_line) {
  std::string clean_line{};

  for (auto &charac : raw_line) {
    char curr_charac = toupper(charac);

    if (int(curr_charac) >= int('A') && int(curr_charac) <= int('Z')) {
      clean_line += curr_charac;
    }
  }

  raw_line = clean_line;
}