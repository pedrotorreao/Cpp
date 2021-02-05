#pragma once

#include <iostream>
#include <vector>
#include <string>
#include "Movies.h"

//Constructor w/ default paramenters - declaration:
Movies::Movies(Movie movie)
{
}

//Copy constructor - declaration:
// Movies(const Movies &sourceObj);

//Destructor - declaration:
Movies::~Movies()
{
}

//Add new movie to collection - declaration:
void Movies::addMovie(std::string movieName, std::string movieRating, int watchCount)
{
    bool old = false;

    for (auto i{0}; i < allMovies.size(); ++i)
    {
        if (allMovies.at(i).getName() == movieName)
        {
            old = true;
        }
    }

    if (!old)
    {
        Movie newMovie = Movie();

        newMovie.setName(movieName);
        newMovie.setRating(movieRating);
        newMovie.setWatched(watchCount);

        allMovies.push_back(newMovie);
    }
    else
    {
        int error = 1;
        displayErrorMessage(error, movieName);
    }
}

//Increment watched count - declaration:
void Movies::incrementWatchedCount(std::string movieName)
{
    for (auto i{0}; i < allMovies.size(); ++i)
    {
        if (allMovies.at(i).getName() == movieName)
        {
            allMovies.at(i).incrementWatched();
        }
        else
        {
            int error = 2;
            displayErrorMessage(error, movieName);
        }
    }
}

//Display all the movies on the screen - declaration::
void Movies::displayAllMovies(void) const
{
    for (auto i{0}; i < allMovies.size(); ++i)
    {
        std::cout << "=====================" << std::endl;
        std::cout << "Movie: " << allMovies.at(i).getName() << std::endl;
        std::cout << "Rating: " << allMovies.at(i).getRating() << std::endl;
        std::cout << "Watched: " << allMovies.at(i).getWatched() << std::endl;
    }
}

//Display an error message - declaration::
//  - codeStatus = 1: not possible to add a movie which is already on the collection
//  - codeStatus = 2: not possible to increment the count of a non-existent movie
void displayErrorMessage(int codeStatus, std::string movieName)
{
    switch (codeStatus)
    {
    case 1:
        std::cout << movieName << " is already present on the Collection!" << std::endl;
        break;
    case 2:
        std::cout << movieName << " is not on the Collection!" << std::endl;
        break;
    default:
        std::cout << "Unknown error code!" << std::endl;
        break;
    }
}