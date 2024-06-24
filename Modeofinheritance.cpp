/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <string>
#include<bits10_1.h>


using namespace std;

class vehicle {
protected:
    string name;
    string model;
    int nooftyres;

public:
    vehicle(string name, string model, int nooftyres)
        : name(name), model(model), nooftyres(nooftyres) {
        cout << "I'm inside vehicle ctor" << endl;
    }

    void start_engine() {
        cout << "Engine is starting " << name << " " << model << endl;
    }

    void stop_engine() {
        cout << "The engine will stop now." << endl;
    }

    ~vehicle() {
        cout << "I'm inside vehicle dtor" << endl;
    }
};

class car : public vehicle {
protected:
    int noofdoors;
    string transmissiontype;

public:
    car(string name, string model, int nooftyres, int noofdoors, string transmissiontype)
        : vehicle(name, model, nooftyres), noofdoors(noofdoors), transmissiontype(transmissiontype) {
        cout << "I'm inside car ctor" << endl;
    }

    void startAC() {
        cout << "AC has started of " << name << endl;
    }

    ~car() {
        cout << "I'm inside car dtor" << endl;
    }
};

class motorcycle : public vehicle {
protected:
    string handlebarstyle;
    int millage;

public:
    motorcycle(string name, string model, int nooftyres, string handlebarstyle, int millage)
        : vehicle(name, model, nooftyres), handlebarstyle(handlebarstyle), millage(millage) {
        cout << "I'm inside motorcycle ctor" << endl;
    }

    void wheelie() {
        cout << "Wheelie kar rhi hai " << name << endl;
    }

    ~motorcycle() {
        cout << "I'm inside motorcycle dtor" << endl;
    }
};

int main() {
    car a("Maruti 800", "LXI", 4, 4, "manual");
    a.start_engine();
    a.startAC();
    a.stop_engine();

    /* motorcycle m("BMW", "VXI", 2, "U", 384);
    m.start_engine();
    m.wheelie();
    m.stop_engine(); */

    return 0;
}
