/**
 * @file util.h
 * @author Pedro Torreao (github.com/pedrotorreao)
 * @brief Utility functions are declared inside this document.
 * @version 0.1
 * @date 2022-02-08
 *
 * @copyright Copyright (c) 2022
 *
 */

#pragma once

void display_results(const std::map<std::string, int> &wordCount);

void display_results(const std::map<std::string, std::set<int>> &wordLocation);

void clean_line(std::string &raw_line);