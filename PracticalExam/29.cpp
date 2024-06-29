// WAP to input x and y coordinate and move 4 units from both x and y direction by overloading
// unary ++ operator in postfix notation.

#include<iostream>
using namespace std;

class Unary{
int x, y;
public:
Unary(int a, int b){
x= a;
y =b;
}
void operator ++(int){
    x = x+4;
    y = y+4;
}
void display(){
    cout << "The value after increament in postfix notation is" << endl;
    cout << x << " " << y;
}
};

int main(){
    Unary obj(5,6);
    obj++;
    obj.display();
    return 0;
}