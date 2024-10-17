#include "link_queue.h"

namespace LINK_QUE {
void linkque::push(const std::string& val) {
  node* new_node = new node(val);
  node* p = _head;
  while (p->_next != _head) {
    p = p->_next;
  }
  p->_next = new_node;
  new_node->_pre = p;
  new_node->_next = _head;
  _head->_pre = new_node;
  _size++;
}

void linkque::pop() {
  if (this->empty()) {
    return;
  } else if (this->_head->_next->_next == _head) {
    node* p = _head->_next;
    _head->_next = nullptr;
    _head->_pre = nullptr;
    delete p;
    _size--;
  } else {
    node* p = _head->_next;
    _head->_next = p->_next;
    p->_next->_pre = _head;
    delete p;
    _size--;
  }
}
}  // namespace LINK_QUE