#include <iostream>

#include "Brain.h"
#include "Hippocampus.h"

int main()
{
  Brain* brain = new Brain();
  Hippocampus* hippocampus = new Hippocampus(brain);

  std::cout << brain->get_current_thought() << std::endl;
  hippocampus->createMemory();
  brain->think();

  std::cout << brain->get_current_thought() << std::endl;
  hippocampus->createMemory();
  brain->think();

  std::cout << brain->get_current_thought() << std::endl;
  hippocampus->createMemory();

  std::cout << "\n" << std::endl;
  hippocampus->showMemories();
  std::cout << "\n" << std::endl;

  hippocampus->forget();
  std::cout << brain->get_current_thought() << std::endl;

  hippocampus->forget();
  std::cout << brain->get_current_thought() << std::endl;

  hippocampus->forget();
  std::cout << brain->get_current_thought() << std::endl;

  return 0;
};
