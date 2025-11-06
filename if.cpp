#include <iostream>
using namespace std;


int main() {
  int x, y;
  char opr;

  cout << "enter first number: ";
  cin >> x;

  cout << "enter an operator: ";
  cin >> opr;

  cout << "enter second number: ";
  cin >> y;

  cout << "" << endl;

  if (opr == '+') {
    cout << x << " " << opr << " " << y << " = " << x + y;
  } else if (opr == '-') {
    cout << x << opr << y << " = " << x - y;
  }  else if (opr == 'x') {
    cout << x << opr << y << " = " << x * y;
  } else {
    cout << x << opr << y << " = " << x + y;
  }

  return  0;
}
