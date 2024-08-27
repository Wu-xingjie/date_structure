#pragma once

#include <algorithm>

#include "virtual_linear_list.h"

namespace LINEARLIST {
template <class T>
class arraylist : public linearlist<T> {
 public:
  arraylist(const int& initalCapacity);
  arraylist(const arraylist<T>& copysrc);
  ~arraylist();

  bool empty() override { return _arrayLength == 0; };
  int size() override { return _arrayLength; };
  int capacity() const { return _listSize; }

  T get(const int& index = 0) override;
  // int indexOF(const T& element);
  // void erase(const int& index = 0);
  // void insert(const int& index, const T& element);
  // void output(std::ostream& out) const;

 protected:
  T* _element;
  int _arrayLength;
  int _listSize;
};
}  // namespace LINEARLIST