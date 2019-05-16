#include <vector>
#include <algorithm>
#include <string>
#include "circle.hpp"
#include "vec2.hpp"
#include "color.hpp"

int main()
{
    std::vector<Circle> sorted_circles;
    
    Vec2 center;
    Vec2 center2 = {3, 2};
    Color color;
    Color color2 = {0.5, 0.2, 0.1};
    const Circle c_1(center, 5, color, "Herbert");
    const Circle c_2(center2, 10, color, "Thomas");
    const Circle c_3(center, 3.5, color2, "Günter");

    sorted_circles.push_back(c_1);
    sorted_circles.push_back(c_2);
    sorted_circles.push_back(c_3);

    std::sort(sorted_circles.begin(), sorted_circles.end());

    return 0;
}
