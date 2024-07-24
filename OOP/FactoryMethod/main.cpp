#include <iostream>

#include "PizzaRestaurant.h"
#include "HotDogRestaurant.h"

void eatAtRestaurant(const Restaurant& restaurant){
  std::cout << "I don't know where I am eating but I am eating :) " << restaurant.bonAppetit() << std::endl;
}

int main() {
  std::cout << "Creating PizzaRestaurant" << std::endl;
  Restaurant* pizzaRestaurant = new PizzaRestaurant();
  eatAtRestaurant(*pizzaRestaurant);

  std::cout << "Creating HotDogRestaurant" << std::endl;
  Restaurant* hotDogRestaurant = new HotDogRestaurant();
  eatAtRestaurant(*hotDogRestaurant);

  delete pizzaRestaurant;
  delete hotDogRestaurant;

  return 0;
}
