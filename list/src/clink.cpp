#include "clink.h"

namespace LIST {
Clink::Clink() { _head = new LIST::NODE(); }

void Clink::InsertTail(int val) {
  NODE* p = _head;
  while (p->next != nullptr) {
    p = p->next;
  }
  NODE* new_node = new NODE(val);
  p->next = new_node;
}

void Clink::InsetHead(int val) {
  NODE* new_node = new NODE(val);
  new_node->next = _head->next;
  _head->next = new_node;
}

void Clink::show() {
  NODE* p = _head->next;
  while (p != nullptr) {
    std::cout << p->date << " ";
    p = p->next;
  }
  std::cout << std::endl;
}
}  // namespace LIST