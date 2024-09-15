#include <iostream>

#include "Command.h"

class Invoker {
  public:
    void doSomething() 
    {
      if (start_cmd)
        start_cmd->execute();

      std::cout << "Doing something" << std::endl;

      if (end_cmd)
        end_cmd->execute();
    };

    void set_start_cmd(Command* cmd)
    {
      start_cmd = cmd;
    }

    void set_end_cmd(Command* cmd)
    {
      end_cmd = cmd;
    }


  private:
    Command* start_cmd;
    Command* end_cmd;

};
