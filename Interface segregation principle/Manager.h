#if !defined(MANAGER_H)
#define MANAGER_H
#include "Iworkable.h"
#include "Imeetable.h"

class Manager : public Iworkable , public IMeetable{
public:
void work() override{
cout<<"The manager is working"<<endl;
}
void meet() override{
cout<<"The manager is in a meet"<<endl;
}
};

#endif