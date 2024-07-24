#include <string>

#include "Food.h"

class Pizza : public Food {
  public:
    std::string eat() const override {
      return "{Pizza eated!}";
    }
};
