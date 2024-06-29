//WAP to overload multiplication operator (*) showing the multiplication of two objects.

#include <iostream>
using namespace std;

class Multiply {
    int num;
public:
    Multiply() {
        num = 0;
    }
    Multiply(int a) {
        num = a;
    }
    Multiply operator * (Multiply obj) {
        Multiply temp;
        temp.num = num * obj.num;
        return temp;
    }
    void display() {
        cout << "Product: " << num << endl;
    }
};
int main() {
    Multiply m1(10), m2(20), m3;
    m3 = m1 * m2;
    m3.display();
    return 0;
}