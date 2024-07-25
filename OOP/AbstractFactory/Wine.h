#include <string>

#include "Beverage.h"

class Wine : public Beverage {
  public:
    std::string drink() const override {
      return "{Wine drank!}";
    };

    std::string hasIce() const override {
      return "{Wine doesn't have ice}";
    };
};
