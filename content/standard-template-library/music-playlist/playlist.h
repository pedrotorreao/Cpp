#pragma once

#include <string>
#include <list>
#include "song.h"

class Playlist
{
  friend std::ostream &operator<<(std::ostream &os, const Playlist &pl);

private:
  std::string playlist_name;
  std::string playlist_owner;
  std::list<Song> playlist_songs;
  int playlist_size;

public:
  Playlist() = default;
  Playlist(std::string name, std::string owner)
  {
    this->playlist_name = name;
    this->playlist_size = 0;
  }

  void add_song(std::string name, std::string artist, std::string rating);
  void del_song(std::string name, std::string artist);
  void display_playlists(void);

  ~Playlist() = default;
};

Playlist::Playlist(/* args */)
{
}

Playlist::~Playlist()
{
}
