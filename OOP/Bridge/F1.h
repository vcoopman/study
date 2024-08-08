#include "Car.h"

class F1 : public Car {
  public:
    void use_throttle() const override {
      std::cout << "Accelerating fast." << std::endl; 
    };

    void use_break() const override {
      std::cout << "Breaking fast." << std::endl;
    };
};
