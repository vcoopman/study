#ifndef PIZZA_H
#define PIZZA_H

#include <iostream>
#include <vector>
#include <string>

class Pizza {
  public:
    void cook()
    {
      prepare_dough();
      add_ingredients();
      hook1();
      bake();
    };

  protected:
    std::string m_type;
    std::vector<std::string> m_ingredients;

    void prepare_dough()
    {
      std::cout << m_type << " " << "Preparing dough" << std::endl;
    };

    virtual void add_ingredients() = 0;

    virtual void bake() 
    {
      std::cout << m_type << " " << "Baking" << std::endl;
    };

    virtual void hook1()
    {
      for (auto ingredient : m_ingredients) {
        std::cout << m_type << " " << ingredient << std::endl;
      }
    };
};

#endif
