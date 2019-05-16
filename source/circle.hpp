#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "vec2.hpp"
#include "color.hpp"
#include <string>
#include <ostream>

class Circle
{
public:
    Circle();
    Circle(Vec2 const& center, int radius_, Color const& color, std::string const& name);
    float circumference();
    void print();
    std::string getName();
    int getRadius();

private:
    Color color_;
    Color highlightColor_ = {0.3, 0.4, 0.1};
    Vec2 center_;
    int radius_;
    std::string name_;
};

std::ostream& operator<< (std::ostream& os, Circle const& circle); 

bool operator<(Circle const& circle1, Circle const& circle2);
bool operator>(Circle const& circle1, Circle const& circle2);
bool operator==(Circle const& circle1, Circle const& circle2);

#endif