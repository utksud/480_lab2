#pragma once

#include "square.h"

class Rectangle : public Square {
public:
    Rectangle(double x, double y, double side_a, double side_b,
              const char* name);

    double getSideB() const;
    void setSideB(double side_b);

    double area() const override;
    double perimeter() const override;

    void display() const override;

private:
    double side_b;
};
