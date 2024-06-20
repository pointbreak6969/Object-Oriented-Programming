#include <iostream>
using namespace std;

class Class2;
class Class1{
int num1;
public: 
    void setValue(){
        cout << "Enter first number: ";
        cin >> num1;
    }
    friend int max(Class1, Class2);
};
class Class2{
    int num2;
    public: 
    void setValue(){
        cout << "Enter second number";
        cin >> num2;
    }
    friend int max(Class1, Class2);
};

int max (Class1 obj1, Class2 obj2){
    if (obj1.num1 > obj2.num2){
        return obj1.num1;
    }
    else {
        return obj2.num2;
    }
};
int main(){
    Class1 obj1;
    Class2 obj2;
    obj1.setValue();
    obj2.setValue();
    int result = max(obj1, obj2);
    cout << "The greatest is " << result;
    return 0;
}