#if !defined(SHAPE_H)
#define SHAPE_H
#include<iostream>

class Shape{
    public:
    virtual double area() = 0;
    virtual ~Shape(){}
};

#endif