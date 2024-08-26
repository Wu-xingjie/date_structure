#pragma once

#include "virtual_linear_list/h"
#include <algorithm>

template<typename T>
class ArrayList : public LinearList<T>
{
    public:
        ArrayList(const int& initialCapacity = 10);
        ArrayList(const ArrayList<T>& CopySource);
        ~ArrayList();

        bool empty();
        int size();
        T& get(int index);
        int indexOF(const T& element);
        void erase(int index);
        void insert(int index, const T& element);
        void output(std::ostream& out);

        void capacity();  //

    protected:
        void checkindex(int index) const;

        T* _Element;
        int _ArrayLength;
        int _ListSize;
};