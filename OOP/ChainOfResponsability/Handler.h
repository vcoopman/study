#ifndef HANDLER_H
#define HANDLER_H

#include "definitions.h"

class Handler {
  public:
    virtual Handler* set_next(Handler* handler) = 0;
    virtual Request* handle(Request* request) const  = 0;
};

#endif
