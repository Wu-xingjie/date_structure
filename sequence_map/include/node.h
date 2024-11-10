namespace NODE {
static int node_count = 0;

// pair
template <typename KEYT, typename VALUET>
struct MYPAIR {
  MYPAIR(const KEYT& key, const VALUET& value) : _key(key), _value(value) {}
  KEYT _key;
  VALUET _value;
};

// NODE
template <typename KEYT, typename VALUET>
struct NODE {
  NODE()
      : _count(node_count) _parent(nullptr),
        _left_child(nullptr),
        _right_child(nullptr),
        _height(1) {}
  NODE(const KEYT& k, const VALUET& val)
      : _count(node_count),
        _date(k, val),
        _parent(nullptr),
        _left_child(nullptr),
        _right_child(nullptr),
        _height(1) {}
  NODE(const MYPAIR<KEYT, VALUET>& p)
      : _count(node_count),
        _date(p->_key, p->_value),
        _parent(nullptr),
        _left_child(nullptr),
        _right_child(nullptr),
        _height(1) {}

  MYPAIR<KEYT, VALUET> _date;
  int _height;
  int _count;
  MYPAIR<KEYT, VALUET>* _parent;
  MYPAIR<KEYT, VALUET>* _left_child;
  MYPAIR<KEYT, VALUET>* _right_child;
};
}  // namespace NODE