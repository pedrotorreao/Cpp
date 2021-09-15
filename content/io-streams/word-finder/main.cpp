/* -- Challenge - Word finder:
Description:
  Ask the user to enter a word, process the Romeo and Juliet file and determine how many total 
  words there are and how many times the word the user entered appears as a substring of a 
  word in the play.

Example:
  If the user enters: love
  Then the words love, lovely, and beloved will all be considered matches.
You decide whether you want to be case sensitive or not. My solution is case sensitive
*/

#include <iostream>
#include <string>
#include "word-processor.h"

int main()
{
  std::string filename{"romeoandjuliet.txt"};
  std::string target_word;

  std::cout << "Enter the word that you want to look for: ";
  std::cin >> target_word;

  word_processor(filename, target_word);

  return 0;
}