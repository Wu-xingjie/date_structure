#include "bilink.h"
#include "clink.h"

int main() {
  //===============clink===================
  std::cout << "===============clink===================" << std::endl;
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

  //===============bilink===================
    std::cout << "===============bilink===================" << std::endl;
  BILINK::bilink<int> bitest;
  bitest.insertTail(1);
  bitest.insertTail(2);
  bitest.insertTail(3);
  bitest.show();

  bitest.insertHead(54);
  bitest.insertHead(32);
  bitest.insertHead(564);
  bitest.show();

  std::cout << "bitest contain 32?  " << bitest.find(32) << std::endl;
  std::cout << "bitest contain 20?  " << bitest.find(20) << std::endl;

  bitest.insertTail(54);
  bitest.show();
  bitest.remove(54);
  bitest.show();

  return 0;
}