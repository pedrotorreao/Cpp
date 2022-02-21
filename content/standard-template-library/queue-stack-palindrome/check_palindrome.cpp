// standard headers:
#include <iostream>
#include <stack>
#include <string>

// user-defined headers:
#include "check_palindrome.h"
#include "util.h"

bool is_palindrome(const std::string &str) {
  std::stack<char> st;
  std::string str_cp{str};

  // clean the string to only leave characters
  // from a-z and A-Z:
  clean_line(str_cp);

  int mid = str_cp.size() / 2;
  int i{0};

  // push half the characters into the stack:
  while (i < mid) {
    st.push(str_cp.at(i));
    ++i;
  }

  // in case the stack is odd sized, skip the
  // middle character:
  if (str_cp.size() % 2 != 0)
    ++i;

  // keep iterating through the string while popping
  // the characters from the stack and comparing them.
  // if they mismatch, the string is not a palindrome,
  // return false:
  while (i < str_cp.size()) {
    if (str_cp.at(i) != st.top()) {
      return false;
    }

    st.pop();
    ++i;
  }

  // otherwise, all the elements will be popped and the
  // string is a palindrome, return true:
  return true;
}