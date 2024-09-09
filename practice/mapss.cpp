#include <iostream>
#include <map>
#include <unordered_map>
#include <string>

using std::cout;
using std::endl;

int main()
{

    // using grade = std::map<int, std::string>;
    using grade = std::unordered_map<int, std::string>;
    grade grades;

    grades.emplace(1, "D Fail");
    grades.emplace(2, "C Warning");
    grades.emplace(4, "A");
    grades.emplace(3, "B");

    for (const auto &[gp, letter] : grades)
    {
        cout << gp << " : " << letter << endl;
    }

    return 0;
}