#include <iostream>
namespace LIST {
struct NODE {
  NODE(int val = 0) : date(val), next(nullptr){};
  int date;
  NODE* next;
};

class Clink {
 public:
  Clink() { _head = new NODE(); }
  ~Clink();

 public:
  void InsertTail(int val);
  void InsetHead(int val);
  void RemoveElem(int val);
  void RemoveALL(int val);
  void show();

 private:
  NODE* _head;
};
}  // namespace LIST