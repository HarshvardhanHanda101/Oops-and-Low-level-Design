#include<iostream>
#include "SMSNotification.h"
#include "EmailNotification.h"
#include "Notification.h"
#include <vector>

using namespace std;

int main(){
vector<Notification *>vec;
EmailNotification mail;
SMSNotification sms;
vec.push_back(&sms);
vec.push_back(&mail);

for(int i = 0; i<vec.size() ;i++){
    vec[i]->message();
}
return  0;
}
