#include <iostream>

int main()
{

    int a = 4;
    int* a_ptr = &a;

    std::cout << *a_ptr << std::endl;
}