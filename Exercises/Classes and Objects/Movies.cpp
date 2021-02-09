#include <iostream>
#include <vector>
#include <string>
#include "Movies.h"

//No args constructor - declaration:
Movies::Movies()
{
}

//Copy constructor - declaration:
// Movies(const Movies &sourceObj);

//Destructor - declaration:
Movies::~Movies()
{
}

//Display all the movies on the screen - declaration::
void Movies::displayAllMovies(void) const
{
    if (!allMovies.size())
    {
        std::cout << "Movie Collection is Empty!" << std::endl;
        std::cout << "=====================" << std::endl;
    }
    else
    {
        std::cout << "======= MOVIE COLLECTION =======" << std::endl;
        for (auto i{0}; i < allMovies.size(); ++i)
        {
            allMovies.at(i).displayMovieInfo();
            std::cout << "=====================" << std::endl;
        }
    }
}

//Display an error message - declaration::
//  - codeStatus = 1: not possible to add a movie which is already on the collection
//  - codeStatus = 2: not possible to increment the count of a non-existent movie
void Movies::displayErrorMessage(int codeStatus, std::string movieName)
{
    switch (codeStatus)
    {
    case 1:
        std::cout << movieName << " is already present on the Collection!" << std::endl;
        std::cout << "=====================" << std::endl;
        break;
    case 2:
        std::cout << movieName << " is not on the Collection!" << std::endl;
        std::cout << "=====================" << std::endl;
        break;
    default:
        std::cout << "Unknown error code!" << std::endl;
        std::cout << "=====================" << std::endl;
        break;
    }
}

//Increment watched count - declaration:
void Movies::incrementWatchedCount(std::string movieName)
{
    int error = 0;
    for (auto i{0}; i < allMovies.size(); ++i)
    {
        if (allMovies.at(i).getName() == movieName)
        {
            allMovies.at(i).incrementWatched();
            break;
        }
        else
        {
            error = 2;
        }
    }
    if (error)
    {
        displayErrorMessage(error, movieName);
    }
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