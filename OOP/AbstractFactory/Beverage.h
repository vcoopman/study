#ifndef BEVERAGE_H
#define BEVERAGE_H

#include <string>

class Beverage {
  public:
    virtual ~Beverage() {};
    virtual std::string drink() const = 0;
    virtual std::string hasIce() const = 0;
};

#endif
