#include <cstdio>
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

// make it accept more and more parameters
float perform(string first, char sign, string second) {
  switch (sign) {
  case '+':
    return stof(first) + stof(second);
    break;
  case '-':
    return stof(first) - stof(second);
    break;
  case 'x':
    return stof(first) * stof(second);
    break;
  case '/':
    return stof(first) / stof(second);
    break;

  default:
    return 0;
  }

  return 0;
}

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

int main() {
  string text;

  printf("please enter your operation: ");
  getline(cin, text);

  vector<string> inputs = split(text);

  printf("%f\n", perform(inputs.at(0), inputs.at(1).at(0), inputs.at(2)));

  return 0;
}
