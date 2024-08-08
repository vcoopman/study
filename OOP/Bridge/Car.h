#ifndef CAR_H
#define CAR_H

#include <iostream>

class Car {
  public:
    virtual ~Car() = default;
    virtual void use_throttle() const  = 0;
    virtual void use_break() const  = 0;
};

#endif
