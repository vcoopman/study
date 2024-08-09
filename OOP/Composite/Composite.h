#include "Component.h"

class Composite : public Component {
  public:
    virtual ~Composite(){};
    virtual void add(Component* child) = 0;
};
