#include "Coke.h"
#include "HotDog.h"

// This is one of the concrete factories.
class AmericanRestaurant : public Restaurant {
  public:
    Beverage* prepareBeverage() const override {
      return new Coke();
    };

    Food* prepareFood() const override {
      return new HotDog();
    };
};
