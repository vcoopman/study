#include "Treasure.h"

class TreasureLoggingProxy : public Treasure {
  public:
    TreasureLoggingProxy(Treasure* treasure) : treasure_m(treasure) {};
    ~TreasureLoggingProxy() = default;

    void access() const override {
      std::cout << "The treasure access starts" << std::endl;
      treasure_m->access();
      std::cout << "The treasure access ends!" << std::endl;
    } 

  private:
    Treasure* treasure_m;
};
