#include <iostream>
#include <string>

#include "hash.h"

int main() {
  try {
    __HASH::hash<std::string> test0;
    std::cout << "----------------insert test--------" << std::endl;
    test0.insert(2, "wxj");
    test0.insert(5, "cx");
    test0.insert(43, "bst");
    test0.insert(65, "sjf");

    std::cout << test0.find(2) << std::endl;
    std::cout << test0.find(5) << std::endl;
    std::cout << test0.find(43) << std::endl;
    std::cout << test0.find(65) << std::endl;

    std::cout << "----------------remove test--------" << std::endl;
    test0.remove(65);
    std::cout << test0.find(2) << std::endl;
    std::cout << test0.find(43) << std::endl;
    std::cout << test0.find(5) << std::endl;
  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
  }

  return 0;
}