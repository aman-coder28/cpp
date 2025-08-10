#include <cctype>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Optimize this function
vector<string> split(string s, string del = " ") {
  int start, end = -1 * del.size();
  vector<string> items;

  do {
    start = end + del.size();
    end = s.find(del, start);

    items.push_back(s.substr(start, end - start));
  } while (end != -1);

  return items;
}

string capitalize(string word) {
  vector<string> wrd = split(word);
  string capped = "";

  for (string &w : wrd) {
    w[0] = toupper(w[0]);
  }

  for (auto w : wrd) {
    capped.append(w + " ");
  }

  return capped;
}

int main() {
  string name = "zeamanuel tigistu";

  cout << capitalize(name) << endl;

  return 0;
}
