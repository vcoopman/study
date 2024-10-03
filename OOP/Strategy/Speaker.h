#include <iostream>

class Speaker {
  public:
    Speaker(CurseStrategy* curse_strategy) : curse_strategy_m(curse_strategy) {};

    void curse()
    {
      std::cout << curse_strategy_m->get_curse() << std::endl;
    };

  private:
    CurseStrategy* curse_strategy_m;

};
