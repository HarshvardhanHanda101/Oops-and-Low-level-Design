#if !defined(MACFACTORY_H)
#define MACFACTORY_H

#include "GUIfactory.h"
#include "maccheckbox.h"
#include "macbutton.h"

class MACfactory : public GUIfactory{
public :
  button *createbutton() override{
    return new macbutton();
  }

  checkbox *createcheckbox() override{
    return new maccheckbox();
  }
};
#endif