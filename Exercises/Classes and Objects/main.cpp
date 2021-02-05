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
