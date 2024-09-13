#include <iostream>

#include "BananaHandler.h"
#include "OrangeHandler.h"

int main () {
  BananaHandler* bananaHandler = new BananaHandler(); 
  OrangeHandler* orangeHandler = new OrangeHandler(); 
  bananaHandler->set_next(orangeHandler);

  {
    Request request;
    request.steps = 0;
    request.content = "Banana";

    bananaHandler->handle(&request);

    std::cout << "Request Steps: " << request.steps << std::endl;
    std::cout << "Request Content: " << request.content << std::endl;
  }

  {
    Request request;
    request.steps = 0;
    request.content = "Orange";

    bananaHandler->handle(&request);

    std::cout << "Request Steps: " << request.steps << std::endl;
    std::cout << "Request Content: " << request.content << std::endl;
  }

  {
    Request request;
    request.steps = 0;
    request.content = "Apple";

    bananaHandler->handle(&request);

    std::cout << "Request Steps: " << request.steps << std::endl;
    std::cout << "Request Content: " << request.content << std::endl;
  }

  delete bananaHandler;
  delete orangeHandler;

  return 0;

}
