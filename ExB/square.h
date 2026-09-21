#pragma once

#include "shape.h"

class Square : public Shape {
public:
    Square(double x, double y, double side_a, const char* name);

    double getSideA() const;
    void setSideA(double side_a);

    virtual double area() const;
    virtual double perimeter() const;

    void display() const override;

private:
    double side_a;
};
