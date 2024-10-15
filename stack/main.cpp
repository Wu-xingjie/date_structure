#include <iostream>

#include "linkstack.h"
#include "seqstack.h"

int main() {
  std::cout << "=============seqstack===========" << std::endl;
  SEQSTACK::stack<std::string> test(2);
  test.push("wxj");
  test.push("cx");
  test.push("bst");
  test.push("sjf");

  while (test.size() != 0) {
    std::cout << test.top();
    test.pop();
    if (!test.empty()) {
      std::cout << "<-";
    }
  }
  std::cout << std::endl;

  std::cout << "=============linkstack===========" << std::endl;
  LINKSTACK::linkstack<int> test1;
  test1.push(1);
  test1.push(2);
  test1.push(3);
  test1.push(4);

  while (test1.size() != 0) {
    std::cout << test1.top();
    test1.pop();
    if (!test1.empty()) {
      std::cout << "<-";
    }
  }
  std::cout << std::endl;

  return 0;
}