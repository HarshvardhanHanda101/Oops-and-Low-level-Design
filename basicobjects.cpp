#include <iostream>
#include <string>

using namespace std;

class student {
public:
    // attributes 
    int id;
    int age;
    string name;
    int nos;
private:
    int* gpa;
    string gf;
    
public :
    // default ctor :
    student() {
        cout << "this is a default constructor" << endl;
        gpa = nullptr; // Initialize gpa to nullptr
    }

    // parameterized constructor
    student(int id, int age, string name, int nos, int gpa , string gf) {
        cout << "This is a parameterized constructor" << endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
        this->gpa = new int(gpa);
        this->gf = gf;
    }

    // copy constructor
    student(const student& temp) {
        cout << "Copy constructor called" << endl;
        this->id = temp.id;
        this->age = temp.age;
        this->name = temp.name;
        this->nos = temp.nos;
        if (temp.gpa != nullptr) {
            this->gpa = new int(*(temp.gpa));
        } else {
            this->gpa = nullptr;
        }
    }

    // behaviour / methods / functions
    void study() {
        cout << this->name << " studying" << endl;
    }

    void sleep() {
        cout << this->name << " sleeping" << endl;
    }

    void bunk() {
        cout << this->name << " bunking" << endl;
    }


    // dtor
    ~student() {
        cout << "This is a default dtor" << endl;
        delete gpa;
    }
private :
 void gfchatting(){
     cout<<this->name<<" chatting with gf"<<endl;
 }
};

int main() {
    student A(223, 13, "Harshvardhan", 77, 10);

    cout << A.name << " " << A.age << endl;

    student C = A;

    cout << C.name << " " << C.age << endl;

    // Dynamic allocation or student pointer
    student* B = new student(1, 14, "Ronaldo", 33, 9);
    cout << B->age << endl;
    cout << B->name << endl;

    delete B;

    return 0;
}
