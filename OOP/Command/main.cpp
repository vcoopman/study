#include "Server.h"
#include "RebootCommand.h"
#include "GetSerialCommand.h"
#include "Invoker.h"

int main() {
  Server* server = new Server("3344");

  RebootCommand cmd1 = RebootCommand(server);
  cmd1.execute();

  GetSerialCommand cmd2 = GetSerialCommand(server);
  cmd2.execute();

  Invoker invoker = Invoker();
  invoker.set_start_cmd(&cmd1);
  invoker.set_end_cmd(&cmd2);
  invoker.doSomething();

  delete server;

  return 0;
};
