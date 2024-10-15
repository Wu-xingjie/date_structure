#pragma once

namespace QUE {
template <typename T>
class queue {
 public:
  queue(const int& cap = 10) : _num(0), _cap(cap), _front(0), _rear(0) {
    _mparr = new T[_cap];
  }
  ~queue() {
    delete[] _mparr;
    _mparr = nullptr;
  }
  // push
  void push(const T& val) {
    if ((_rear + 1) % _cap == _front) {
      expand(2 * _cap);
    }
    _num++;
    _mparr[_rear] = val;
    _rear = (_rear + 1) % _cap;
  }
  // pop
  void pop() {
    if (_front == _rear) {
      return;
    }
    _num--;
    _front = (_front + 1) % _cap;
  }
  // front
  T front() const {
    if (_front == _rear) {
      throw "queue empty";
    }
    return _mparr[_front];
  }

  // rear
  T rear() const {
    if (_front == _rear) {
      throw "queue empty";
    }
    return _mparr[(_rear - 1 + _cap) % _cap];
  }

  // empty
  bool empty() const { return (_front == _rear);}

  // size
  int size() { return _num; }

 protected:
  void expand(const int& size) {
    T* p = new T[size];
    int i = 0;
    int j = _front;
    for (; j != _rear; i++, j = (j + 1) % _cap) {
      p[i] = _mparr[j];
    }
    delete[] _mparr;
    _mparr = p;
    _cap = size;
    _front = 0;
    _rear = i;
  }

 private:
  T* _mparr;
  int _front;
  int _rear;
  int _cap;
  int _num;
};
}  // namespace QUE