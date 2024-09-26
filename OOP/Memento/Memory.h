#ifndef MEMORY_H
#define MEMORY_H

#include <ctime>

#include "Memento.h"

class Memory : public Memento {
  public:
    Memory(std::string thought) : thought_m(thought) {
      std::time_t now = std::time(0);
      date_m = std::ctime(&now);
    };

    // This will fit better if called "get_memory".
    // It is like this to follow the Memento interface.
    std::string get_state() const override
    {
      return thought_m;
    };

    std::string get_date() const override
    {
      return date_m;
    };

    std::string get_name() const override
    {
      return "Memory:" + get_date() + " " + get_state();
    };

  private:
    std::string thought_m;
    std::string date_m;

};

#endif
