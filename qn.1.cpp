// program to calculate the area of a rectangle

#include <iostream>
using namespace std;

class Rectangle{
private: 
int length;
int breadth;
public:
void getData(int l, int b){
length = l;
breadth = b;
}
int area(){
return length * breadth;
}
};

int main(){
Rectangle r;
r.getData(10, 5);
cout << "Area of rectangle is: " << r.area() << endl;
return 0;
}
