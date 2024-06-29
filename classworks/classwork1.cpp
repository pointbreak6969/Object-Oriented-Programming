// wap to create a class figure with dim1 and dim2 as data members and constructor to initialize its data. create a derived class called triangle and define a member function area() in it to calcualte the area of traingle. create another derived class rectangle and define a member function area() to calculate the area of rectangle. implement this program using the concept of runtime polymorphism.
#include<iostream>
using namespace std;

class Figure{
protected:
    int dim1, dim2;
public:
    Figure(int d1, int d2){
        dim1 = d1;
        dim2 = d2;
    }
    virtual void area() = 0;    // pure virtual function
};

class Triangle : public Figure{
public:
    Triangle(int d1, int d2) : Figure(d1, d2) {}
    void area(){
        cout << "Area of triangle: " << 0.5 * dim1 * dim2 << endl;
    }
};

class Rectangle : public Figure{
public:
    Rectangle(int d1, int d2) : Figure(d1, d2) {}
    void area(){
        cout << "Area of rectangle: " << dim1 * dim2 << endl;
    }
};

int main(){
    Figure* f;
    Triangle t(10, 20);
    Rectangle r(10, 20);

    f = &t;
    f->area();

    f = &r;
    f->area();

    return 0;
}
// Output:
// Area of triangle: 100
// Area of rectangle: 200