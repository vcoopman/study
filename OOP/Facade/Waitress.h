#include <string>

class Waitress {
  public:
    Waitress(){};
    ~Waitress(){};

    std::string deliverMeal(std::string meal){
      return "Here is your: (" + meal + ")";
    };
};
