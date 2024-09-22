#include "Plane.h"

class AirBus320 : public Plane {
  public:
    AirBus320(std::string status) : Plane(status, 70000) {};
};
