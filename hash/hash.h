#pragma once
#include <list>
#include <vector>
namespace __HASH {
template <typename T>
struct Data {
  Data() : _forward(nullptr), _back(nullptr) {}
  Data(const int& key, const T& value) : _forward(nullptr), _back(nullptr) {
    _key = key;
    _value = value;
  }
  int _key;
  T _value;
  Data* _forward;
  Data* _back;
};

template <typename T>
class hash {
 public:
  hash(const int& size = 10, const int& base = 5) : _size(size), _base(base) {
    hashtable_ = new Data<T>[_size];
  };
  ~hash() = default;
  // 哈希函数
  int hashfuc(const int& key) { return key % _base; }

  void insert(const int& key, const T& value) {
    Data<T>* data = new Data<T>(key, value);
    int idx = hashfuc(key);
    // 扩容
    if (idx >= _size) {
      Data<T>* temp = new Data<T>[idx + 1];
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
      if (p->_back == nullptr) {
        p->_back = data;
        data->_forward = p;
      }
      while (p->_back != nullptr) {
        p = p->_back;
      }
      p->_back = data;
      data._forward = p;
    }
  }

  void remove(const int& key) {
    int idx = hashfuc(key);
    if (hashtable_[idx] == nullptr) {
      return;
    } else {
      Data<T>* p = hashtable_[idx];
      if (p->_back == nullptr) {
        delete p;
      }
      while (p->_back != nullptr) {
        if (p->_key == key) {
          if (p->_forward == nullptr) {
            hashtable_[idx] = p->_back;
            p->_back->_forward = nullptr;
            delete p;
            break;
          } else if (p->_back == nullptr) {
            p->_forward->_back == nullptr;
            delete p;
            break;
          } else {
            p->_back->_forward = p->_forward;
            p->_forward->_back = p->_back;
            delete p;
            break;
          }
        }
        p = p->_back;
      }
    }
  }
  T find(const int key) {
    int idx = hashfuc(key);
    if (hashtable_[idx] == nullptr) {
      throw "not found key" + key;
    } else {
      Data<T>* p = hashtable_[idx];
      if (p->_back == nullptr) {
        return p->_value;
      }
      while (p->_back != nullptr) {
        if (p->_key = key) {
          return p->_value;
        }
      }
    }
  }

 private:
  Data<T>* hashtable_;
  int _base;
  int _size;
};
}  // namespace __HASH