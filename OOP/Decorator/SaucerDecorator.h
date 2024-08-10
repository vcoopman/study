#ifndef SAUCER_DECORATOR_H
#define SAUCER_DECORATOR_H

#include "Saucer.h"

class SaucerDecorator : public Saucer {
  public:
    SaucerDecorator(Saucer* saucer) : _saucer(saucer) {};
    ~SaucerDecorator() {};

    void apply(std::string* target) const override {
      return this->_saucer->apply(target);
    };

  protected:
    Saucer* _saucer;

};

#endif
