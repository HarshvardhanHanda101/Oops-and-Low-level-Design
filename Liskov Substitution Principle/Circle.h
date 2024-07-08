#if !defined(CIRCLE_H)
#define CIRCLE_H
#include<iostream>
#include "Shape.h"

class Circle : public Shape{
    private : 
    double radius;
    public : 
    Circle(double radius);
    double area() override;
};

#endif