#include <utility>
#include <iostream>
#include <variant>

using std::cout;

int main()
{
    // int a = 3;
    std::variant<int, double> a = 3;

    int b = 4;

    std::swap(std::get<int>(a), b);

    cout << std::get<0>(a) << b << std::endl;
    return 0;
}