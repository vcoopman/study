#include <iostream>

#include "CoffeeMachine.h"
#include "CoffeeMachineState.h"

class HotCoffeeMachineState : public CoffeeMachineState {
  public:
    void press_button(CoffeeMachine* cm) override
    {
      std::cout << "prtsprtsprts... (Coffee is being made)" << std::endl; 
    };
};
