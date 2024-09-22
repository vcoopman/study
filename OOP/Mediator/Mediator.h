#ifndef MEDIATOR_H
#define MEDIATOR_H

class Component; // Forward declaration to avoid circular dependency.

class Mediator {
  public:
    virtual void notify(Component* sender, std::string event) const = 0;
};

#endif
