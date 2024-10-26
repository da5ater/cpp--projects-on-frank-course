// Section 20
// Challenge 1
// Identifying palindrome strings using a deque
#include <cctype>
#include <deque>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool is_palindrome(const std::string &s) {
    deque<char> chars;
    for (auto c : s) {
        if (isalpha(c)) {
            chars.emplace_back(tolower(c));
        }
    }

    auto front = chars.begin();
    auto back = chars.rbegin();

    while (*front != *back) {
        ++front;
        --back;
    }

    return true;
}

int main() {
  std::vector<std::string> test_strings{
      "a",
      "aa",
      "aba",
      "abba",
      "abbcbba",
      "ab",
      "abc",
      "radar",
      "bob",
      "ana",
      "avid diva",
      "Amore, Roma",
      "A Toyota's a toyota",
      "A Santa atNASA ",
      " C++ ",
      " A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal - Panama !",
      " This is a palindrome ",
      " palindrome "};

  std::cout << std::boolalpha;
  std::cout << std::setw(8) << std::left << "Result"
            << "String" << std::endl;
  for (const auto &s : test_strings) {
    std::cout << std::setw(8) << std::left << is_palindrome(s) << s
              << std::endl;
  }
  std::cout << std::endl;
  return 0;

  //    std::string s = "abcdd++   cd";
  //  deque<char> chars;
  //  for (auto c : s) {
  //    if (isalpha(c))
  //      chars.emplace_back(c);
  //  }
  //
  //  auto front = s.begin();
  //  auto back = s.rbegin();
  //
  //  while (fornt != back) {
  //    if (*front != *back)
  //      return false;
  //
  //    return true;
  //  }

  //  auto c = chars.begin();
  //  while (c != chars.end()) {
  //    cout << *c << " ";
  //    c++;
  //  }
}