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

  // getters:
  std::string get_pl_name(void);
  std::list<Song>::iterator get_songs_it(void);
  std::list<Song> get_pl_songs(void);
  int get_size(void);

  void add_song(std::string name, std::string artist, int rating);
  void del_song(std::string name, std::string artist);
  void list_songs(void);

  ~Playlist() = default;
};
