/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>

using namespace std;

class shape{
    public :
  /*virtual ->to be used when using shapedrawing function */ virtual void draw(){
        cout<<"Generic drawing"<<endl;
    }

};

class circle : public shape{
    public :
     void draw(){
        cout<<"Circle drawing"<<endl;
    }
    
};

class rectangle : public shape{
    public:
     void draw(){
        cout<<"Rectangle drawing"<<endl;
    }
};

class triangle : public shape{
    public:
     void draw(){
        cout<<"Triangle drawing"<<endl;
    }
};

void shapedrawing(shape *s){
    s->draw(); //draw is polymorphic
}


int main()
{
   /* circle c;
    rectangle r;
    triangle t;
    shapedrawing(&c);
    shapedrawing(&r);
    shapedrawing(&t);
    */
    
    shape *s = new shape();
    s->draw();
    
    //UPCASTING
    shape *s1 = new circle();
    s1->draw();
    
    circle *c1 = new circle();
    c1->draw();
    
    //downcasting
  shape *s2 = new shape();
  circle *c2 = (circle *)s2;
  c2->draw();
    

    return 0;
}