#include "Pizza.h"
#include "Restaurant.h"

class PizzaRestaurant: public Restaurant {
  public:
    Food* cook() const override {
      return new Pizza();
    }
};
