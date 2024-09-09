#include <iostream>
#include <vector>
#include <string>

int main()
{

    std::vector<int> vec;
    std::vector<std::string> words = {"hello", "world", "C++"};
    std::vector<int> num = {1, 2, 3, 4, 5};

    words.emplace_back("sssy");

    std::cout << words.front() << std::endl;
    std::cout << words.back() << std::endl;

    for (const auto &elem : num)
    {
        std::cout << elem << std::endl;
    }

    for (const auto &elem : words)
    {
        std::cout << elem << std::endl;
    }

    for (int i = 0; i < 20; i++)
    {
        vec.emplace_back(i * i);
    }

    for (const auto &elem : vec)
    {
        std::cout << elem << std::endl;
    }

    return 0;
}