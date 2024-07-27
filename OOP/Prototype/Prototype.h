#include <string>

class Prototype {
  public:
    ~Prototype() {};
    virtual Prototype* clone() const = 0;
};
