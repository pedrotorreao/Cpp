#pragma once

#include <iostream>
#include <vector>
#include <string>
#include "Movie.h"

class Movies
{
private:
    std::vector<Movie> allMovies;

public:
    //Constructor w/ default paramenters - declaration:
    Movies(Movie movie);

    //Copy constructor - declaration:
    // Movies(const Movies &sourceObj);

    //Destructor - declaration:
    ~Movies();

    //Add new movie to collection - declaration:
    void addMovie(std::string movieName, std::string movieRating, int watchCount);

    //Increment watched count - declaration:
    void incrementWatchedCount(std::string movieName);

    //Display all the movies on the screen - declaration::
    void displayAllMovies(void) const;

    //Display an error message - declaration::
    //  - codeStatus = 1: not possible to add a movie which is already on the collection
    //  - codeStatus = 2: not possible to increment the count of a non-existent movie
    void displayErrorMessage(int codeStatus, std::string movieName);
};