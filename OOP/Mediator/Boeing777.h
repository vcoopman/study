#include "Plane.h"

class Boeing777 : public Plane {
  public:
    Boeing777(std::string status) : Plane(status, 200000) {};
};
