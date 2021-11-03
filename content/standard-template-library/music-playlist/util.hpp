#include <iostream>

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
  std::cout << "6 - Delete all playlists" << std::endl;
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