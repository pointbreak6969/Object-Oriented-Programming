#include <iostream>
using namespace std;

class Interest
{
    int principle, rate = 8, time;

public:
    void getData()
    {
        cout << "Enter the principle amount: ";
        cin >> principle;
        cout << "Enter the time: ";
        cin >> time;
    }
    void calculate()
    {
        int result = (principle * rate * time) / 100;
        cout << "The calculated interest is: " << result << endl;
    }
};

int main()
{
    for (int i = 0; i < 3; i++)
    {
        Interest obj;
        cout << "For customer  " << i+1 << ":" << endl;
        obj.getData();
        obj.calculate();
        cout << "\n";
    }

    return 0;
}