//wap to add two complex numbers using the concept of constructor
#include <iostream>
using namespace std;

class addComplex{
    private:
    int firstNumber, secondNumber;
    public:
    addComplex(int num1, int num2){
        this->firstNumber = num1;
        this->secondNumber = num2;
    };
    friend void calculate(addComplex, addComplex);
};
void calculate(addComplex c1, addComplex c2){
    int firstResult , secondResult;
    firstResult = c1.firstNumber + c2.firstNumber;
    secondResult = c1.secondNumber + c2.secondNumber;
    cout<<firstResult << "+" << secondResult << "i"<<endl;
};

int main(){
    addComplex obj1(2,3), obj2(4,5);
calculate(obj1, obj2);
}