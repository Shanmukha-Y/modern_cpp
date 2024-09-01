#include <iostream>
using namespace std;

int main()
{

    int num = 27;
    int &ref = num;

    const int &kRef = num;

    ref = 0;

    cout << ref << "    " << num << "   " << kRef << endl;

    num = 32;

    cout << ref << "    " << num << "   " << kRef << endl;

    return 0;
}