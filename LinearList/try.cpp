#include <iostream>

int A(int a, int b)
{
    if (b == 0)
    {
        throw "b != 0";
    }
    return (a / b);
}
int main()
{
    try{
        std::cout << A(802,2) << std::endl;
        std:: cout << A(23,0) << std::endl;
    }catch(const char* e)
    {
        std::cout << "error: " << e << std::endl;
    }catch(int& e)
    {
        std::cout << "error: " << e << std::endl;
    }catch(...)
    {
        std::cout << "error need to be determined" << std::endl;
    }

    return 0;
}