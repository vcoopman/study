#ifndef BUILDER_H
#define BUILDER_H

class Builder {

  // This builder doesn't include the private product,
  // nor the reset method to avoid coupling.
  // Both elements need to be defined in the concrete builders.

  public:
    virtual ~Builder() = default;
    virtual void setHead() = 0;
    virtual void setRightArm() = 0;
    virtual void setLeftArm() = 0;
    virtual void setRightLeg() = 0;
    virtual void setLeftLeg() = 0;
};

#endif
