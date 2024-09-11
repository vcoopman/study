#ifndef TREASURE_H
#define TREASURE_H

#include <iostream>

class Treasure {
  public:
    Treasure(){};
    virtual ~Treasure(){};

    virtual void access() const = 0;
};

#endif
