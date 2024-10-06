#include "Pizza.h"

class PizzaNapolitana : public Pizza {
  public:
    PizzaNapolitana()
    {
      m_type = "Napolitana";
    };

  protected:
    void add_ingredients() override
    {
      m_ingredients.push_back("Mozzarella Cheese");
      m_ingredients.push_back("Tomato");
      m_ingredients.push_back("Basil");
      m_ingredients.push_back("Olive");
    };
};
