#ifndef COFFEE_MACHINE_H
#define COFFEE_MACHINE_H

#include "CoffeeMachineState.h"

class CoffeeMachine {
  public:
    CoffeeMachine(CoffeeMachineState* state) : state_m(state) {}; 

    ~CoffeeMachine()
    {
      delete state_m;
    };

    void set_state(CoffeeMachineState* state)
    {
      state_m = state;
    };

    void press_button(CoffeeMachine* cm)
    {
      state_m->press_button(cm);
    };

  private:
    CoffeeMachineState* state_m;
};

#endif
