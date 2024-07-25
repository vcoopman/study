#include <string>

#include "Food.h"

class HotDog : public Food {
  public:
    std::string eat() const override {
      return "{HotDog eated!}";
    };

    std::string isHot() const override {
      return "{Hotdog is hot}";
    };
};
