#include <iostream>
// #include <string>

struct MyVector
{

    float x, y;

    MyVector(float x, float y) : x(x), y(y) {}

    MyVector operator+(const MyVector &other) const
    {
        return MyVector(x + other.x, y + other.y);
    }

    MyVector operator*(const MyVector &other) const
    {
        return MyVector(x * other.x, y * other.y);
    }
};

std::ostream &operator<<(std::ostream &stream, const MyVector &other)
{
    stream << other.x << ", " << other.y;
    return stream;
}

int main()
{

    MyVector v1(0.1f, 5.5f);
    MyVector v2(2.5f, 1.3f);

    MyVector result = v1 + v2;

    std::cout << result << std::endl;

    return 0;
}
