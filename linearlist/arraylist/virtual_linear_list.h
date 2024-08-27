#pragma once

#include <ostream>

namespace LINEARLIST {
template <class T>
class linearlist {
 public:
  linearlist() = default;
  ~linearlist() = default;

  virtual bool empty() = 0;
  virtual int size() = 0;
  virtual T get(const int& index = 0) = 0;
  // virtual int indexOF(const T& element) = 0;
  // virtual void erase(const int& index) = 0;
  // virtual void insert(const int& index, const T& element) = 0;
  // virtual void output(std::ostream& out) const = 0;
};
}  // namespace LINEARLIST