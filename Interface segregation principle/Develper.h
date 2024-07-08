#if !defined(DEVELOPER_H)
#define DEVELOPER_H
#include "Iworkable.h"

class Developer : public Iworkable{
public:

void work() override{
    cout<<"Developer is coding !"<<endl;
}
};
#endif