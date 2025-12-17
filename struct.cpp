#include <cstdio>
#include <string>
using namespace std;

struct Adress {
  string city;
  string post;
};

struct Empolyee {
  string name;
  Adress workAdress;
  Adress homeAdress;

  void printInfo() {
    printf("name: %s, work at: %s, home at: %s. \n", name.c_str(),
           workAdress.post.c_str(), homeAdress.post.c_str());
  }
};

struct Car {
  string model;
  int speed;
  string type;

  struct Engine {
    int power;
    int force;
  } engine;

  void boostSpeed() {
    speed = 300;

    printf("Speed Bootsted! now, the speed is %i km/hr. \n", speed);
  }

  void getData() {
    printf("model: %s, speed: %i km/hr, type: %s, engine power: %i, engine "
           "force: %i. \n",
           model.c_str(), speed, type.c_str(), engine.power, engine.force);
  }
};

int main() {
  Car SkyBlue = {"SkyBlue", 200, "Sports", {200, 100}};
  Car *myCar = &SkyBlue;

  myCar->getData();

  myCar->boostSpeed();

  Adress home = {"A.A", "mexico"};

  Empolyee amn = {"amn", {"A.A", "kore"}, home};

  amn.printInfo();

  return 0;
}
