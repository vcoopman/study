#include <iostream>

#include "F1.h"
#include "Truck.h"
#include "Driver.h"


int main() {
  std::cout << "Driving an F1" << std::endl;

  Car* f1 = new F1();
  Driver* driver1 = new Driver(f1);
  driver1->driveDragRace();

  delete f1;
  delete driver1;

  std::cout << "Driving a Truck" << std::endl;

  Car* truck = new Truck();
  Driver* driver2 = new Driver(truck);
  driver2->driveDragRace();

  delete truck;
  delete driver2;

  return 0;
};
