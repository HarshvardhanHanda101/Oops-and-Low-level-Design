#if !defined(MACCHECKBOX_H)
#define MACCHECKBOX_H
#include "checkbox.h"
#include<iostream>
using namespace std;
class maccheckbox : public checkbox{
    public:
    maccheckbox(){}
 void paint() override{
    cout<<"Rendering a checkbox in MAC style"<<endl;
 }
};

#endif