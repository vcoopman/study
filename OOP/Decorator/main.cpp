#include "MayonnaiseSaucer.h"
#include "KetchupSaucer.h"
#include "MustardSaucer.h"

#include <iostream>
#include <string>

int main() {
  Saucer* saucer = new MayonnaiseSaucer();
  saucer = new KetchupSaucer(saucer);
  saucer = new MustardSaucer(saucer);

  std::string hotdog = "HotDog";
  saucer->apply(&hotdog);
  std::cout << hotdog << std::endl;

  delete saucer;
  
  return 0;

};
