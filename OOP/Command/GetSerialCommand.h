#include <iostream>

#include "Command.h"

class GetSerialCommand : public Command {
  public:
    GetSerialCommand(Server* server) : server_m(server) {};
    ~GetSerialCommand() {};

    void execute() override {
      std::cout << server_m->get_serial_number() << std::endl;
    };

  private:
    Server* server_m;

};
