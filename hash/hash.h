#pragma once
#include <list>
#include <vector>
namespace __HASH {
template <typename T>
struct Data {
  Data() : _before(nullptr), _next(nullptr) {}
  Data(const int& key, const T& value) : _before(nullptr), _next(nullptr) {
    _key = key;
    _value = value;
  }
  int _key;
  T _value;
  Data* _before;
  Data* _next;
};

template <typename T>
class hash {
 public:
  hash(const int& size = 10, const int& base = 5) : _size(size), _base(base) {
    hashtable_ = new Data<T>*[_size];
  };
  ~hash() = default;
  // 哈希函数
  int hashfuc(const int& key) { return key % _base; }

  void insert(const int& key, const T& value) {
    Data<T>* data = new Data<T>(key, value);
    int idx = hashfuc(key);
    // 扩容
    if (idx >= _size) {
      Data<T>** temp = new Data<T>*[idx + 1];
      for (int i = 0; i < _size; i++) {
        temp[i] = hashtable_[i];
      }
      delete hashtable_;
      hashtable_ = temp;
      _size = idx + 1;
    }
    // 插入data
    if (hashtable_[idx] == nullptr) {
      hashtable_[idx] = data;
    } else {  // key值发生冲突
      Data<T>* p = hashtable_[idx];
      if (p->_next == nullptr) {
        p->_next = data;
        data->_before = p;
      } else {
        while (p->_next != nullptr) {
          p = p->_next;
        }
        p->_next = data;
        data->_before = p;
      }
    }
  }

  void remove(const int& key) {
    int idx = hashfuc(key);
    if (hashtable_[idx] == nullptr) {
      return;
    } else {
      Data<T>* p = hashtable_[idx];
      if (p->_next == nullptr) {
        delete p;
      }
      while (p->_next != nullptr) {
        if (p->_key == key) {
          if (p->_before == nullptr) {
            hashtable_[idx] = p->_next;
            p->_next->_before = nullptr;
            delete p;
            break;
          } else if (p->_next == nullptr) {
            p->_before->_next == nullptr;
            delete p;
            break;
          } else {
            p->_next->_before = p->_before;
            p->_before->_next = p->_next;
            delete p;
            break;
          }
        }
        p = p->_next;
      }
    }
  }
  T find(const int key) {
    int idx = hashfuc(key);
    if (hashtable_[idx] != nullptr) {
      Data<T>* p = hashtable_[idx];
      if (p->_next == nullptr) {
        return p->_value;
      }
      while (p != nullptr) {
        if (p->_key == key) {
          return p->_value;
        }
        p = p->_next;
      }
    } else {
      throw "not found key" + std::to_string(key);
    }
    return {};
  }

 private:
  Data<T>** hashtable_;
  int _base;
  int _size;
};
}  // namespace __HASH