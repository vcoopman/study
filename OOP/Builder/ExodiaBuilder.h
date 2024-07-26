#include <string>

#include "Builder.h"
#include "Exodia.h"

class ExodiaBuilder : public Builder {
  private:
    Exodia* product;

  public:
    ExodiaBuilder() {
      this->reset();
    };

    ~ExodiaBuilder() override {
      delete this->product;
    };

    void reset() {
      this->product = new Exodia();
    };

    void setHead() override {
      this->product->setHead("Exodia, the Forbidden One");
    };

    void setRightArm() override {
      this->product->setRightArm("Right Arm of the Forbidden One");
    };

    void setLeftArm() override {
      this->product->setLeftArm("Left Arm of the Forbidden One");
    };

    void setRightLeg() override {
      this->product->setRightLeg("Right Leg of the Forbidden One");
    };

    void setLeftLeg() override {
      this->product->setLeftLeg("Left Leg of the Forbidden One");
    };

    Exodia* getProduct() {
      Exodia* result = this->product;
      this->reset();
      return result;
    };
};
