// WAP to enter the information of N students and then display it using the concept of multilevel inheritance.

#include <iostream>
using namespace std;

class Student
{
protected:
    string name, address;
    int rollNo;

public:
    void getInfo()
    {
        cout << "Enter the name of student" << endl;
        cin >> name;
        cout << "Enter the address of student" << endl;
        cin >> address;
        cout << "Enter the roll no of student" << endl;
        cin >> rollNo;
    }
};
class DisplayInfo : public Student
{
public:
    DisplayInfo()
    {
        getInfo();
    }
    void display()
    {
        cout << "Name:" << name << endl;
        cout << "Address:" << address << endl;
        cout << "Roll No:" << rollNo << endl;
    }
};


int main(){
    int students;
    cout << "Enter the no of students" ;
    cin >> students;
    DisplayInfo obj[students];
    for ( int i = 0; i< students; i++){
        cout << "Enter the details for student" << i + 1 <<endl;
        obj[i].display();
    }
    return 0;
}