#include <iostream>
#include <string>
#include "Movie.h"

//Constructor w/ default parameters - specification:
Movie::Movie(std::string movieName = "None", std::string movieRating = "None", int watchCount = 0)
    : name{movieName}, rating{movieRating}, watched{watchCount}
{
}

//Copy constructor - specification:
Movie::Movie(const Movie &sourceObj)
    : name{sourceObj.name}, rating{sourceObj.name}, watched{sourceObj.watched}
{
}

//Destructor - specification:
Movie::~Movie()
{
}

//Setters - specification:
void Movie::setName(std::string movieName)
{
    this->name = movieName;
}

void Movie::setRating(std::string movieRating)
{
    this->rating = movieRating;
}

void Movie::setWatched(int watchCount)
{
    this->watched = watchCount;
}

//Getters - specification:
std::string Movie::getName(void) const
{
    return this->name;
}

std::string Movie::getRating(void) const
{
    return this->rating;
}

int Movie::getWatched(void) const
{
    return this->watched;
}

//Increment watched count - specification:
void Movie::incrementWatched(void)
{
    ++(this->watched);
}

//Display movie info - specification:
void Movie::displayMovieInfo(void) const
{
    std::cout << "Movie: " << this->name << std::endl;
    std::cout << "Rating: " << this->rating << std::endl;
    std::cout << "Watched: " << this->watched << std::endl;
}