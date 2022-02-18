/* -- Challenge: Using std::stack and std::queue

A Palindrome is a string that reads the same backwards or forwards.
Simple examples are:
  madam
  bob
  toot
  radar

An entire phrase can also be a palindome, for example:
  A Toyota's a toyota   --> ATOYOTASATOYOTA
  A Santa at NASA       --> ASANTAATNASA
  A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!
                        --> AMANAPLANACATAHAMAYAKAYAMAHATACANALPANAMA

Only consider alpha characters and omit all other characters. Also, do not consider case.

Please use a stack and a queue to solve the problem.
*/

// standard headers:
#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

// user-defined headers:
#include "check_palindrome.h"

int main() {
  std::vector<std::string> test_strings{"a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
                                        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
                                        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome"};

  std::cout << std::boolalpha;
  std::cout << std::setw(8) << std::left << "Result"
            << "String" << std::endl;
  for (const auto &s : test_strings) {
    std::cout << std::setw(8) << std::left << is_palindrome(s) << s << std::endl;
  }
  std::cout << std::endl;
  return 0;
}