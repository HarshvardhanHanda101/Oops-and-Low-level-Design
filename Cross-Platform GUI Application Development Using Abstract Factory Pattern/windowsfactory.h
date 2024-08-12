#if !defined(WINDOWSFACTORY_H)
#define WINDOWSFACTORY_H
#include "GUIfactory.h"
#include "windowsbutton.h"
#include "windowscheckbox.h"

using namespace std;

class windowsfactory : public GUIfactory{
public:
button *createbutton() override{
     return new windowsbutton();
}
checkbox* createcheckbox(){
    return new windowscheckbox();
}
};
#endif