#ifndef CONTAINER_H
#define CONTAINER_H

#include "Iterator.h"

template<class T>
class Container {
  friend class Iterator<T, Container>;

  public:
    void add(T a) 
    {
      data_m.push_back(a);
    };

    Iterator<T, Container> *createIterator()
    {
      return new Iterator<T, Container>(this);
    };

  private:
    std::vector<T> data_m;

};

#endif
