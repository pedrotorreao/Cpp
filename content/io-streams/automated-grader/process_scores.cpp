#include <iostream>
#include <fstream>
#include <iomanip>
#include "process_scores.h"

void process_scores(const std::string &file_name)
{
  std::ifstream input_data;

  input_data.open(file_name);

  // check if file was opened succesfully:
  if (!input_data)
  {
    std::cerr << "File could not be opened!\n";
    return;
  }

  // width settings:
  int total_width{20};
  int name_column{15};
  int score_column{5};

  // print table header:
  display_header(total_width, name_column, score_column);

  std::string correct_answers, student_name, student_answers, line;
  int student_score{0}, count{0}, num_students{0}, scores_sum{0};
  double avg_score{0};

  while (std::getline(input_data, line))
  {
    // first line has the correct answers:
    if (count == 0)
    {
      correct_answers = line;
    }
    // odd lines have student names:
    else if (count % 2 != 0)
    {
      student_name = line;
      std::cout << std::setw(name_column) << std::left << student_name;
    }
    // even lines have student grades:
    else
    {
      student_answers = line;
      student_score = calculate_score(correct_answers, student_answers);
      scores_sum += student_score;

      std::cout << std::setw(score_column) << std::right << student_score << std::endl;
      num_students++;
    }
    count++;
  }

  avg_score = static_cast<double>(scores_sum) / num_students;

  display_footer(total_width, name_column, score_column, avg_score);

  input_data.close();
}

int calculate_score(const std::string &correct_ans, const std::string &student_ans)
{
  int total_score{0};

  for (int i{0}; i < student_ans.size(); i++)
  {
    if (student_ans.at(i) == correct_ans.at(i))
    {
      total_score++;
    }
  }

  return total_score;
}

void display_header(const int &total_w, const int &name_w, const int &score_w)
{
  std::cout << std::setw(name_w) << std::left << "\nStudent"
            << std::setw(score_w) << std::right << "Score" << std::endl;

  std::cout << std::setw(total_w)
            << std::setfill('-')
            << "" << std::endl;   // display total_width dashes
  std::cout << std::setfill(' '); // reset setfill to blank spaces
}

void display_footer(const int &total_w, const int &name_w, const int &score_w, const double &avg)
{
  std::cout << std::setw(total_w)
            << std::setfill('-')
            << "" << std::endl;   // display total_width dashes
  std::cout << std::setfill(' '); // reset setfill to blank spaces

  // print footer with average score:
  std::cout << std::setprecision(1) << std::fixed;

  std::cout << std::setw(name_w) << std::left << "Average score"
            << std::setw(score_w) << std::right << avg << "\n";
}