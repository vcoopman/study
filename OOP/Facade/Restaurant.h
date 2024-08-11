#include <string>

#include "Kitchen.h"
#include "Waitress.h"

/* This is our Facade class */ 
class Restaurant {
  public:
    Restaurant() = default;
    ~Restaurant(){};

    std::string getMeal(){
      std::string meal = this->_kitchen->prepareMeal();
      return this->_waitress->deliverMeal(meal);
    };

  protected:
    Kitchen* _kitchen;
    Waitress* _waitress;
};
