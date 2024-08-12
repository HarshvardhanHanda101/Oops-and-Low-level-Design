#if !defined(WINDOWSBUTTON_H)
#define WINDOWSBUTTON_H
#include "button.h"
#include<iostream>
using namespace std;
class windowsbutton : public button{
    public:
    windowsbutton(){}
 void paint() override{
    cout<<"Rendering a button in windows style"<<endl;
 }
};

#endif