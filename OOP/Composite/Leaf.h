#include "Component.h"

class Leaf : public Component {
  public:
    std::string getContent() const override {
      return "Leaf";
    };
};
