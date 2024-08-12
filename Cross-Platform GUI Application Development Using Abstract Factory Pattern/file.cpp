#include "application.h"
#include "windowsfactory.h"
#include "MACfactory.h"
#include<iostream>
using namespace std;

int main(){
    GUIfactory* windowfactory = new windowsfactory();
    application *windowapp = new application(windowfactory);
    cout<<"windows GUI:"<<endl;
    windowapp->paint();


    GUIfactory* macfactory = new MACfactory();
    application *macapp = new application(macfactory);

    cout<<"MAC GUI:"<<endl;
    macapp->paint();

    return 0;
}
