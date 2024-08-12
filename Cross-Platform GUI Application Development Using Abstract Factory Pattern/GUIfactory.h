#if !defined(GUIFACTORY_H)
#define GUIFACTORY_H
#include "Button.h"
#include "Checkbox.h"
#include <iostream>

using namespace std;

class GUIfactory{
public:
virtual button *createbutton() = 0;
virtual checkbox *createcheckbox() = 0;
virtual ~GUIfactory(){}
};
#endif