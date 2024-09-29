#ifndef COFFEE_MACHINE_STATE_H
#define COFFEE_MACHINE_STATE_H

class CoffeeMachine;

class CoffeeMachineState {
  public:
    virtual void press_button(CoffeeMachine* cm) = 0;
};

#endif
