module;
#include <ranges>
#include <string>
#include <vector>
export module splt;

export std::vector<std::string> Splt(std::string word) {
  auto parts = word | std::views::split(' ') |
               std::ranges::to<std::vector<std::string>>();

  return parts;
}
