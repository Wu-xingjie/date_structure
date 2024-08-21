#pragma once
#include <iostream>

template<typename T>
class LinearList
{
    public:
        LinearList();
        ~LinearList();
        virtual bool empty() = 0; //线性表为空时返回true
        virtual int size() = 0;  //返回线性表元素个数
        virtual T& get(int index) = 0;  //返回线性表中索引为index的元素
        virtual int indexOF(const T& element) = 0;  //返回元素element第一次出现的索引
        virtual void erase(int index) = 0;  //删除索引为index的元素
        virtual void insert(int index, const T& element) = 0;  //在索引index处插入元素element
        virtual void output(std::ostream& out) = 0; //将线性表插入r输出流
};