// What is type casting? WAP to read a height of a person in Feet and Inches, and convert it into meter
// using user-defined to class type conversion method. (hint: 1 meter = 3.28084 feet, 1 feet = 12 inch)

// Answer: Type casting is a way to convert a variable from one data type to another data type. For example, if you want to store a long value into a simple integer then you can type cast long to int. You can convert the values from one type to another explicitly using the cast operator as follows −

#include<iostream>
using namespace std;

class Height{
    float meter;
    int feet, inch;
public:
    Height(){}
    Height(int f, int i){
        feet = f;
        inch = i;
        meter = (feet + inch/12.0) / 3.28084;
    }
    void display(){
        cout << "Height in meter: " << meter << endl;
    }
};

int main(){
    int feet, inch;
    cout << "Enter height in feet and inch: ";
    cin >> feet >> inch;
    Height h(feet, inch);
    h.display();
    return 0;
}