#if !defined(SMSNOTIFICATION_H)
#define SMSNOTIFICATION_H
#include "Notification.h"
#include<iostream>
using namespace std;

class SMSNotification : public Notification{
    public:
    void message() override{
        cout<<"A SMS notification is recieved !"<<endl;
    }
};
#endif