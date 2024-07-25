#include "Restaurant.h"
#include "Wine.h"
#include "Pizza.h"

// This is one of the concrete factories.
class ItalianRestaurant : public Restaurant {
  public:
    Beverage* prepareBeverage() const override {
      return new Wine();
    };

    Food* prepareFood() const override {
      return new Pizza();
    };
};
