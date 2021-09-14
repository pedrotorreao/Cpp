#pragma once

#include <string>

void process_scores(const std::string &file_name);

int calculate_score(const std::string &correct_ans, const std::string &student_ans);

void display_header(const int &total_w, const int &col_w, const int &score_w);

void display_footer(const int &total_w, const int &col_w, const int &score_w, const double &avg);