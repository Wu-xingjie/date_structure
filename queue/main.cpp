#include <iostream>
#include <string>

#include "QUEUE.h"

int main() {
  QUE::queue<std::string> test;
  test.push("wxj");
  test.push("cx");
  test.push("bst");
  test.push("sjf");
  
  std::cout << test.size() << std::endl;
  std::cout << test.front() << std::endl;
  std::cout << test.rear() << std::endl;

  test.pop();
  test.pop();
  std::cout << test.size() << std::endl;
  std::cout << test.front() << std::endl;
  std::cout << test.rear() << std::endl;

  return 0;
}