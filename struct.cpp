#include <string>
using namespace std;

struct Car {
  string model;
  float speed;
  string type;
};

int main() {
  Car myCar = {.model = "Sky", .speed = 280, .type = "Sports"};

  auto boostSpeed = [&myCar]() {
    myCar.speed = 300;

    printf("now, the speed is %f km/hr.", myCar.speed);
  };

  printf("model: %s, speed: %f km/hr, type: %s. \n", myCar.model.c_str(),
         myCar.speed, myCar.type.c_str());

  boostSpeed();

  return 0;
}
