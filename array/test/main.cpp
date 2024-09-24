#include "ARRAY.h"


int main() {
  ARRAY::Array test(13);

  for (int i = 0; i < 11; i++) {
    test.push_back(i);
  }
  std::cout << "push_back: \n";
  test.show();

  std::cout << "pop_back: \n";
  test.pop_back();
  test.pop_back();
  test.show();

  std::cout << "insert: \n";
  test.insert(2, 43);
  test.insert(5, 32);
  test.insert(111, 4);
  test.insert(-213, 543);
  test.show();

  std::cout << "erase: \n";
  test.erase(4);
  test.erase(-12);
  test.show();

  std::cout << "find: \n";
  test.show();
  std::cout << "elem 5 is at " << test.find(5) << std::endl;

  std::cout << "fix: \n";
  test.show();
  test.fix(2, 234);
  test.show();

  return 0;
}