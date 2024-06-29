// What is template? Define two classes named ‘polar’ and ‘rectangle’ to represent points in polar and
// rectangle systems. Use conversion routines to convert from one system to another system using
// template.

//Answer: Template is a feature of C++ that allows us to write generic programs. A template is a blueprint or formula for creating a generic class or a function. The library containers like iterators and algorithms are examples of generic programming and have been developed using template concept.

#include<iostream>
#include<math.h>
using namespace std;

class Rectangular   //Destination class
{
    int xr, yr;     //x and y coordinate
public:
    Rectangular(){}   //constructor
    Rectangular(float px, float py)   //constructor
    {
        xr=px;
        yr=py;
    }
    void display()
    {
        cout<<"("<<xr<<","<<yr<<")"<<endl;
    }
};

class Polar   //Source class
{
    float radius, angle;
public:
    Polar(){ }   //constructor
    Polar(float r, float a)
    {
        radius=r;
        angle=a;
    }
    void display()
    {
        cout<<"("<<radius<<","<<angle<<")"<<endl;
    }
    operator Rectangular()   //casting operator function
    {
        float x,y;
        x=radius*cos(angle);
        y=radius*sin(angle);
        return Rectangular(x,y);   //temporary object
    }
};

main()
{
    Rectangular r;
    Polar p(10.0,0.785398);
    r=p;   //equivalent to r=p.operator Rectangular()
    cout<<"Polar coordinate is:"<<endl;
    p.display();
    cout<<"Rectangular coordinate is:"<<endl;
    r.display();
}