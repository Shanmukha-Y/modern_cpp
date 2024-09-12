#include <iostream>
#include <array>

void mems()
{
    const int stackSize = 5;
    const int heapSize = 10;

    std::array<int, stackSize> stArr = {1, 2, 3, 4, 5};

    int *heapArr = new int[heapSize]{10, 11, 20, 23, 45, 6, 927, 9, 3, 52};

    for (int i = 0; i < stackSize; ++i)
    {
        std::cout << stArr[i] << " ";
    }

    std::cout << std::endl;

    for (int i = 0; i < heapSize; ++i)
    {
        std::cout << heapArr[i] << " ";
    }

    std::cout << std::endl;

    delete[] heapArr;
}

int main()
{
    mems();
    return 0;
}