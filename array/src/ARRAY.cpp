#include "ARRAY.h"

namespace ARRAY {

void Array::push_back(int elem) {
  if (_mCur == _mCap) {
    expand(2 * _mCap);
  }

  _mpArr[_mCur] = elem;
  _mCur++;
}

void Array::insert(int pos, int elem) {
  if (pos < 0 || pos > _mCur) {
    return;
  }
  if (_mCur == _mCap) {
    expand(2 * _mCap);
  }
  for (int i = _mCur - 1; i >= pos; i--) {
    _mpArr[i + 1] = _mpArr[i];
  }
  _mpArr[pos] = elem;
  _mCur++;
}

void Array::pop_back() { _mCur--; }

void Array::expand(int size) {
  int* temp = new int[size];
  for (int i = 0; i < _mCur; i++) {
    *temp = _mpArr[i];
    temp++;
  }
  delete[] _mpArr;
  _mpArr = temp;
  _mCap = size;
}

void Array::erase(int pos) {
  if (pos < 0 || pos >= _mCur) {
    return;
  }
  for (int i = pos + 1; i < _mCur - 1; i++) {
    _mpArr[i - 1] = _mpArr[i];
  }
  _mCur--;
}

int Array::find(int elem) {
  for (int i = 0; i < _mCur; i++) {
    if (_mpArr[i] == elem) {
      return i;
    }
  }
  return -1;
}

void Array::fix(int pos, int elem) {
  if (pos < 0 || pos >= _mCur) {
    return;
  }
  _mpArr[pos] = elem;
}

void Array::show() {
  for (int i = 0; i < _mCur; i++) {
    std::cout << _mpArr[i] << " ";
  }
  std::cout << std::endl;
}

void Array::reverse() {
  int* first_elem = _mpArr;
  int* last_elem = _mpArr + _mCur -1;
   while (first_elem < last_elem) {
    int temp_elem = *first_elem;
    *first_elem = *last_elem;
    *last_elem = temp_elem;
    first_elem++;
    last_elem--;
  }
}

}  // namespace ARRAY