#include <iostream>
#include <iomanip>

#include "tour_info.h"

void displayTourInfo(const Tours &tour_data)
{
  std::cout << std::setw(50) << tour_data.title << "\n";
  std::cout << std::setw(20) << std::left << "\nCountry"
            << std::setw(25) << std::left << "City"
            << std::setw(20) << std::left << "Population"
            << std::setw(10) << "Price\n";

  std::cout << std::setfill('-');
  std::cout << std::setw(70) << "-\n";

  // for (auto country : tour_data.countries)
  // { // loop through the countries
  //   std::cout << country.name << std::endl;
  //   for (auto city : country.cities)
  //   { // loop through the cities for each country
  //     std::cout << "\t" << city.name
  //               << "\t" << city.population
  //               << "\t" << city.cost
  //               << std::endl;
  //   }
  // }
}