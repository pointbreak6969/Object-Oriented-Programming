#include <iostream>
using namespace std;

template <class T >
void Largest(T num1, T num2, T num3){
    if ( T num1 > T num2 && T num1 > T num3){
        cout << "The greatest is " << num1;
    }
    else if ( T num2 > T num1 && T num2 > T num3){
        cout << "The greatest is " << num2;
    }
    else {
        cout << "The greatest is " << num3;
    }
}
int main(){
    int num1, num2, num3;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;
    Largest(num1, num2, num3);
    float num4, num5, num6;
    cout << "Enter first number: ";
    cin >> num4;
    cout << "Enter second number: ";
    cin >> num5;
    cout << "Enter third number: ";
    cin >> num6;
    Largest(num4, num5, num6);
    return 0;
}