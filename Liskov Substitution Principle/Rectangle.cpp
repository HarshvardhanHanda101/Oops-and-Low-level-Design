#include<iostream>
#include "Rectangle.h"

using namespace std;

Rectangle :: Rectangle(double length , double breadth) : length(length), breadth(breadth){}

double Rectangle :: area(){
    cout<<this->length * this->breadth<<endl;
}