#include <fstream>
#include <iostream>
using namespace std;

int main() {
  // ofstream MyFile("todo.txt");
  // MyFile << "learn c++\nlearn java";

  ifstream MyFile("todo.txt");
  char myText[40];

  MyFile.read(myText, 40);

  cout << myText << endl;

  MyFile.close();
}