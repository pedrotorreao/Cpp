// Title: tour_info.h
// Desc.: file contains the structure definifitions for the tour data.
#pragma once

#include <vector>
#include <string>

struct City
{
  std::string name;
  long population;
  double cost;
};

// to make it easier, just assume each country has at least 1 city:
struct Country
{
  std::string name;
  std::vector<City> cities;
};

struct Tours
{
  std::string title;
  std::vector<Country> countries;
};

void displayTourInfo(const Tours &tour_data);