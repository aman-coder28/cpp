#include <cctype>
#include <iostream>
#include <string>

using namespace std;

string cap(string word) {
  char first = toupper(word[0]);

  return first + word.substr(1);
}

int main() {
  string lang = "c++";

  cout << cap(lang) << endl;

  return 0;
}
