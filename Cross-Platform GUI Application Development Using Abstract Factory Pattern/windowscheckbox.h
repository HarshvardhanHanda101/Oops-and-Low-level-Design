#if !defined(WINDOWSCHECKBOX_H)
#define WINDOWSCHECKBOX_H
#include "checkbox.h"
#include<iostream>
using namespace std;
class windowscheckbox : public checkbox{
    public:
    windowscheckbox(){}
 void paint() override{
    cout<<"Rendering a checkbox in windows style"<<endl;
 }
};

#endif