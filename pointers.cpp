#include <iostream>
#include <string>

using namespace std;

int main() {
  string name = "cpp";
  string *myName = &name;

  cout << *myName << "\n";

  *myName = "c with classes";

  cout << *myName << "\n";

  return 0;
}
