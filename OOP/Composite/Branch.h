#include <list>

#include "Composite.h"

class Branch : public Composite {
  public:
    void add(Component* child) override {
      this->_children.push_back(child);
    };

    std::string getContent() const override {
      std::string result;
      for (const Component* child : this->_children) {
        if (child == this->_children.back())
          result += child->getContent();
        else
          result += child->getContent() + "+";
      };
      return "Branch(" + result + ")";
    };

  protected:
    std::list<Component*> _children;
};
