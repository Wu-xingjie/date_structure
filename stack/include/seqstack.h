#pragma once

namespace SEQSTACK {
template <typename T>
class stack {
 public:
  stack(int size = 10) : _top(0), _cap(size) { _mpstack = new T[_cap]; }
  ~stack() {
    delete[] _mpstack;
    _top = 0;
  }
  stack(const stack<T>& p) {
    _mpstack = new T[p._cap];
    for (int i = 0; i < _cap; i++) {
      _mpstack[i] = p[i];
    }
    _top = p._top;
    _cap = p._cap;
  }

  void push(const T& val) {
    if (_top == _cap) {
      expand(_cap + _cap);
    }
    _mpstack[_top++] = val;
  }

  void pop() {
    if (_top == 0) {
      return;
    }
    _top--;
  }

  bool empty() { return (_top == 0) ? true : false; }

  T top() const {
    if (_top == 0) {
      throw "stack is empty!";
    }
    return _mpstack[_top - 1];
  }

  int size() { return _top; }

 protected:
  void expand(int size) {
    T* p = new T[size];
    for (int i = 0; i < _cap; i++) {
      *p = _mpstack[i];
      p++;
    }
    for (int i = 0; i < _cap; i++) {
      p--;
    }
    delete[] _mpstack;
    _mpstack = p;
    _cap = size;
    // delete[] p;
  }

 private:
  T* _mpstack;
  int _top;
  int _cap;
};
}  // namespace SEQSTACK