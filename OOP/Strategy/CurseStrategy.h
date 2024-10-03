#ifndef CURSE_STRATEGY_H
#define CURSE_STRATEGY_H

#include <string>

class CurseStrategy {
  public:
    virtual std::string get_curse() const = 0;
};

#endif
