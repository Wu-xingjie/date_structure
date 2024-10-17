#pragma once

#include <string>

namespace LINK_QUE {
struct node {
  node(const std::string& val = "null")
      : _date(val), _pre(nullptr), _next(nullptr) {}
  std::string _date;
  node* _pre;
  node* _next;
};

class linkque {
 public:
  linkque() {
    _head = new node();
    _head->_next = _head;
  }
  ~linkque() {}

  void push(const std::string& val);
  void pop();
  std::string front() const { return _head->_next->_date; }
  std::string end() const { return _head->_pre->_date; }
  bool empty() const { return _head->_next == nullptr; }
  int size() const { return _size; }

 private:
  node* _head;
  int _size;
};
}  // namespace LINK_QUE