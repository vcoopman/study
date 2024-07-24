#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <string>

#include "Food.h"

class Restaurant {
  public:
    virtual ~Restaurant(){};

    // This is our factory method.
    virtual Food* cook() const = 0;

    std::string bonAppetit() const {
      // Class with factory method has other primary
      // responsabilities rather than just creating products (in this case: Food).
      Food* food = this->cook();
      return food->eat(); 
    }
};

#endif
