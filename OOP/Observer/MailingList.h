#include <vector>
#include <algorithm>

#include "Subject.h"
#include "Observer.h"

class MailingList : Subject {
  public:
    void attach(Observer* subscriber) override
    {
      subscribers_m.push_back(subscriber);
    };

    void detach(Observer* subscriber) override
    {
      subscribers_m.erase(
        std::remove( subscribers_m.begin(), subscribers_m.end(), subscriber),
        subscribers_m.end()
      );
    };

    void notify() override
    {
      for (Observer* subscriber : subscribers_m) {
        subscriber->update();
      }
    };

  private:
    std::vector<Observer*> subscribers_m;
};
