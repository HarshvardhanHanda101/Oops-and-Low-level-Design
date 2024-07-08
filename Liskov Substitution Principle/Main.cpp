#include<iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

using namespace std;

void printArea(Shape &shape){
    cout<<"Area : "<<shape.area()<<endl;
}

int main(){

    Rectangle rect(10.0,5.0);
    Circle circle(4.4);

    printArea(rect);
    printArea(circle);
    return 0;
}