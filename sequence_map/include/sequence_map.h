#pragma once

namespace SEQ_MAP {

// pair
template <typename KEYT, typename VALUET>
struct MYPAIR {
  MYPAIR(const KEYT& key, const VALUET& value) : _key(key), _value(value) {}
  KEYT _key;
  VALUET _value;
};

// node
template <typename KEYT, typename VALUET>
struct NODE {
  NODE() : _parent(nullptr), _left_child(nullptr), _right_child(nullptr) {}
  NODE(const KEYT& k, const VALUET& val)
      : _date(k, val),
        _parent(nullptr),
        _left_child(nullptr),
        _right_child(nullptr) {}
  NODE(const MYPAIR<KEYT, VALUET>& p)
      : _date(p->_key, p->_value),
        _parent(nullptr),
        _left_child(nullptr),
        _right_child(nullptr) {}
  MYPAIR<KEYT, VALUET> _date;
  MYPAIR<KEYT, VALUET>* _parent;
  MYPAIR<KEYT, VALUET>* _left_child;
  MYPAIR<KEYT, VALUET>* _right_child;
};

// sequence map
template <typename KEYT, typename VALUET>
class SEMAP {
 public:
  SEMAP() { _root = nullptr; }
  ~SEMAP(){delete _root};
  // insert
  void insert(const KEYT& key, const VALUET& value);
  void insert(const MYPAIR& p);

 private:
  NODE<KEYT, VALUET>* _root;
};

}  // namespace SEQ_MAP