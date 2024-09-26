#include <string>
#include <random>

#include "Memory.h"

class Brain {
  public:
    Brain()
    {
      std::srand(std::time(0));
      current_thought_m = "Random thought";
    };

    void think()
    {
      current_thought_m = get_next_thought();
    };

    std::string get_next_thought()
    {
      bool distracted = std::rand() % 2; 

      if (distracted)
        return "Random thought";

      return "Next logica thought";
    };

    Memory* createMemory()
    {
      return new Memory(current_thought_m);
    };

    void remember(Memory *memory)
    {
      current_thought_m = memory->get_state();
    };

    std::string get_current_thought()
    {
      return current_thought_m;
    }

  private:
    std::string current_thought_m;

};
