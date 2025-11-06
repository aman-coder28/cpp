#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

string toBinary(int decimal) {
  int local = 0;
  int var = 0;
  string bins = "";
  int index = 0;

  if (decimal != 1) {
    var = decimal / 2;

    int mod = decimal - var * 2;

    bins.append(to_string(abs(mod)));

    toBinary(var);
  } else {
    bins.append(to_string(1));
  }

  for (auto bin : bins) {
    cout << bin << " ";
  }

  return bins;
}

int main() {
  toBinary(4);

  return 0;
}
