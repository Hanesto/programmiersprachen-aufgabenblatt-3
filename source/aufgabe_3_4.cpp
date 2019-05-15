#include "circle.hpp"
#include "vec2.hpp"
#include "color.hpp"
#include <iostream>
#include <set>
#include <string>

int main()
{
    std::string name;
    std::set<Circle> circles;

    Vec2 center;
    Vec2 center2 = {3, 2};
    Color color;
    Color color2 = {0.5, 0.2, 0.1};
    const Circle c_1(center, 5, color, "Herbert");
    const Circle c_2(center2, 10, color, "Thomas");
    const Circle c_3(center, 3.5, color2, "Günter");

    circles.insert(c_1);
    circles.insert(c_2);
    circles.insert(c_3);

    std::cout << "Geben sie einen Namen ein: " << std::endl;
    std::cin >> name;

    std::set<Circle>::iterator itr;
    for (itr = circles.begin(); itr != circles.end(); ++itr)
    {
        Circle temp = *itr;
        std::string name_ = temp.getName();
        if(name_ == name)
        {
            std::cout << "Da haben wir was für sie: " << std::endl;
            std::cout << *itr << std::endl;
            break;
        }
    }
}

bool operator< (const Circle circ1, const Circle circ2)
{
    return true;
}
