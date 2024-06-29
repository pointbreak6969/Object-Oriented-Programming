//wap to create class "frist" with method calculate() to display the sum of two integers and class "second" with method calculate() to display the product of two integers. Create an object of each class and call the method calculate() for each object.

#include <iostream>
using namespace std;

class First{
public:
    void calculate(int a, int b){
        cout << "Sum of " << a << " and " << b << " is " << a + b << endl;
    }
};
class Second: public First{
    public:
    void calculate(int a, int b){
        cout << "Product of " << a << " and " << b << " is " << a * b << endl;
    }
};

int main(){
    Second se;
    se.calculate(10,5);
    se.First :: calculate(10,5);
    return 0;
}