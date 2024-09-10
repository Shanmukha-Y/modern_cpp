#include <iostream>
#include <vector>

using std::cout;
using std::endl;

int main()
{
    std::vector<int> v = {1, 2, 3, 3, 3, 4, 5, 5};

    const int n1 = 5;
    const int n2 = 3;

    int cnts1 = std::count(v.begin(), v.end(), n1);
    int cnts2 = std::count(v.begin(), v.end(), n2);

    cout << cnts1 << cnts2 << endl;

    return 0;
}
