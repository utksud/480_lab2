#include "point.h"

#include <cmath>
#include <iomanip>
#include <iostream>

int Point::next_id = 1001;
int Point::count = 0;

Point::Point(double x, double y)
    : x_cor(x), y_cor(y), id(next_id++)
{
    ++count;
}

Point::Point(const Point& other)
    : x_cor(other.x_cor), y_cor(other.y_cor), id(next_id++)
{
    ++count;
}

Point& Point::operator=(const Point& other)
{
    if (this != &other) {
        x_cor = other.x_cor;
        y_cor = other.y_cor;
    }

    return *this;
}

Point::~Point()
{
    --count;
}

double Point::getx() const
{
    return x_cor;
}

double Point::gety() const
{
    return y_cor;
}

int Point::getId() const
{
    return id;
}

void Point::setx(double new_x)
{
    x_cor = new_x;
}

void Point::sety(double new_y)
{
    y_cor = new_y;
}

double Point::getx_cor() const
{
    return getx();
}

double Point::gety_cor() const
{
    return gety();
}

int Point::get_id() const
{
    return getId();
}

void Point::setx_cor(double new_x)
{
    setx(new_x);
}

void Point::sety_cor(double new_y)
{
    sety(new_y);
}

void Point::display() const
{
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "X-coordinate: " << x_cor << '\n';
    std::cout << "Y-coordinate: " << y_cor << '\n';
}

int Point::counter()
{
    return count;
}

double Point::distance(const Point& other) const
{
    const double x_dist = x_cor - other.x_cor;
    const double y_dist = y_cor - other.y_cor;

    return std::sqrt(x_dist * x_dist + y_dist * y_dist);
}

double Point::distance(const Point& first, const Point& second)
{
    return first.distance(second);
}
