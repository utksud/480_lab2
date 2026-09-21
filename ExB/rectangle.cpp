#include "rectangle.h"

#include <iomanip>
#include <iostream>

Rectangle::Rectangle(double x, double y, double side_a, double side_b,
                     const char* name)
    : Square(x, y, side_a, name), side_b(side_b)
{
}

double Rectangle::getSideB() const
{
    return side_b;
}

void Rectangle::setSideB(double new_side_b)
{
    side_b = new_side_b;
}

double Rectangle::area() const
{
    return getSideA() * side_b;
}

double Rectangle::perimeter() const
{
    return 2.0 * (getSideA() + side_b);
}

void Rectangle::display() const
{
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Rectangle Name: " << getName() << '\n';
    getOrigin().display();
    std::cout << "Side a: " << getSideA() << '\n';
    std::cout << "Side b: " << side_b << '\n';
    std::cout << "Area: " << area() << '\n';
    std::cout << "Perimeter: " << perimeter() << '\n';
}
