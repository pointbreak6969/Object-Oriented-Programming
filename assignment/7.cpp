#include <iostream>
using namespace std;

class Plus{
    int real, imaginary;
    public:
    Plus(){
        real = 0;
        imaginary = 0;
    }
    Plus(int i, int r){
        real = r;
        imaginary = i;
    }
    Plus operator+(Plus p){
        Plus temp;
        temp.real = real + p.real;
        temp.imaginary = imaginary + p.imaginary;
        return temp;
    }
    void display(){
        cout << "The sum of complex number is " << real << "+ " << imaginary << "i" <<endl;
    }
};
int main(){
    Plus obj1(5,6), obj2(8,9), obj3;
    obj3 = obj1 + obj2;
    obj3.display();
    return 0;
}