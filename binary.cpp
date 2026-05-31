#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

string toBinary(int decimal) {
  int var = 0;

  if (decimal != 1) {
    var = decimal / 2;

    int mod = decimal - var * 2;

    return toBinary(var) + to_string(abs(mod));
  } else {
    return to_string(1);
  }
}

int main() {
  cout << toBinary(5);

  return 0;
}
