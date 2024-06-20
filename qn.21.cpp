//create a class time, a constructor having hours, minute and seconds as an arguments in use to take two time data from user. The add() funciton, that takes two class objects as arguments, adds them respectively, then display aggregate result.

#include <iostream>
using namespace std;

class Time{
    int hours, minutes, seconds;
public:
    Time(int hours, int minutes, int seconds){
        this->hours = hours;
        this->minutes = minutes;
        this->seconds = seconds;
    }
    Time(){
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    Time operator+(Time t){
        Time temp;
        temp.hours = hours + t.hours;
        temp.minutes = minutes + t.minutes;
        temp.seconds = seconds + t.seconds;
        if (temp.seconds >= 60){
            temp.minutes++;
            temp.seconds -= 60;
        }
        if (temp.minutes >= 60){
            temp.hours++;
            temp.minutes -= 60;
        }

        return temp;
    }
    void display(){
        cout << "Hours: " << hours << endl;
        cout << "Minutes: " << minutes << endl;
        cout << "Seconds: " << seconds << endl;
    }

};

int main(){
    Time t(10, 20, 30), t2(5, 10, 15), t3;
    t3 = t + t2;
    t3.display();
    return 0;
}