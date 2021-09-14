#include <iostream>
#include <iomanip>

#include "tour_info.h"

void displayTourInfo(const Tours &tour_data)
{
  const int total_width{70};

  const int field_width1{20};
  const int field_width2{15};

  const int title_length = tour_data.title.size();

  std::cout << std::setw((total_width - title_length) / 2) << "" << tour_data.title << "\n";

  std::cout << std::setw(field_width1) << std::left << "\nCountry"
            << std::setw(field_width1) << std::left << "City"
            << std::setw(field_width2) << std::right << "Population"
            << std::setw(field_width2) << std::right << "Price\n";

  std::cout << std::setw(total_width)
            << std::setfill('-')
            << "" << std::endl; // display total_width dashes

  std::cout << std::setfill(' ');                  // reset setfill to blank spaces
  std::cout << std::setprecision(2) << std::fixed; // for displaying the cost with 2 decimal digits

  for (auto country : tour_data.countries)
  { // loop through the countries
    for (size_t i = 0; i < country.cities.size(); ++i)
    {
      std::cout << std::setw(field_width1) << std::left << ((i == 0) ? country.name : "") // conditional operator
                << std::setw(field_width1) << std::left << country.cities.at(i).name
                << std::setw(field_width2) << std::right << country.cities.at(i).population
                << std::setw(field_width2) << std::right << country.cities.at(i).cost
                << std::endl;
    }
  }
}