#ifndef PLANE_H
#define PLANE_H

#include <string>

#include "Component.h"

class Plane : public Component {
  public:
    Plane(std::string status, unsigned int weight) : 
      status_m(status), weight_m(weight) {};

    unsigned int get_weight()
    {
      return weight_m;
    };

    std::string get_status()
    {
      return status_m;
    };

    void set_status(std::string status)
    {
      status_m = status;
    };

    void request_landing()
    {
      mediator_m->notify(this, "LANDING");
    };

    void request_departure()
    {
      mediator_m->notify(this, "DEPARTURE");
    };

  protected:
    unsigned int weight_m; // kg
    std::string status_m;

};

#endif
