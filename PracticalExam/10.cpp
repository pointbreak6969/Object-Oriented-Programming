// Create a class Time, a constructor havine hour, minute and second as an arguments in use to take
// two time data from user. The add() function, that takes two class objects as arguments, adds them
// respectively, then display aggregate result. (Apply 60 second=1 minute and 60 minutes= 1 hour).

#include <iostream>
using namespace std;

class Time
{
    int hour, minute, second;

public:
    Time(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }

    friend void add(Time t1, Time t2);
};
void add(Time t1, Time t2)
{
    int s = t1.second + t2.second;
    int m = t1.minute + t2.minute;
    int h = t1.hour + t2.hour;

    if (s >= 60)
    {
        s -= 60;
        m++;
    }

    if (m >= 60)
    {
        m -= 60;
        h++;
    }

    cout << "Aggregate Time: " << h << " hours, " << m << " minutes, " << s << " seconds" << endl;
}

int main()
{
    Time t1(2, 30, 45);
    Time t2(3, 45, 30);

    add(t1, t2);

    return 0;
}