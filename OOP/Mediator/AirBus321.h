#include "Plane.h"

class AirBus321 : public Plane {
  public:
    AirBus321(std::string status) : Plane(status, 90000) {};
};
