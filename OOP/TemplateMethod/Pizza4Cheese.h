#include "Pizza.h"

class Pizza4Cheese : public Pizza {
  public:
    Pizza4Cheese()
    {
      m_type = "4Cheese";
    };

  protected:
    void add_ingredients() override
    {
      m_ingredients.push_back("Mozzarella Cheese");
      m_ingredients.push_back("Parmesano Cheese");
      m_ingredients.push_back("Gorgonzola Cheese");
      m_ingredients.push_back("Fontina Cheese");
    };
};
