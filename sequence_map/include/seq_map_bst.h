#pragma once

namespace BST {
// sequence map
template <typename KEYT, typename VALUET>
class SEMAP {
 public:
  SEMAP() { _root = nullptr; }
  ~SEMAP(){delete _root};
  // insert
  void insert(const NODE<KEYT, VALUET>& p);

 private:
  NODE<KEYT, VALUET>* _root;
};

}  // namespace BST