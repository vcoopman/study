#include "Treasure.h"

class GoldTreasure : public Treasure {
  public:
    GoldTreasure() : gold_m(99999) {};
    ~GoldTreasure() = default;

    void access() const override { 
      std::cout << "Gold: " << gold_m << std::endl;
    };

  private:
    int gold_m;
};
