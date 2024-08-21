#include <iostream>

template<class T>
T factorial(T num)  //jiecheng recursive
{
    if (num <= 1)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}

template<class T>
T SUM(int id, T array[])
{
    if (id >= 0)
    {
        return SUM(id - 2, array) +array[id];
    }
    else
    {
        return 0;
    }
}



int main()
{
    std::cout << factorial(4.2) << std::endl;

    int array[5] = {21,4,1,23,23};

    std::cout << SUM(3, array) << std::endl;

    return 0;
}