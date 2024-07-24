#include "HotDog.h"
#include "Restaurant.h"

class HotDogRestaurant : public Restaurant {
  public:
    Food* cook() const override {
      return new HotDog();
    }
};
