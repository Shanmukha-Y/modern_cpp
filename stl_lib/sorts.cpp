#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <array>
// #include <print>

using std::cout;
using std::endl;

int main()
{
    std::array<int, 6> s = {5, 7, 29, 83, 9, -1};

    cout << "Before Sort" << endl;
    for (const auto &elem : s)
    {
        cout << elem << " ";
    }
    cout << endl;

    cout << "After Sort" << endl;
    std::sort(s.begin(), s.end());

    for (const auto &elem : s)
    {
        cout << elem << " ";
    }
    cout << endl;
}
