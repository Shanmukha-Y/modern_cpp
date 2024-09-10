#include <iostream>
#include <string>

using namespace std;

void Print(const string &str)
{
    cout << "lvalue: " << str << endl;
}

void Print(string &&str)
{
    cout << "rvalue: " << str << endl;
}

int main()
{
    string a = "hello";
    Print(a);

    Print("whats up?");

    Print(std::move(a));

    return 0;
}