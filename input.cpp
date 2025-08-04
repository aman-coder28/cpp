#include <cstdio>
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
  int age;

  printf("please enter your age: ");
  cin >> age;

  if (age < 18) {
    printf("noway, go home!");
  } else if (age > 18) {
    printf("hi, please sign in.");
  }

  return 0;
}
