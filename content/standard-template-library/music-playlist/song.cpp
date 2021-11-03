#include <iostream>
#include <iomanip>
#include <string>
#include "song.h"

// Constructor:

Song::Song(std::string name, std::string artist, int rating)
    : song_name{name}, artist_name{artist}, rating{rating} {}

// Getters:

std::string Song::get_name() const
{
  return song_name;
}

std::string Song::get_artist() const
{
  return artist_name;
}

int Song::get_rating() const
{
  return rating;
}

// Overloaded operators:

bool Song::operator<(const Song &rhs) const
{
  return this->song_name < rhs.song_name;
}

bool Song::operator==(const Song &rhs) const
{
  return this->song_name == rhs.song_name;
}

// Friend function:

std::ostream &operator<<(std::ostream &os, const Song &s)
{
  os << std::setw(20) << std::left << s.song_name
     << std::setw(30) << std::left << s.artist_name
     << std::setw(2) << std::left << s.rating;
  return os;
}