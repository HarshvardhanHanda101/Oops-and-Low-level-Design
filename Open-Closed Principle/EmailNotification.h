#if !defined(EMAILNOTIFICATION_H)
#define EMAILNOTIFICATION_H
#include "Notification.h"
#include<iostream>
using namespace std;

class EmailNotification : public Notification{
    public:
    void message() override{
        cout<<"An email notification is recieved !"<<endl;
    }
};
#endif