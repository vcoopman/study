#ifndef AMERICAN_SOCKET
#define AMERICAN_SOCKET

#include <string>

class AmericanSocket {
  public:
    virtual ~AmericanSocket() = default; 

    virtual std::string connectTo120V60Hz() const {
      return "AmericanSocket: Connected to 120V 60Hz.";
    };
};

#endif
