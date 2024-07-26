#ifndef BODY_H
#define BODY_H

#include <string>

class Body {
  protected:
    std::string head;
    std::string rightArm;
    std::string leftArm;
    std::string rightLeg;
    std::string leftLeg;

  public:
    ~Body(){};

    void setHead(const std::string& head) {
      this->head = head;
    };

    void setRightArm(const std::string& arm) {
      this->rightArm = arm;
    };

    void setLeftArm(const std::string& arm) {
      this->leftArm = arm;
    };

    void setRightLeg(const std::string& leg) {
      this->rightLeg = leg;
    };

    void setLeftLeg(const std::string& leg) {
      this->leftLeg = leg;
    };

    void displayComponents() {
      std::cout << "Body Parts:"
        << "\nHead: " << this->head
        << "\nRight Arm: " << this->rightArm
        << "\nLeft Arm: " << this->leftArm
        << "\nRight Leg: " << this->rightLeg
        << "\nLeft Leg: " << this->leftLeg
        << std::endl;
    };

};

#endif
