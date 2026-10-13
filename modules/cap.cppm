module;
#include <algorithm>
#include <ranges>
#include <string>
#include <vector>
import splt;

export module cap;

export std::string Cap(std::string &word) {
  if (word.empty()) {
    return word;
  }

  if (word.find_first_of(" \t\n\r") != std::string::npos) {
    std::vector<std::string> splitted = Splt(word);

    std::ranges::transform(splitted, splitted.begin(), [](std::string &s) {
      if (s.empty()) {
        return s;
      }

      s.at(0) = std::toupper(s[0]);

      return s;
    });

    return splitted | std::views::join_with(' ')
      | std::ranges::to<std::string>();
  } else {
    word.at(0) = std::toupper(word[0]);

    return word;
  }
}
