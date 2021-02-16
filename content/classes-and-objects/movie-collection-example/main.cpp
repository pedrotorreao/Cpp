/*
class Movie - models a movie which includes
    - movie name
    - movie rating (G, PG, PG-13, R)
    - watched: number of times the movie has been watched
class Movies - models a collection of Movie objects

Movies needs to know about Movie since it is a collection of Movie
objects. However, our main driver should only interact with the Movies
class.

For example, a simple main should be able to
    - create a Movies objects
    - ask the Movies object to add a movie by providing the movie name,
    rating and watched count
    - ask the Movies object to increment the watched count by 1 for a 
    movie given its name
    - display all the Movies
Additionally, 
    - if we try to add a movie whose name is already in the movies collection, display an error to the user
    - if we try to increment the watched count for a movie whose name is not in the Movies collection, display another error

Here is what your project files should look like:
    - Movie.h: class specification
    - Movie.cpp: class implementation
    - Movies.h: class specification
    - Movies.cpp: class implementation
    - main.cpp: driver
*/
#include <iostream>
#include <vector>
#include <string>
#include "Movies.h"

int main()
{
    Movies myMovies;
    myMovies.displayAllMovies(); //Collection is empty

    myMovies.addMovie("Interestelar", "PG", 3); //OK
    myMovies.addMovie("Big", "PG-13", 2);       //OK
    myMovies.addMovie("Star Wars", "PG", 5);    //OK
    myMovies.addMovie("Cinderella", "PG", 7);   //OK

    myMovies.displayAllMovies(); //OK

    myMovies.addMovie("Cinderella", "PG", 7); //ERROR: repeated
    myMovies.addMovie("Ice Age", "PG", 12);   //OK

    myMovies.displayAllMovies(); //OK

    myMovies.incrementWatchedCount("Big");     //OK
    myMovies.incrementWatchedCount("Ice Age"); //OK

    myMovies.displayAllMovies();

    myMovies.incrementWatchedCount("Avengers"); //ERROR: not present

    return 0;
}
