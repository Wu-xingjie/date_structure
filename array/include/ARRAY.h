#include <iostream>

namespace ARRAY {
class Array {
 public:
  Array(int mCap = 10) : _mCap(mCap), _mCur(0) { _mpArr = new int[_mCap]; };
  ~Array() {
    delete[] _mpArr;
    _mpArr = nullptr;
  }

 public:
  void push_back(int elem);
  void insert(int pos, int elem);
  void pop_back();
  void erase(int pos);
  int find(int elem);
  void fix(int pos, int elem);
  void show();
  void reverse();

 private:
  void expand(int size);

 private:
  int* _mpArr;
  int _mCap;
  int _mCur;
};
}  // namespace ARRAY