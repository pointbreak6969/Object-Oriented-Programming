// using a class wap to receive principle, a mount, time and rate keepitn rate 8% as default argument, calculate simple interest for 3 customers

#include <iostream>
using namespace std;

class simpleInterest
{
private:
    int principle, time, rate;

public:
    simpleInterest(int p, int t, int r = 8)
    {
        this->principle = p;
        this->time = t;
        this->rate = r;
    }
    void calculateInterest()
    {
        cout << "Simple Interest: " << (principle * time * rate) / 100 << endl;
    }

};
int main()
{
    simpleInterest customer1(1000, 2); // customer 1 with principle 1000 and time 2
    simpleInterest customer2(2000, 3); // customer 2 with principle 2000 and time 3
    simpleInterest customer3(3000, 4); // customer 3 with principle 3000 and time 4

    customer1.calculateInterest();
    customer2.calculateInterest();
    customer3.calculateInterest();

    return 0;
}
// outut:   
// Simple Interest: 160
// Simple Interest: 480
// Simple Interest: 960
