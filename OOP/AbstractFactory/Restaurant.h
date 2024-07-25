#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <string>

#include "Food.h"
#include "Beverage.h"

// This is our abstract factory.
class Restaurant {
  public:
    virtual ~Restaurant(){};
    virtual Food* prepareFood() const = 0;
    virtual Beverage* prepareBeverage() const = 0;
};

#endif
