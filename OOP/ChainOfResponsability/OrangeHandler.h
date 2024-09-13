#include "BaseHandler.h"

class OrangeHandler : public BaseHandler {
  public:
    Request* handle(Request* request) const override {
      if (request->content == "Orange" )
        std::cout << "(Orange) Handled" << std::endl;

      return BaseHandler::handle(request);
    };
};
