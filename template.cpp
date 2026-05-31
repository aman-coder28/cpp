#include "iostream"
#include <string>

using namespace std;

template <typename T, typename J> T add(T a, J b) { return a + b; }

template <typename F, typename S> class Pair {
public:
  F first;
  S second;

  Pair(F a, S b) {
    first = a;
    second = b;
  }

  void display() {
    cout << "First: " << first << ", Second: " << second << ". \n";
  }
};

int main() {
  cout << add<int, float>(1, 2) << endl;
  cout << add<float, int>(4, 5.0) << endl;
  cout << add<string>("I'm ", "Cool!") << endl;

  Pair<string, string> *friends = new Pair<string, string>("me", "me also");

  friends->display();

  return 0;
}