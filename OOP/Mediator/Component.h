#ifndef COMPONENT_H
#define COMPONENT_H

#include "Mediator.h"

class Component {
  public:
    virtual ~Component() {}; // Added to allow polymorphism.

    void set_mediator(Mediator* mediator)
    {
      mediator_m = mediator;
    }

  protected:
    Mediator* mediator_m;

};

#endif
