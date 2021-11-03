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
#include <list>
#include <string>
#include "song.h"
#include "playlist.h"
#include "util.hpp"

int main()
{
  //..driver code

  return 0;
}