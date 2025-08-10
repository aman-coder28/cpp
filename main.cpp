#include <cstdio>
#include <map>
#include <string>
using namespace std;

int main() {
  int one = 1;
  float two = 2.0;
  double three = 3;
  bool tru = true;
  string name = "cpp";
  auto _speed = "fast";
  int nums[] = {1, 2, 3};
  map<string, string> languages = {{"first", "C"}, {"second", "C++"}};

  printf("%d, %f, %f, %i, %s \n", one, two, three, tru, name.c_str());

  for (auto lang : languages) {
    printf("%s: %s\n", lang.first.data(), lang.second.data());
  }

  return 0;
}
