#include <string>
#include <iostream>

#include "Observer.h"

class Person : public Observer {
  public:
    Person(std::string name) : name_m(name) {};
    
    void update() override
    {
      std::cout << name_m + " received a notification." << std::endl;
    };

  private:
    std::string name_m;
};
