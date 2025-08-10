#include <cstdio>
#include <string>
using namespace std;

int main() {
  string name = "Cpp";

  for (char c : name) {
    printf("%c \n", c);
  }

  int n = 10;

  // while (n > 0) {
  //   printf("%d", n);
  //   n--;
  // }

  do {
    printf("%d \n", n);
    n--;
  } while (n > 0);

  printf("%s", name.c_str());

  for (int c = 10; c > 0; c--) {
    printf("%d", c);
  }

  return 0;
}
