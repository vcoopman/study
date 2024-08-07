#include <string>

#include "AmericanSocket.h"
#include "EuropeanSocket.h"

class AmericanToEuropeanSocketAdapter : public AmericanSocket {
  public:
    AmericanToEuropeanSocketAdapter(EuropeanSocket* adaptee) : _adaptee(adaptee) {};

    std::string connectTo120V60Hz() const override {
      return "Adapter: " + this->_adaptee->connectTo230V50Hz();
    };

  private:
    EuropeanSocket* _adaptee;

};
