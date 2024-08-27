#include "arraylist.h"

namespace LINEARLIST {
template <class T>
arraylist<T>::arraylist(const int& initalCapacity) {
  if (!initalCapacity > 0) {
    throw "initialCapacity can't be empty and  must bigger than 0";
  }
  try {
    _arrayLength = initalCapacity;
    _element = new T[_arrayLength];
    _listSize = 0;
  } catch (...) {
  }
}

template <class T>
arraylist<T>::arraylist(const arraylist<T>& copysrc) {
  _arrayLength = copysrc._arrayLength;
  _listSize = copysrc._listSize;
  _element = new T[_arrayLength];
  copy(copysrc._element, copysrc._element + _arrayLength, _element);
}

template <class T>
arraylist<T>::~arraylist() {
  delete[] _element;
}

template <class T>
T arraylist<T>::get(const int& index) {
  if (!index > 0) {
    throw "initialCapacity can't be empty and  must bigger than 0";
  }
  try {
    return _element[index];
  } catch (...) {
  }
}
}  // namespace LINEARLIST