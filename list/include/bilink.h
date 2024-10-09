#pragma once

#include <iostream>

namespace BILINK {
template <typename T>
struct Node {
  Node(int date = 0) : _date(date) {
    _pre = nullptr;
    _next = nullptr;
  }
  T _date;
  Node* _pre;
  Node* _next;
};

template <typename T>
class bilink {
 public:
  bilink() { _head = new Node<T>(); }
  ~bilink() {
    Node<T>* p = _head->_next;
    while (p) {
      _head->_next = p->_next;
      delete p;
      p = _head->_next;
    }
  }

  void insertHead(const T& val) {
    Node<T>* new_node = new Node<T>(val);
    if (_head->_next) {
      _head->_next->_pre = new_node;
    }
    new_node->_next = _head->_next;
    new_node->_pre = _head;
    _head->_next = new_node;
  }

  void insertTail(const T& val) {
    Node<T>* new_node = new Node<T>(val);
    Node<T>* p = _head;
    while (p->_next) {
      p = p->_next;
    }
    new_node->_pre = p;
    new_node->_next = p->_next;
    p->_next = new_node;
  }

  void remove(const T& val) {
    Node<T>* p = _head->_next;
    while (p) {
      if (p->_date == val) {
        p->_pre->_next = p->_next;
        if (p->_next) {
          p->_next->_pre = p->_pre;
        }
        Node<T>* next = p->_next;
        delete p;
        p = next;
      } else {
        p = p->_next;
      }
    }
  }

  bool find(const T& val) {
    Node<T>* p = _head->_next;
    while (p) {
      if (p->_date == val) {
        return true;
      }
      p = p->_next;
    }
    return false;
  }

  void show() {
    Node<T>* p = _head->_next;
    while (p) {
      std::cout << p->_date << " ";
      p = p->_next;
    }
    std::cout << std::endl;
  }

 private:
  Node<T>* _head;
};
}  // namespace BILINK