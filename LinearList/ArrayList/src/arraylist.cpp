#include "include/arraylist.h"

// 构造函数
template<class T>
ArrayListl::ArrayList(const int& initialCapacity = 10)
{
    if (initialCapacity < 1)
    {
        throw "initialCapacity must >= 1!";
    }
    
    _ArrayLength = initialCapacity;
    _Element = new T[_ArrayLength];
    _ListSize = 0;
}
// 拷贝构造函数
template<class T>
ArrayList::ArrayList(const ArrayList<T>& CopySource)
{
    _ArrayLength = CopySource._ArrayLength;
    _ListSize = CopySource._ListSize;
    _Element = new T;
    copy(CopySource._Element,
         CopySource._Element + _ListSize,
         _Element)
}

//析构函数
ArrayList::~ArrayList()
{
    delete[] _Element;
}