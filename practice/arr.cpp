#include <iostream>
#include <array>

using std::cout;
using std::endl;

int main()
{
    std::array<double, 3> data{2.4, 4.72, 9.5};
    for (const auto &elem : data)
    {
        cout << elem << endl;
    }

    cout << std::boolalpha;
    cout << "Is empty: " << data.empty() << endl;
    cout << "Front: " << data.front() << endl;
    cout << "Back: " << data.back() << endl;
    cout << "Size: " << data.size() << endl;
    return 0;
}