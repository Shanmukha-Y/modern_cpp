#include <iostream>

namespace MyNamespace
{
    int a = 5;
    int sq(int n)
    {
        return n * n;
    }
}

using namespace MyNamespace;

int main()
{
    std::cout << sq(5) << std::endl;
}
