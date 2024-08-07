#include <iostream>

#include "AmericanSocket.h"
#include "EuropeanSocket.h"
#include "AmericanToEuropeanSocketAdapter.h"

void clientCode(AmericanSocket* socket) {
  std::cout << socket->connectTo120V60Hz() << std::endl;
} 

int main() {
  AmericanSocket* americanSocket = new AmericanSocket();
  clientCode(americanSocket);

  EuropeanSocket* europeanSocket = new EuropeanSocket();
  std::cout << europeanSocket->connectTo230V50Hz() << std::endl;

  AmericanToEuropeanSocketAdapter* adapter = new AmericanToEuropeanSocketAdapter(europeanSocket); 
  clientCode(adapter);

  delete americanSocket;
  delete europeanSocket;
  delete adapter;

  return 0;
}
