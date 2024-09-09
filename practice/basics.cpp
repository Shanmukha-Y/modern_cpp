#include <iostream>

int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

int main()
{
    int output;
    double result;

    for (int i = 0; i < 5; i++)
    {
        output = fib(i);
        std::cout << "Fib number " << i << " = " << output << std::endl;
        if (output % 2 == 0)
        {
            std::cout << "Even" << std::endl;
        }
        else
        {
            std::cout << "Odd" << std::endl;
        }
    }

    result = add(2.5, 3.568);
    std::cout << result << std::endl;

    return 0;
}