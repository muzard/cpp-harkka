#include <iostream>
#include <string>

class Ball
{
private:
    [[maybe_unused]] double m_radius {10.0};
    std::string m_color {"Black"};
public:
    Ball(std::string_view name = "Black", double radius=10.0)
        : m_radius {radius}
        , m_color {name}
    {
        std::cout << "Ball(" << name << ", " << radius << ")";
    }

    Ball(double radius)
    : Ball("Black", radius)
    {}
};
int main()
{
    Ball def{};
    Ball blue{ "blue" };
    Ball twenty{ 20.0 };
    Ball blueTwenty{ "blue", 20.0 };

    return 0;
}
