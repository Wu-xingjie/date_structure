#include "seq_map_bst.h"

namespace BST {
template <typename KEYT, typename VALUET>
void SEMAP<KEYT, VALUET>::insert(const NODE<KEYT, VALUET>& p) {
  if (_root == nullptr) {
    _root = new NODE<KEYT, VALUET>();
    return;
  }

  NODE<KEYT, VALUET>* cur = _root;
  while (cur != nullptr) {
    if (cur->_count > p->_count) {
      
    }
  }
}
}  // namespace SEQ_MAP