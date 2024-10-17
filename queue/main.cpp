#include <iostream>
#include <string>

#include "QUEUE.h"
#include "link_queue.h"

int main() {
  // QUE::queue<std::string> test;
  // test.push("wxj");
  // test.push("cx");
  // test.push("bst");
  // test.push("sjf");
  
  // std::cout << test.size() << std::endl;
  // std::cout << test.front() << std::endl;
  // std::cout << test.rear() << std::endl;

  // test.pop();
  // test.pop();
  // std::cout << test.size() << std::endl;
  // std::cout << test.front() << std::endl;
  // std::cout << test.rear() << std::endl;


  std::cout << "============linkqueue============" << std::endl;
  LINK_QUE::linkque lqtest;
  lqtest.push("wxj");
  lqtest.push("cx");
  lqtest.push("bst");
  lqtest.push("sjf");
  
  std::cout << lqtest.size() << std::endl;
  std::cout << lqtest.front() << std::endl;
  std::cout << lqtest.end() << std::endl;

  lqtest.pop();
  lqtest.pop();
  std::cout << lqtest.size() << std::endl;
  std::cout << lqtest.front() << std::endl;
  std::cout << lqtest.end() << std::endl;



  return 0;
}