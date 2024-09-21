#include <iostream>

#include "Iterator.h"
#include "Container.h"
#include "Data.h"


int main()
{
  // --- Iterator with int ---
  Container<int> container1;

  for (int i = 0; i < 10; ++i) {
    container1.add(i);
  }

  Iterator<int, Container<int>>* it1 = container1.createIterator();
  for (it1->first(); !it1->is_done(); it1->next()) {
    std::cout << *(it1->current()) << std::endl;
  }

  // --- Iterator with custom class ---
  Container<Data> container2;
  Data a(100);
  Data b(1000);
  Data c(10000);
  container2.add(a);
  container2.add(b);
  container2.add(c);

  Iterator<Data, Container<Data>>* it2 = container2.createIterator();
  for (it2->first(); !it2->is_done(); it2->next()) {
    std::cout << it2->current()->data() << std:: endl;
  }

  delete it1;
  delete it2;


  return 0;
};
