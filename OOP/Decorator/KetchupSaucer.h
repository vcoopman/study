#include "SaucerDecorator.h"

class KetchupSaucer : public SaucerDecorator {
  public:
    KetchupSaucer(Saucer* saucer) : SaucerDecorator(saucer) {};

    void apply(std::string* target) const override {
      SaucerDecorator::apply(target);
      (*target) += "+Ketchup";
    };
};
