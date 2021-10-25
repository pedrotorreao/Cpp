/* -- Challenge - Is Palindrome:
Description:
  A Palindrome is a string that reads the same backwards or forwards.
  Simple examples are:
    - madam                     - toot
    - bob                       - radar
  An entire phrase can also be a palindome, for example:
    - A Toyota's a toyota
    - A Santa at NASA
    - A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!
  For the purposes of this assignment, only consider alpha characters and omit all other characters.
  We will also not be considering case.
  Example:
    - "A Santa at Nasa" --> will be processed as --> "ASANTAATNASA"

  Your challenge is to write the following function:
    bool is_palindrome(const std::string &s)
  This function will expect a string and it must determine if that string is a palindrome and return
  true if it is, or false if it is not. So,
    - is_palindrome("A Santa at Nasa") -->  will return true
    - is_palindrome("Hello") --> will return false
  Please use a deque to solve the problem.
*/
#include <iostream>
#include <iomanip>
#include <deque>
#include <string>
#include <vector>
#include <cctype>

bool is_palindrome(const std::string &s)
{
  // ...use a deque to solve the problem.
  return false;
}

int main()
{
  std::vector<std::string> test_strings{"a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
                                        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
                                        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome"};

  std::cout << std::boolalpha;
  std::cout << std::setw(8) << std::left << "Result"
            << "String" << std::endl;
  for (const auto &s : test_strings)
  {
    std::cout << std::setw(8) << std::left << is_palindrome(s) << s << std::endl;
  }
  std::cout << std::endl;
  return 0;
}