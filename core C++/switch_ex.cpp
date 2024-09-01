#include <iostream>

int main()
{
    enum class RGB
    {
        RED,
        GREEN,
        BLUE
    };

    RGB color = RGB::GREEN;

    switch (color)
    {
    case RGB::RED:
        std::cout << "red" << std::endl;
        break;
    case RGB::GREEN:
        std::cout << "green" << std::endl;
        break;
    case RGB::BLUE:
        std::cout << "blue";
        break;
    }

    return 0;
}