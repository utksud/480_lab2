#include "graphicsWorld.h"

#include "point.h"
#include "rectangle.h"
#include "square.h"

#include <iostream>

void GraphicsWorld::run()
{
    std::cout << "ENSF 480 Lab 2 - Exercise B\n";
    std::cout << "Amitesh Saini - 30244391, Utkarsh Sudhir - 30240320 \n";

    std::cout << "Testing class Point:\n";
    Point m(6, 8);
    Point n(6, 8);
    n.setx(9);
    std::cout << "Expected distance between m and n: 3\n";
    std::cout << "Member-function distance: " << m.distance(n) << '\n';
    std::cout << "Static-function distance: " << Point::distance(m, n)
              << "\n";
    std::cout << "Point objects currently alive: " << Point::counter()
              << "\n\n";

    std::cout << "Testing class Square:\n";
    Square s(5, 7, 12, "SQUARE - S");
    s.display();

    std::cout << "\nTesting class Rectangle:\n";
    Rectangle a(5, 7, 12, 15, "RECTANGLE A");
    a.display();

    Rectangle b(16, 7, 8, 9, "RECTANGLE B");
    std::cout << "\n";
    b.display();

    std::cout << "\nDistance between rectangles A and B: "
              << a.distance(b) << '\n';

    b.move(-2, 3);
    std::cout << "\nRectangle B after moving by (-2, 3):\n";
    b.display();

    Rectangle copied_rectangle = a;
    std::cout << "\nDeep-copied rectangle:\n";
    copied_rectangle.display();
}
