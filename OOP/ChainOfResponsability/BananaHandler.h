#include "BaseHandler.h"

class BananaHandler : public BaseHandler {
  public:
    Request* handle(Request* request) const override {
      if (request->content == "Banana" )
        std::cout << "(Banana) Handled" << std::endl;

      return BaseHandler::handle(request);
    };
};
