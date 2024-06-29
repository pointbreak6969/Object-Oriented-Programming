// Can we have more than one destructor in a class? WAP to add two complex numbers using the
//  concept of constructor.

// Answer: No we can't have more than one destructor in a class because the destructor is called when the object goes out of scope. If we have more than one destructor, the compiler will get confused about which destructor to call.

#include <iostream>
using namespace std;

class Compex
{
    int real, img;

public:
    Compex(int r, int i)
    {
        real = r;
        img = i;
    }
   friend void addComplex (Compex c1, Compex c2);
};

void addComplex(Compex c1, Compex c2)
{
    cout << "Sum: " << c1.real + c2.real << " + " << c1.img + c2.img << "i" << endl;
}

int main(){
    Compex c1(2, 3);
    Compex c2(4, 5);
    addComplex(c1, c2);
    return 0;
}