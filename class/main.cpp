#include "iostream"
#include <string>

using namespace std;

class Car {
  float speed = 200;

public:
  Car(string Model, int Speed, int Year) {
    model = Model, speed = Speed, year = Year;
  }

  string model = "MyCar";
  int year = 2025;

  string honk() { return "beep beep..."; }
};

class RacingCar : public Car {
  float speed = 300;

public:
  RacingCar(string Model, int Speed, int Year) : Car(Model, Speed, Year) {
    model = Model, speed = Speed, year = Year;
  };

  string honk() { return "hoove hooove..."; }

  string getInfo() {
    return model + " with " + to_string(speed) + " km/hr speed" + " made at " +
           to_string(year) + ".";
  }
};

int main() {
  RacingCar myCar("Rose", 350, 2026);

  cout << myCar.getInfo() << endl;
  cout << myCar.honk() << endl;

  return 0;
}
