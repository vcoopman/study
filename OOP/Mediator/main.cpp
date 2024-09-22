#include <iostream>

#include "AirControlTrafficTower.h"
#include "Boeing777.h"
#include "AirBus320.h"
#include "AirBus321.h"

int main()
{
  Plane* plane1 = new Boeing777("AIR");
  Plane* plane2 = new AirBus320("AIR");
  Plane* plane3 = new AirBus321("GROUND");

  AirControlTrafficTower* tower = new AirControlTrafficTower();
  tower->add_plane(plane1);
  tower->add_plane(plane2);
  tower->add_plane(plane3);

  plane1->request_landing();
  plane2->request_landing();

  plane1->set_status("GROUND");
  plane2->request_landing();

  delete plane1;
  delete plane2;
  delete plane3;
  delete tower;

  return 0;
};
