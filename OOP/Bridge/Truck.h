#include "Car.h"

class Truck : public Car {
  public:
    void use_throttle() const override {
      std::cout << "Accelerating slow." << std::endl; 
    };

    void use_break() const override {
      std::cout << "Breaking slow." << std::endl;
    };
};
