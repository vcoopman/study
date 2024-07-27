#include <unordered_map>

enum PizzaType {
  VEGAN,
  AMERICAN,
  ITALIAN
};

class PizzaPrototypeFactory {
  public:
    PizzaPrototypeFactory() {
      this->_pizzas[PizzaType::VEGAN] = new Pizza({ "Fungi", "Basil", "Vegan Cheese" });
      this->_pizzas[PizzaType::AMERICAN] = new Pizza({ "Onion", "Sausage", "Cheedar Cheese" });
      this->_pizzas[PizzaType::ITALIAN] = new Pizza({ "Tomato", "Pepperoni", "Cheese" });
    }

    ~PizzaPrototypeFactory() {
      delete this->_pizzas[PizzaType::VEGAN];
      delete this->_pizzas[PizzaType::AMERICAN];
      delete this->_pizzas[PizzaType::ITALIAN];
    }

    Pizza* createPizza(PizzaType type) {
      return this->_pizzas[type]->clone();
    }

  private:
    std::unordered_map<PizzaType, Pizza*, std::hash<int>> _pizzas;
};
