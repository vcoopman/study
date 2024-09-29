#ifndef OFF_COFFEE_MACHINE_STATE_H
#define OFF_COFFEE_MACHINE_STATE_H

#include "CoffeeMachine.h"
#include "OnCoffeeMachineState.h"

class OffCoffeeMachineState : public CoffeeMachineState {
  public:
    void press_button(CoffeeMachine* cm) override
    {
      cm->set_state(new OnCoffeeMachineState());
    };
};

#endif
