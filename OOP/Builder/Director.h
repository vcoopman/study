#include "Builder.h"

class Director {

  private:
    /**
     * The Director works with any builder instance that the client code passes
     * to it. This way, the client code may alter the final type of the newly
     * assembled product.
     */
    Builder* builder;

  public:
    ~Director(){};

    void setBuilder(Builder* builder) {
      this->builder = builder;
    };

    void makeComplete() {
      this->builder->setHead();
      this->builder->setRightArm();
      this->builder->setLeftArm();
      this->builder->setRightLeg();
      this->builder->setLeftLeg();
    };

    void makeLowerBody() {
      this->builder->setLeftLeg();
      this->builder->setRightLeg();
    };

};
