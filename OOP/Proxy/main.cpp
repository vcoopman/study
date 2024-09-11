#include <iostream>

#include "GoldTreasure.h"
#include "TreasureLoggingProxy.h"

int main() {
  Treasure* goldTreasure = new GoldTreasure();
  Treasure* treasure = new TreasureLoggingProxy(goldTreasure);
  treasure->access();
}
