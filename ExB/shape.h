#pragma once

#include "point.h"

class Shape {
public:
    Shape(double x, double y, const char* name);
    Shape(const Shape& other);
    Shape& operator=(const Shape& other);
    virtual ~Shape();

    const Point& getOrigin() const;
    const char* getName() const;

    virtual void display() const;

    double distance(const Shape& other) const;
    static double distance(const Shape& first, const Shape& second);

    void move(double dx, double dy);

private:
    Point origin;
    char* shapeName;
};
