#include <iostream>
#include <string>

class Password
{
private:
    std::string passw;

public:
    void setPass(std::string p)
    {
        passw = p;
    }

    void checkPass(std::string p)
    {
        if (passw == p)
        {
            std::cout << "Password Match, Welcome!" << std::endl;
        }
        else
        {
            std::cout << "Incorrect Password!" << std::endl;
        }
    }
};

int main()
{
    std::string s;
    std::cout << "Hello! Set your password" << std::endl;
    std::cin >> s;

    Password p;
    p.setPass(s);

    std::string c;
    std::cout << "Re-enter your password" << std::endl;
    std::cin >> c;

    p.checkPass(c);

    return 0;
}