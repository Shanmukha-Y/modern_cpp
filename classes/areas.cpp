#include <iostream>
#include <string>

class Shape
{
public:
    virtual void calcArea() = 0;
    virtual ~Shape() { std::cout << "destroyed shape" << std::endl; }
};

class Circle : public Shape
{

private:
    int radius;

public:
    Circle(int r) : radius(r) {}
    void calcArea() override
    {
        std::cout << 3.14 * radius * radius << std::endl;
    }
};

class Rectangle : public Shape
{

private:
    double width, length;

public:
    Rectangle(double w, double l) : width(w), length(l) {}
    void calcArea() override
    {
        std::cout << width * length << std::endl;
    }
};

int main()
{
    Circle c1(1);
    Rectangle r1(1.2, 1.2);

    c1.calcArea();
    r1.calcArea();

    Shape* s1;
    s1 = &c1;

    s1->calcArea();

    return 0;
}