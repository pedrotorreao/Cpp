/* -- Challenge - Music Playlist:
Description:
  Create a menu driven application that simulates a user playing songs from a playlist of songs.
  Use a list to simulate the user selecting the the first song in the playlist and then selecting
  next and previous to play forward of backwards through the playlist.
  Also allow users to add new song to the playlist and add them prior to the currently playing song.
  The menu looks as follows:
    F - Play First Song
    N - Play Next song
    P - Play Previous song
    A - Add and play a new Song at current location
    L - List the current playlist
    ========================
    Enter a selection (Q to quit):

  Note:
    If you have trouble reading input, you can clear std::cin and ignore everything in the buffer with:
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    Make sure you #include <limits> to use it.

  Please use std::list to solve this challenge.
*/

#include <iostream>
#include <iomanip>
#include <list>
#include <string>
#include "song.h"
#include "playlist.h"
#include "util.hpp"

int main()
{
  char user_choice{};
  std::list<Playlist> playlists;

  playlists.push_back({"Empty", "Unknown"});

  std::list<Playlist>::iterator pl_it = playlists.begin();

  do
  {
    display_menu();

    std::cin >> user_choice;
    if (int(user_choice) >= 97 && int(user_choice) <= 122)
    {
      user_choice = toupper(user_choice);
    }

    if (playlists.empty() && user_choice != '1')
    {
      std::cerr << "\n>> There are no playlists available!\n";
      continue;
    }

    // auto pl_it = playlists.begin();

    std::list<Song> songs;

    if (!playlists.empty())
    {
      songs = pl_it->get_pl_songs();
    }

    auto sg_it = pl_it->get_songs_it();

    process_user_input(user_choice, playlists, pl_it, songs, sg_it);

  } while (std::toupper(user_choice) != 'Q');

  return 0;
}