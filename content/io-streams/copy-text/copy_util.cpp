#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include "copy_util.h"

void copyText(const std::string &file)
{
  std::ifstream read_file;
  read_file.open(file);

  std::ofstream write_file;
  write_file.open("romeoandjulietMod.txt");

  if (!read_file)
  { // check if file was opened succesfully:
    std::cerr << "Input file could not be opened!\n";
    return;
  }

  if (!write_file)
  { // check if file was opened succesfully:
    std::cerr << "Output file could not be opened!\n";
    return;
  }

  std::string current_line{};
  int line_count{1};

  while (std::getline(read_file, current_line))
  {
    if (current_line.length())
    { // if current line has any content, write it alongside the line number:
      write_file << std::setw(10) << std::left << line_count
                 << current_line << "\n";
    }
    else
    { // if current line has no content, just add a new line:
      write_file << "\n";
    }

    ++line_count;
  }

  read_file.close();
  write_file.close();
}