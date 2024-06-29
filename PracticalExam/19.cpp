// Write base class that ask the user to enter Time (hour-minute and second) and derived class that
// adds the Time of its own with the base. Finally make third class that is friend of derived and
// calculate the difference of base class time and its own time.

#include <iostream>
using namespace std;

class Time
{
protected:
    int hours, minutes, seconds;

public:
    void getTime()
    {
        cout << "Enter hours, minutes and seconds" << endl;
        cin >> hours >> minutes >> seconds;
    }
    friend class differenceTime;
};

class addTime : public Time
{
public:
    void getTime()
    {
        cout << "Enter additional hours, minutes and seconds" << endl;
        cin >> hours >> minutes >> seconds;
    }
    friend class differenceTime;
};

class differenceTime {
    int differenceHour, differenceMinutes, differenceSeconds;
public:
    void calculateDifference(Time& base, addTime& added)
    {
        differenceHour = added.hours - base.hours;
        differenceMinutes = added.minutes - base.minutes;
        differenceSeconds = added.seconds - base.seconds;
        
        if (differenceSeconds < 0) {
            differenceSeconds += 60;
            differenceMinutes--;
        }
        if (differenceMinutes < 0) {
            differenceMinutes += 60;
            differenceHour--;
        }
    }

    void display()
    {
        cout << "The difference is " << differenceHour << " hours, " 
             << differenceMinutes << " minutes, and " 
             << differenceSeconds << " seconds." << endl;
    }
};

int main()
{
    Time baseTime;
    addTime addedTime;
    differenceTime diffTime;

    baseTime.getTime();
    addedTime.getTime();

    diffTime.calculateDifference(baseTime, addedTime);
    diffTime.display();

    return 0;
}