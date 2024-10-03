#include "CurseStrategy.h"

class PeruvianCurseStrategy : public CurseStrategy {
  public:
    std::string get_curse() const override
    {
      return "Calla cholo de mier...";
    };
};
