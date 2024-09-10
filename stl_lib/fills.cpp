#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v{0, 1, 2, 3, 4};
    std::fill(v.begin(), v.end(), -1);
    for (const auto &elem : v)
    {
        std::cout << elem << " " << std::endl;
    }
    return 0;
}