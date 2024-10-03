#include "CurseStrategy.h"

class ChileanCurseStrategy : public CurseStrategy {
  public:
    std::string get_curse() const override
    {
      return "El wn aweonao wn oooooooooh";
    };
};
