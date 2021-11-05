#include <iostream>
#include "playlist.h"
#include "song.h"

void display_menu()
{
  std::cout << "\n";
  std::cout << "=============== PLAYLIST OPTIONS ==============" << std::endl;
  std::cout << "===============================================" << std::endl;
  std::cout << "1 - Add new playlist" << std::endl;
  std::cout << "2 - List the current playlist" << std::endl;
  std::cout << "3 - Select next playlist" << std::endl;
  std::cout << "4 - Select previous playlist" << std::endl;
  std::cout << "5 - Remove current playlist" << std::endl;
  std::cout << "================= SONG OPTIONS ================" << std::endl;
  std::cout << "===============================================" << std::endl;
  std::cout << "F - Play First Song" << std::endl;
  std::cout << "N - Play Next song" << std::endl;
  std::cout << "P - Play Previous song" << std::endl;
  std::cout << "A - Add and play a new Song at current location" << std::endl;
  std::cout << "R - Remove current song from playlist" << std::endl;
  std::cout << "===============================================" << std::endl;
  std::cout << "Enter a selection (Q to quit): ";
}

void process_user_input(const char &usr_choice, std::list<Playlist> &pl, std::list<Playlist>::iterator pl_it, std::list<Song> &sgs, std::list<Song>::iterator &sg_it)
{

  switch (usr_choice)
  {
  case '1':
  {
    std::string pl_name, pl_owner;
    std::cout << "Enter playlist name: ";
    std::cin >> pl_name;
    std::cout << "Enter playlist owner: ";
    std::cin >> pl_owner;

    pl.push_back({pl_name, pl_owner});
  }
  break;
  case '2':
  {
    pl_it->list_songs();
  }
  break;
  case '3':
  {
    ++pl_it;

    if (pl_it == pl.end())
    {
      pl.begin();
    }
  }
  break;
  case '4':
  {
    if (pl_it != pl.begin())
    {
      --pl_it;
    }
    else
    {
      pl_it = pl.end();
    }
  }
  break;
  case '5':
  {
    std::cout << "Deleting playlist " << pl_it->get_pl_name() << "...\n";
    pl.erase(pl_it);
  }
  break;
  case 'F':
  {
    sg_it = pl_it->get_songs_it();

    std::cout << "Playing: " << sg_it->get_name() << "\n";
  }
  break;
  case 'N':
  {
    ++sg_it;
    if (sg_it == sgs.end())
    {
      sg_it = sgs.begin();
    }

    std::cout << "Playing: " << sg_it->get_name() << "\n";
  }
  break;
  case 'P':
  {
    if (sg_it != sgs.begin())
    {
      --sg_it;
    }
    else
    {
      sg_it = sgs.end();
    }

    std::cout << "Playing: " << sg_it->get_name() << "\n";
  }
  break;
  case 'A':
  {
    std::string name{}, artist{};
    int rating{};
    std::cout << "Enter the name of the song: ";
    std::cin >> name;
    std::cout << "Enter the name of the artist: ";
    std::cin >> artist;
    std::cout << "Enter your rating for this song (1-5): ";
    std::cin >> rating;

    pl_it->add_song(name, artist, rating);
  }
  break;
  case 'R':
  {
    std::string name = sg_it->get_name();
    std::string artist = sg_it->get_artist();

    pl_it->del_song(name, artist);
  }
  break;
  default:
    std::cerr << "Enter a valid option\n";
    break;
  }
}