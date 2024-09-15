#include <iostream>
#include <string>

class Server {
  public:
    Server(std::string serial) : serial_m(serial) {}; 
    ~Server() {};

    void reboot()
    {
      std::cout << "Server rebooted" << std::endl;
    };

    std::string get_serial_number()
    {
      return serial_m;
    }

  private:
    std::string serial_m;

};
