#include "iostream"
#include <string>

using namespace std;

class Car {
  int price = 100000;

public:
  Car(string Model, int Speed, int Year) {
    model = Model, speed = Speed, year = Year;
  }

  float speed;
  string model;
  int year;

  string honk() { return "beep beep..."; }
  virtual int Price() { return price; }
};

class RacingCar : public Car {
  int price = 1000000;

public:
  RacingCar(string Model, int Speed, int Year) : Car(Model, Speed, Year) {
    model = Model, speed = Speed, year = Year;
  };

  string honk() { return "hoove hooove..."; }

  string getInfo() {
    return model + " with " + to_string(speed) + " km/hr speed" + " made at " +
           to_string(year) + ".";
  }

  int Price() override { return price; }
};

int main() {
  Car *myCar = new Car("Normal V1", 180, 2025);

  cout << myCar->model + " with " + to_string(myCar->speed) + " km/hr speed"
       << endl;

  cout << "price: " << myCar->Price() << endl;
  cout << myCar->honk() << endl;

  RacingCar *myFastCar = new RacingCar("Rose", 350, 2026);

  cout << myFastCar->getInfo() << endl;
  cout << "price: " << myFastCar->Price() << endl;

  return 0;
}
