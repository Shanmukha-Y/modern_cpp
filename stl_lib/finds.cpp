#include <iostream>
#include <vector>

int main()
{
    const int n = 3;
    std::vector<int> v{9, 1, 4, 8, 3, 8};
    auto result1 = std::find(v.begin(), v.end(), n);

    if (result1 != std::end(v))
    {
        std::cout << "True" << std::endl;
    }
    else
    {
        std::cout << "False" << std::endl;
    }
    return 0;
}