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
#include <iomanip>
#include <iostream>
#include <map>
#include <set>
#include <string>

/**
 * @brief overloaded display function.
 *
 * @param wordCount
 */
void display_results(const std::map<std::string, int> &wordCount);

/**
 * @brief overloaded display function.
 *
 * @param wordLocation
 */
void display_results(const std::map<std::string, std::set<int>> &wordLocation);

/**
 * @brief helper function to filter strings eliminating special characters.
 *
 * @param raw_line
 */
void clean_line(std::string &raw_line);