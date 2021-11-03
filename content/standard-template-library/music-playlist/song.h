#pragma once

class Song
{
  friend std::ostream &operator<<(std::ostream &os, const Song &s);

private:
  std::string song_name;
  std::string artist_name;
  int rating;

public:
  // Constructors:
  Song() = default;
  Song(std::string name, std::string artist, int rating);

  // Getters:
  std::string get_name() const;
  std::string get_artist() const;
  int get_rating() const;

  // Overloaded operators:
  bool operator<(const Song &rhs) const;
  bool operator==(const Song &rhs) const;

  // Destructor:
  ~Song() = default;
};