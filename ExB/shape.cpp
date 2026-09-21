#include "shape.h"

#include <cstring>
#include <iostream>

namespace {
char* copyName(const char* name)
{
    const char* source = (name != nullptr) ? name : "";
    char* copy = new char[std::strlen(source) + 1];
    std::strcpy(copy, source);
    return copy;
}
}

Shape::Shape(double x, double y, const char* name)
    : origin(x, y), shapeName(copyName(name))
{
}

Shape::Shape(const Shape& other)
    : origin(other.origin), shapeName(copyName(other.shapeName))
{
}

Shape& Shape::operator=(const Shape& other)
{
    if (this != &other) {
        char* new_name = copyName(other.shapeName);
        origin = other.origin;
        delete[] shapeName;
        shapeName = new_name;
    }

    return *this;
}

Shape::~Shape()
{
    delete[] shapeName;
}

const Point& Shape::getOrigin() const
{
    return origin;
}

const char* Shape::getName() const
{
    return shapeName;
}

void Shape::display() const
{
    std::cout << "Shape Name: " << shapeName << '\n';
    origin.display();
}

double Shape::distance(const Shape& other) const
{
    return origin.distance(other.origin);
}

double Shape::distance(const Shape& first, const Shape& second)
{
    return Point::distance(first.origin, second.origin);
}

void Shape::move(double dx, double dy)
{
    origin.setx(origin.getx() + dx);
    origin.sety(origin.gety() + dy);
}
