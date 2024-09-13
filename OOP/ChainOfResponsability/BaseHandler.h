#ifndef BASE_HANDLER_H
#define BASE_HANDLER_H

#include <iostream>

#include "Handler.h"

class BaseHandler : public Handler {
  public:
    BaseHandler() {};

    Handler* set_next(Handler* handler) override {
      this->next_handler_m = handler; 
      return handler;
    };

    Request* handle(Request* request) const override {
      request->steps++;

      if (this->next_handler_m != nullptr)
        return this->next_handler_m->handle(request);

      return request;
    };

  private:
    Handler* next_handler_m;

};

#endif
