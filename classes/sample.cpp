#include <iostream>
#define Log(x) std::cout << x << std::endl;

class AV
{
public:
    int x;
    int y;
    int speed;

    void move(int a, int b)
    {
        x += a;
        y += b;
    }
};

int main()
{
    AV truck;
    truck.x = 2;
    truck.y = 2;

    truck.move(5, 5);

    Log(truck.x);
    Log(truck.y);

    return 0;
}