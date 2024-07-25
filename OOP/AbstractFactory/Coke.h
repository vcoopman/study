#include <string>

#include "Beverage.h"

class Coke : public Beverage {
  public:
    std::string drink() const override {
      return "{Coke drank!}";
    };

    std::string hasIce() const override {
      return "{Coke has ice}";
    };
};
