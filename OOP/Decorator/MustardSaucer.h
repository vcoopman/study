#include "SaucerDecorator.h"

class MustardSaucer : public SaucerDecorator {
  public:
    MustardSaucer(Saucer* saucer) : SaucerDecorator(saucer) {};

    void apply(std::string* target) const override {
      SaucerDecorator::apply(target);
      (*target) += "+Mustard";
    };
};
