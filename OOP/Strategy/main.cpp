#include "ChileanCurseStrategy.h"
#include "PeruvianCurseStrategy.h"
#include "Speaker.h"

int main()
{
  CurseStrategy* strat_1 = new ChileanCurseStrategy(); 
  CurseStrategy* strat_2 = new PeruvianCurseStrategy(); 

  Speaker* speaker = new Speaker(strat_1);
  speaker->curse();

  delete speaker;

  speaker = new Speaker(strat_2);
  speaker->curse();

  delete speaker;

  return 0;
};
