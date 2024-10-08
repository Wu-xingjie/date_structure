#include "clink.h"

namespace LIST {

Clink::~Clink() {
  NODE* p = _head->next;
  while (p != nullptr) {
    _head->next = p->next;
    delete p;
    p = _head->next;
  }
  delete p;
  p = nullptr;
  delete _head;
  _head = nullptr;
}

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

void Clink::RemoveElem(int val) {
  NODE* befor_p = _head;
  NODE* p = _head->next;
  while (p != nullptr) {
    if (p->date == val) {
      befor_p->next = p->next;
      delete p;
      //   delete befor_p;
      return;
    } else {
      befor_p = p;
      p = p->next;
    }
  }
}

void Clink::RemoveALL(int val) {
  NODE* befor_p = _head;
  NODE* p = _head->next;
  while (p != nullptr) {
    if (p->date == val) {
      befor_p->next = p->next;
      delete p;
      p = befor_p->next;
    } else {
      befor_p = p;
      p = p->next;
    }
  }
}
}  // namespace LIST