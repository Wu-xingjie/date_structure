#include "clink.h"

int main() {
  LIST::Clink test;
  test.InsertTail(12);
  test.InsertTail(43);
  test.show();

  test.InsetHead(3);
  test.InsetHead(234);
  test.show();

  test.InsertTail(3);
  test.InsetHead(234);

  test.RemoveElem(43);
  test.show();

  test.RemoveALL(3);
  test.RemoveALL(234);
  test.show();

  return 0;
}