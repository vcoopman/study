#include "Memento.h"

class Hippocampus {
  public:
    Hippocampus(Brain* brain) : brain_m(brain) {};

    ~Hippocampus()
    {
      for (auto m : memories_m)
        delete m;
    }

    void createMemory()
    {
      memories_m.push_back(brain_m->createMemory());
    };

    void forget()
    {
      if (!memories_m.size())
        return;

      Memory* memory = memories_m.back();
      memories_m.pop_back();

      brain_m->remember(memory);
    };

    void showMemories() const
    {
      for (Memory* memory : memories_m)
        std::cout << memory->get_name() << std::endl;
    };

  private:
    std::vector<Memory*> memories_m;
    Brain* brain_m; // Originator.

};
