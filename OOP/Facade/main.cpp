#include <iostream>

#include "Restaurant.h"

int main() {
  Restaurant* restaurant = new Restaurant();
  std::cout << restaurant->getMeal() << std::endl;
  delete restaurant;
  return 0;
};
