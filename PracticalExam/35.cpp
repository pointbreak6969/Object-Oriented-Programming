// WAP to add two complex numbers using binary operator overloading.

#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex() {
        real = 0;
        imag = 0;
    }
    Complex(int a, int b) {
        real = a;
        imag = b;
    }
    Complex operator + (Complex obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
    void display() {
        cout << "Real: " << real << " Imaginary: " << imag << endl;
    }
};

int main() {
    Complex c1(10, 20), c2(20, 30), c3;
    c3 = c1 + c2;
    c3.display();
    return 0;
}
