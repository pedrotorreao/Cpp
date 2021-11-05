#include <iostream>
#include "playlist.h"
#include "song.h"

std::string Playlist::get_pl_name(void)
{
  return this->playlist_name;
}

int Playlist::get_size(void)
{
  return this->playlist_size;
}

std::list<Song>::iterator Playlist::get_songs_it(void)
{
  auto it = this->playlist_songs.begin();
  return it;
}

std::list<Song> Playlist::get_pl_songs(void)
{
  return this->playlist_songs;
}

void Playlist::add_song(std::string name, std::string artist, int rating)
{
  this->playlist_size++;
  this->playlist_songs.push_back({name, artist, rating});
}

void Playlist::del_song(std::string name, std::string artist)
{
  auto it = this->playlist_songs.begin();
  while (it != this->playlist_songs.end())
  {
    if ((it->get_name() == name) && (it->get_artist() == artist))
    {
      break;
    }
    ++it;
  }
  if (it != this->playlist_songs.end())
  {
    this->playlist_songs.erase(it);
  }
  this->playlist_size--;
}
void Playlist::list_songs(void)
{
  auto it = this->playlist_songs.begin();
  while (it != this->playlist_songs.end())
  {
    std::cout << (*it) << "\n";

    ++it;
  }
}