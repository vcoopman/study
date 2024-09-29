#include "CoffeeMachine.h"
#include "OffCoffeeMachineState.h"

int main()
{
  CoffeeMachine* cm = new CoffeeMachine(new OffCoffeeMachineState());
  cm->press_button(cm);
  cm->press_button(cm);
  cm->press_button(cm);

  delete cm;

  return 0;
};
