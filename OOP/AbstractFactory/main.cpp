#include <iostream>

#include "ItalianRestaurant.h"
#include "AmericanRestaurant.h"

void clientCode(const Restaurant &restaurant) {
  const Beverage* beverage = restaurant.prepareBeverage();
  const Food* food = restaurant.prepareFood();

  std::cout << beverage->drink() << std::endl;
  std::cout << beverage->hasIce() << std::endl;

  std::cout << food->eat() << std::endl;
  std::cout << food->isHot() << std::endl;

  delete beverage;
  delete food;
}


int main () {
  std::cout << "Testing client code with ItalianRestaurant factory" << std::endl;
  ItalianRestaurant* italianRestaurant = new ItalianRestaurant();
  clientCode(*italianRestaurant);

  std::cout << "Testing client code with AmericanRestaurant factory" << std::endl;
  AmericanRestaurant* americanRestaurant = new AmericanRestaurant();
  clientCode(*americanRestaurant);

  delete italianRestaurant;
  delete americanRestaurant;

  return 0;
};
