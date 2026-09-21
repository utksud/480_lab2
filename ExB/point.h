#pragma once

class Point {
public:
    Point(double x, double y);
    Point(const Point& other);
    Point& operator=(const Point& other);
    ~Point();

    double getx() const;
    double gety() const;
    int getId() const;

    void setx(double new_x);
    void sety(double new_y);

    // Compatibility with the names used in the original draft.
    double getx_cor() const;
    double gety_cor() const;
    int get_id() const;
    void setx_cor(double new_x);
    void sety_cor(double new_y);

    void display() const;

    static int counter();

    double distance(const Point& other) const;
    static double distance(const Point& first, const Point& second);

private:
    double x_cor;
    double y_cor;
    int id;

    static int next_id;
    static int count;
};
