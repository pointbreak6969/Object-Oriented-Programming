//Write a program to implement pure polymorphism.

#include <iostream>
using namespace std;

class Shape {
public:

    virtual void display() = 0;
};

class Circle : public Shape {
public:

    void display() {
        cout << "Circle" << endl;
    }
};

int main() {
    Circle c;
    c.display();
    return 0;
}