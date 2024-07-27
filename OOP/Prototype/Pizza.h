#ifndef PIZZA_H
#define PIZZA_H

#include <iostream>
#include <string>
#include <vector>

#include "Prototype.h"

class Pizza : public Prototype {
  public:
    Pizza(std::vector<std::string> ingredients) {
      this->ingredients = ingredients;
    };

    void eat() {
      std::cout << "Eating pizza with: ";
      for (const std::string& ingredient : ingredients) {
          std::cout << ingredient << " ";
      }
      std::cout << std::endl;
    };

    void addIngredient(std::string newIngredient) {
      this->ingredients.push_back(newIngredient);
    }

    Pizza* clone() const override {
      return new Pizza(this->ingredients);
    };

  private:
    std::vector<std::string> ingredients;

};

#endif
