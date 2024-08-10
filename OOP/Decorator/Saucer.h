#ifndef SAUCER_H
#define SAUCER_H

#include <string>

class Saucer {
  public:
    virtual ~Saucer(){};
    virtual void apply(std::string* target) const = 0;
};

#endif
