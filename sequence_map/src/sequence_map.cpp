#include "sequence_map.h"

namespace SEQ_MAP {
template <typename KEYT, typename VALUET>
void SEMAP<KEYT, VALUET>::insert(const KEYT& key, const VALUET& value) {
  if (_root == nullptr) {
    _root = new NODE();
    return;
  }

  auto cur = _root;
  while (cur != nullptr) {
    if () }
}
}  // namespace SEQ_MAP