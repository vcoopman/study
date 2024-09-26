#ifndef MEMENTO_H
#define MEMENTO_H

#include <string>

class Memento {
  public:
    virtual ~Memento() {};
    virtual std::string get_name() const = 0;
    virtual std::string get_date() const = 0;
    virtual std::string get_state() const = 0;
};

#endif
