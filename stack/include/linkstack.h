#pragma once
#include <string>

namespace LINKSTACK {
template <typename T>
struct node {
  node(const T& val = 0) {
    _date = val;
    _next = nullptr;
  }
  T _date;
  node<T>* _next;
};

template <typename T>
class linkstack {
 public:
  linkstack(const int& num = 0) {
    _num = num;
    _head = new node<T>();
  }
  ~linkstack() {
    node<T>* p = _head;
    while (p != nullptr) {
      _head = _head->_next;
      delete p;
      p = _head;
    }
  }
  // push
  void push(const T& val) {
    node<T>* new_node = new node<T>(val);
    new_node->_next = _head->_next;
    _head->_next = new_node;
    _num++;
  }
  // pop
  void pop() {
    if (!_head->_next) {
      throw "stack empty";
    }
    node<T>* p = _head->_next;
    _head->_next = p->_next;
    delete p;
    p = nullptr;
    _num--;
  }
  // top
  T top() const {
    if (!_head->_next) {
      throw "stack empty!";
    }
    return _head->_next->_date;
  }
  // empty
  bool empty() const { return (_head->_next == nullptr); }
  // size
  int size() const { return _num; }

 private:
  node<T>* _head;
  int _num;
};
}  // namespace LINKSTACK