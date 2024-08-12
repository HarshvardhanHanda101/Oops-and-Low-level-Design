#if !defined(APPLICATION_H)
#define APPLICATION_H

#include "GUIfactory.h"
#include "Button.h"
#include "Checkbox.h"

#include <iostream>

using namespace std;

class application{
    public :
    button *button;
    checkbox *checkbox;
    GUIfactory *factory;
    
    application(GUIfactory *factory) : factory(factory){
        button = factory->createbutton(); // new macbutton() or return new windowsbutton 
        checkbox = factory->createcheckbox();
    }
    
    void paint(){
        button->paint();
        checkbox->paint();
    }

    ~application(){
        delete button;
        delete factory;
        delete checkbox;
    }
};
#endif