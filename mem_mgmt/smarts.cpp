#include <iostream>
#include <string>
#include <memory>

class Entity
{

public:
    Entity()
    {
        std::cout << "Obj Created" << std::endl;
    }
    ~Entity()
    {
        std::cout << "Obj Deleted" << std::endl;
    }
    void hello()
    {
        std::cout << "Hello There!" << std::endl;
    }
};
int main()
{
    std::shared_ptr<Entity> shent = std::make_shared<Entity>();
    {
        // std::unique_ptr<Entity> entity = std::make_unique<Entity>();
        std::shared_ptr<Entity> shent2 = shent;

        // e2 = entity;
        shent2->hello();
    }
    std::cout << "still alive" << std::endl;
    return 0;
}