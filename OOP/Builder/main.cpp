#include <string>
#include <iostream>

#include "Director.h"
#include "ExodiaBuilder.h"

int main() {

  ExodiaBuilder* exodiaBuilder = new ExodiaBuilder(); 

  // Remember, the Builder pattern can be used without a Director class.
  exodiaBuilder->setHead();
  exodiaBuilder->setRightArm();
  exodiaBuilder->setLeftArm();
  Exodia* product1 = exodiaBuilder->getProduct();
  product1->displayComponents();

  std::cout << std::endl;

  Director* director = new Director();
  director->setBuilder(exodiaBuilder);

  director->makeLowerBody();
  Exodia* product2 = exodiaBuilder->getProduct();
  product2->displayComponents();

  std::cout << std::endl;

  director->makeComplete();
  Exodia* product3 = exodiaBuilder->getProduct();
  product3->displayComponents();

  delete exodiaBuilder;
  delete director;
  delete product1;
  delete product2;
  delete product3;

  return 0;
}
