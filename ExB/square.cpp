#include "square.h"

#include <iomanip>
#include <iostream>

Square::Square(double x, double y, double side_a, const char* name)
    : Shape(x, y, name), side_a(side_a)
{
}

double Square::getSideA() const
{
    return side_a;
}

void Square::setSideA(double new_side_a)
{
    side_a = new_side_a;
}

double Square::area() const
{
    return side_a * side_a;
}

double Square::perimeter() const
{
    return 4.0 * side_a;
}

void Square::display() const
{
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Square Name: " << getName() << '\n';
    getOrigin().display();
    std::cout << "Side a: " << side_a << '\n';
    std::cout << "Area: " << area() << '\n';
    std::cout << "Perimeter: " << perimeter() << '\n';
}
