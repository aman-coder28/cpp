#include <cctype>
#include <print>
#include <string>

std::string cap(std::string word) {
  char first = toupper(word.at(0));

  return first + word.substr(1, word.length());
}

int main() {
  std::string name = "zeaman";

  std::print("Hello, {}!", cap(name));

  return 0;
}
