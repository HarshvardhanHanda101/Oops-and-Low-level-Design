#if !defined(SCORPION_H)
#define SCOPION_H
#include<iostream>
#include "Scorpio.h"
#include "manufacturecar.h"
#include "ScorpioNbodyshell.h"
#include "scorpioNengine.h"
using namespace std;

class ScorpioN : public Scorpio{
  public:
  Iengine *engine;
  Ibodyshell *bodyshell;

  void makescorpio() override{
    bodyshell = new ScorpioNbodyshell();
    engine = new ScorpioNengine();
}


};

#endif