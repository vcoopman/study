#include <iostream>

#include "Pizza.h"
#include "PizzaPrototypeFactory.h"

int main() {
  Pizza* pizza1 = new Pizza({"Cheese", "Tomato", "Peperoni"});
  pizza1->eat();

  Pizza* pizza2 = pizza1->clone();
  pizza2->eat();

  pizza2->addIngredient("Basil");
  pizza2->eat();

  pizza1->eat();

  delete pizza1;
  delete pizza2;

  PizzaPrototypeFactory* pizzaFactory = new PizzaPrototypeFactory();
  Pizza* veganPizza = pizzaFactory->createPizza(PizzaType::VEGAN);
  veganPizza->eat();

  Pizza* americanPizza = pizzaFactory->createPizza(PizzaType::AMERICAN);
  americanPizza->eat();

  Pizza* italianPizza = pizzaFactory->createPizza(PizzaType::ITALIAN);
  italianPizza->eat();

  return 0;
}
