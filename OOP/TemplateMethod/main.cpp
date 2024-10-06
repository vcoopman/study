#include "PizzaNapolitana.h"
#include "Pizza4Cheese.h"

int main()
{
  Pizza* pizza1 = new PizzaNapolitana();
  Pizza* pizza2 = new Pizza4Cheese();

  pizza1->cook();
  pizza2->cook();

  delete pizza1;
  delete pizza2;

  return 0;
};
