#include <iostream>
using namespace std;

template <class T>

class largest
{
    T num1, num2,  num3;

public:
    void greatesst(T num1, T num2, T num3)
    {
        if (num1 > num2 && num1 > num3)
        {
            cout << "The greatest is " << num1;
        }
        else if (num2 > num1 && num2 > num3)
        {
            cout << "The greatest is " << num2;
        }
        else
        {
            cout << "The greatest is " << num3;
        }
    }
};

int main()
{
    largest<int> obj1;
    int num1, num2, num3;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;
    obj1.greatesst(num1, num2, num3);

    largest<float> obj2;
    float num4, num5, num6;
    cout << "Enter first number: ";
    cin >> num4;
    cout << "Enter second number: ";
    cin >> num5;
    cout << "Enter third number: ";
    cin >> num6;
    obj2.greatesst(num4, num5, num6);
    return 0;
}