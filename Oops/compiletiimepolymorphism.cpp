#include <iostream>

using namespace std;


//function overloading
class Add{
    public :
    int sum(int x , int y){
        return x + y;
    }
    
    int sum(int x , int y , int z){
        return x + y + z;
    }
    
    double sum(double x , double y , double z){
        return x + y + z;
    }
};

// operator overloading
class Complex {
public:
    int real;
    int imaginary;

    Complex() : real(-1), imaginary(-1) {}

    Complex(int r, int i) : real(r), imaginary(i) {}

    void print() const {
        cout << real << " + " << imaginary << "i" << endl;
    }

    Complex operator+(const Complex &b) const {
        return Complex(real + b.real, imaginary + b.imaginary);
    }
    
     Complex operator-(const Complex &b) const {
        return Complex(real - b.real, imaginary - b.imaginary);
    }
};

int main() {
    Complex a(1, 2), b(2, 3);
    a.print();
    b.print();
    Complex c = a + b;
    c.print();
    
    Add add;
    cout<<add.sum(3,4)<<endl;
    
    cout<<add.sum(1,2,4)<<endl;
    
    cout<<add.sum(1.2,8.6,5.5)<<endl;

    return 0;
}