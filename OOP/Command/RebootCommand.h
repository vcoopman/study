#include "Command.h"

class RebootCommand : public Command {
  public:
    RebootCommand(Server* server) : server_m(server) {};
    ~RebootCommand() {};

    void execute() override {
      server_m->reboot();
    };

  private:
    Server* server_m;

};
