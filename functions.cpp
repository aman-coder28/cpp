#include <cctype>
#include <iostream>
#include <ostream>
#include <string>
#include <vector>

using namespace std;

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

int add(int x, int y) { return x + y; }
double add(double x, double y) { return x + y; }
double add(double x, int y) { return x + y; }
double add(int x, double y) { return x + y; }
string add(string x, string y) { return x + " " + y; }

int main() {
  string name = capitalize("zeamanuel tigistu");

  auto add_and_double = [&name](float x, float y) {
    cout << name << "has added and doubled, " << x << " and " << y << " = ";

    double result = add(x, y);

    return result * 2;
  };

  cout << add_and_double(4, 5) << "." << endl;

  cout << add("I'm", "Cool!") << " " << add("and", "I know it.");

  return 0;
}
