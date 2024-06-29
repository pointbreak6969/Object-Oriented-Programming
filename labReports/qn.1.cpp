// WAP to calculate the area of a rectangle. Create a class Rectangle having its data members length and breadth
// and member function: getdata() that receives data and calculateArea() that display the area.

#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    void getData(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int calculateArea()
    {
        return length * breadth;
    }
};

int main()
{
    Rectangle r;
    r.getData(10, 5);
    cout << "Area of rectangle is: " << r.calculateArea() << endl;
    return 0;
}
