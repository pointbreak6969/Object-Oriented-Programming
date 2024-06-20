//program to overload binary minus opertor using friend function

#include<iostream>
using namespace std;

class BinaryMinusDemo{
int x;
public:
BinaryMinusDemo(int x){
this->x=x;
}
BinaryMinusDemo(){
x=0;
}
friend BinaryMinusDemo operator-(BinaryMinusDemo &b1,BinaryMinusDemo &b2);
void display(){
cout<<"x="<<x<<endl;
}

};
BinaryMinusDemo operator-(BinaryMinusDemo &b1,BinaryMinusDemo &b2){
BinaryMinusDemo temp;
temp.x=b1.x-b2.x;
return temp;
}
int main(){
BinaryMinusDemo b1(10),b2(5),b3;
b3=b1-b2;
b3.display();
return 0;
}
