#if !defined(BUTTONS_H)
#define BUTTON_H
#include<iostream>

class button{
  public:
  virtual void paint() = 0;
  virtual ~button() {}
};
#endif