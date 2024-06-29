#include <iostream>
using namespace std;
class Adder
{
private:
    int num1;
    int num2;

public:
    Adder(){
        num1 = 0;
        num2 = 0;
    }
    Adder(int a)
    {
        num1 = a;
        num2 =10;
    }

    int add()
    {
        return num1 + num2;
    }
};

int main()
{
    int a, b;
    cout << "Enter a numbers: ";
    cin >> a;

    Adder obj;
    obj = a;
    int sum = obj.add();

    cout << "Sum: " << sum << std::endl;

    return 0;
}