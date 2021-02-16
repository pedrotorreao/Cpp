#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <iostream>
#include <string>

class Movie
{
private:
    std::string name{};
    std::string rating{};
    int watched{};

public:
    //Constructor w/ default paramenters - declaration:
    Movie(std::string movieName = "None", std::string movieRating = "None", int watchCount = 0);

    //Copy constructor - declaration:
    Movie(const Movie &sourceObj);

    //Destructor - declaration:
    ~Movie();

    //Setters - declaration:
    void setName(std::string movieName);
    void setRating(std::string movieRating);
    void setWatched(int watchCount);

    //Getters - declaration:
    std::string getName(void) const;
    std::string getRating(void) const;
    int getWatched(void) const;

    //Increment watched count - declaration:
    void incrementWatched(void);

    //Display movie info - declaration:
    void displayMovieInfo(void) const;
};

#endif