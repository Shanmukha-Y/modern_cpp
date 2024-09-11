#include <iostream>
#include <string>

class Employee
{
public:
    virtual void calculateSalary() = 0;
    ~Employee() { std::cout << "EMP obj destroyed" << std::endl; }
};

class HourlyEmp : public Employee
{
private:
    double hourlyRate = 25.0;
    int hours;

public:
    HourlyEmp(int h) : hours(h) {}
    void calculateSalary()
    {
        std::cout << "Hourly Earnings: " << hours * hourlyRate << std::endl;
    }
};

class SalariedEmp : public Employee
{
private:
    int months;
    double salary = 4525;

public:
    SalariedEmp(int m) : months(m) {}
    void calculateSalary()
    {
        std::cout << "Salary Earnings: " << months * salary << std::endl;
    }
};

int main()
{
    Employee *h_emp;
    Employee *s_emp;

    HourlyEmp e1(160);
    SalariedEmp e2(1);

    h_emp = &e1;
    s_emp = &e2;

    h_emp->calculateSalary();
    s_emp->calculateSalary();

    return 0;
}