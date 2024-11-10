#pragma once

namespace SEQ_MAP_AVL {
template <typename KEYT, typename VALUET>
class SEQMAP {
 public:
  SEMAP() { _root = nullptr; }
  ~SEMAP(){delete _root};
  // insert
  void insert(const NODE<KEYT, VALUET>& p);

 private:
  void LeftRotate();
  void RightRotate();
  NODE<KEYT, VALUET>* _root;
};
}  // namespace SEQ_MAP_AVL