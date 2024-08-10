#include "Saucer.h"

class MayonnaiseSaucer : public Saucer {
  public:
    ~MayonnaiseSaucer(){};
    
    void apply(std::string* target) const {
      (*target) += "+Mayonnaise";
    };
};
