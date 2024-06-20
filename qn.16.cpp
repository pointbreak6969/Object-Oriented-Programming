//wap to create class "frist" with method calculate() to display the sum of two integers and class "second" with method calculate() to display the product of two integers. Create an object of each class and call the method calculate() for each object. use virtual function

#include <iostream>
using namespace std;

class First{
public:
    virtual void calculate(int a, int b){
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
        First* ptr;
        First obj1;
        Second obj2;

        ptr = &obj1;
        ptr->calculate(5, 3);

        ptr = &obj2;
        ptr->calculate(5, 3);

        return 0;
    }

