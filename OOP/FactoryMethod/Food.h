#ifndef FOOD_H
#define FOOD_H

#include <string>

class Food {
  public:
    virtual ~Food() {}
    virtual std::string eat() const = 0;
};

#endif
