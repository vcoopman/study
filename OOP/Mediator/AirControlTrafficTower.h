#include <vector>
#include <string>

#include "Mediator.h"
#include "Plane.h"

class AirControlTrafficTower : public Mediator {
  public:
    void add_plane(Plane* plane)
    {
      plane->set_mediator(this);
      planes_m.push_back(plane);
    };

    void notify(Component* sender, std::string event) const override
    {
      Plane* sender_plane = dynamic_cast<Plane*>(sender);

      if (event == "LANDING")
      {
        for (Plane* plane : planes_m) {

          if (plane == sender_plane)
            continue;

          if (plane->get_status() == "LANDING") {
            std::cout << "There is plane landing, you need to wait" << std::endl;
            return;
          }
        }

        sender_plane->set_status("LANDING");
        std::cout << "It is ok for you to land." << std::endl;
        return;
      }

      if (event == "DEPARTURE")
      {

      }

    };

  private:
    std::vector<Plane*> planes_m;

};
