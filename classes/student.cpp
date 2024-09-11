#include <iostream>
#include <string>

class Student
{

public:
    static int avg_age;
    int age;
    std::string name;
    double grade;

public:
    Student(int a, std::string n, double g) : age(a), name(n), grade(g)
    {
        std::cout << "Student Created!" << std::endl;
    }
    static void getAge(Student &student)
    {
        std::cout << student.age << std::endl;
    }

    static void getAgeDiff(Student &Student1, Student &Student2)
    {
        std::cout << Student1.age - Student2.age << std::endl;
    }
    ~Student()
    {
        std::cout << "Student Deleted!" << std::endl;
    }
};

int Student::avg_age = 15;

int main()
{

    Student p1(21, "aur", 3.14);

    Student p2(27, "tur", 3.72);

    Student::getAge(p1);
    Student::getAge(p2);

    Student::getAgeDiff(p2, p1);

    return 0;
}