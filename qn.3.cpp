//program to calculate the area of a square by creating a class square having its data members length and member function getData() that recives data and calculate the area of square by member function area() and display area.

#include <iostream>
using namespace std;

class Square{
private: 
int length;
public: 
void getData(int l){
length = l;
}
int calculateArea(){
return length * length;
}
};

int main(){
Square s;
s.getData(5);
cout << "Area of square is: " << s.calculateArea() << endl;
return 0;
}