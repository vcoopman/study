#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>

class Component {
  public:
    virtual ~Component() {};
    virtual std::string getContent() const = 0;
};

#endif
