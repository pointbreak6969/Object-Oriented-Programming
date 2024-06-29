// What are the different types of access specifiers? Using a class WAP to receives principle, amount,
// time and rate. Keeping rate 8% as the default argument, calculate the simple interest for three
// customers.

// The different type of access specifiers are:
// 1. Public: The members of the class declared as public are accessible from any part of the program.
// 2. Private: The members of the class declared as private are accessible only from within the class.
// 3. Protected: The members of the class declared as protected are accessible from the class itself and from the classes derived from that class.

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