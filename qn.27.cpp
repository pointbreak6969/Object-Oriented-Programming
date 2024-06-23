// A class called ”student" has the following attributes: roll
// number, name , age , and address . Implement the necessary
// functions to allow the user to display for 100 student objects
// from file ’StudentInfo.txt’.

#include <iostream>
#include <fstream>
using namespace std;

class Student{
    int roll;
    string name, address;
    int age;
    public:
    void get_info(){
        cout << "Enter roll, name, age, address: ";
        cin >> roll >> name >> age >> address;
    }
    void set_info(){
        cout << roll << "\t" << name << "\t" << age << "\t" << address << endl;
    }
};

int main(){
    int i, noOfStudents;
    cout << "Enter the number of students" << endl;
    cin >> noOfStudents;
    Student s[noOfStudents];
    fstream file;
    file.open("Student.txt", ios::out);
    if (!file){
        cout << "Error opening file!" <<endl;
        return 1;
    }
    for (i = 0; i < noOfStudents; i++){
        cout << "Enter the details of student" << i+1 <<endl;
        s[i].get_info();
        file.write((char*)&s[i], sizeof(s[i]));
    }
    file.close();
    file.open("Student.txt", ios::in);
    if (!file){
        cout << "Error opening file!" <<endl;
        return 1;
    }
    cout << "Roll \t" << "Name \t" << "Age \t" << "Address" << endl;
    for (i = 0; i < noOfStudents; i++){
        file.read((char*)&s[i], sizeof(s[i]));
        cout << "Student " << i+1 << ": ";
        s[i].set_info();
    }
    file.close();
    return 0;
}