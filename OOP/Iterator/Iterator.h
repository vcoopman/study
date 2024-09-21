#ifndef ITERATOR_H
#define ITERATOR_H

#include <vector>

template<typename T, typename U>
class Iterator {
  public:
    typedef typename std::vector<T>::iterator iter_type;

    Iterator(U* data, bool reverse = false) : data_m(data)
    {
      it_m = data->data_m.begin();
    };

    void first()
    {
      it_m = data_m->data_m.begin();
    };

    void next()
    {
      it_m++;
    };

    bool is_done()
    {
      return (it_m == data_m->data_m.end());
    };

    iter_type current()
    {
      return it_m;
    };

 private:
  U* data_m;
  iter_type it_m;

};

#endif
