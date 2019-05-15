#include "circle.hpp"
#include <math.h>
#include <iostream>

//Konstruktoren
Circle::Circle()
{
    center_ = {0, 0};
    radius_ = 1;
}

Circle::Circle(Vec2 const& center, int radius, Color const& color, std::string const& name)
{
    color_ = color;
    center_ = center;
    radius_ = radius;
    name_ = name;
}

float Circle::circumference()
{
    float umfang;
    umfang = 2 * M_PI * radius_;
    return umfang;
}

//Gibt Daten über den Kreis auf der Kommandozeile aus
void Circle::print()
{
    std::cout <<  "name\t" << name_ << std::endl;
    std::cout <<  "Positon\t" << center_.x << "\t" << center_.y << std::endl;
    std::cout <<  "Radius\t" << radius_ << std::endl;
    std::cout <<  "Farbe\t" << color_.r << "\t" <<  color_.g << "\t" <<  color_.b << std::endl;
}

std::string Circle::getName()
{
    return name_;
}

//Überlädt den << Operator um Kreise ausgeben zu können
std::ostream& operator<< (std::ostream& os, Circle const& circle)
{
    //temporäres Objekt, um die Übertragung als const& zu ermöglichen
    Circle temp = circle;
    temp.print();
}