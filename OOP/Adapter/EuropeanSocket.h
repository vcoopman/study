#ifndef EUROPEAN_SOCKET
#define EUROPEAN_SOCKET

#include <string>

class EuropeanSocket {
  public:
    virtual ~EuropeanSocket() = default;

    virtual std::string connectTo230V50Hz() {
      return "EuropeanSocket: Connected to 230V 50Hz.";
    };
};

#endif
