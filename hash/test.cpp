#include <iostream>
#include <string>

#include "hash.h"

int main() {
  __HASH::hash<std::string> test0;
  test0.insert(2, "wxj");
  test0.insert(10, "cx");
  test0.insert(43, "bst");
  test0.insert(65, "sjf");

  std::cout << test0.find(2) << std::endl;
  std::cout << test0.find(10) << std::endl;
  std::cout << test0.find(43) << std::endl;
  std::cout << test0.find(65) << std::endl;
  return 0;
}