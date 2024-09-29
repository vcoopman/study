#include "CoffeeMachine.h"
#include "HotCoffeeMachineState.h"

class OnCoffeeMachineState : public CoffeeMachineState {
  public:
    void press_button(CoffeeMachine* cm) override
    {
      cm->set_state(new HotCoffeeMachineState());
    };
};
