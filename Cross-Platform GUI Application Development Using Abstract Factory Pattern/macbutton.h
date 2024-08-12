#if !defined(MACBUTTON_H)
#define MACBUTTON_H
#include "button.h"
#include<iostream>
using namespace std;
class macbutton : public button{
    public:
    macbutton(){}
 void paint() override{
    cout<<"Rendering a button in MAC style"<<endl;
 }
};

#endif