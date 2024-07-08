#if !defined(RECTANGLE_H)
#define RECTANGLE_H
#include "Shape.h"

class Rectangle : public Shape{
    private:
    double length;
    double breadth;
    public:
    Rectangle(double length , double breadth);
    double area() override;
};

#endif