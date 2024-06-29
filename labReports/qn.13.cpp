//wap to enter the information of N students and then dispaly it using the concept of multiple inheritance.
#include <iostream>
using namespace std;

class PersonalInfo {
protected:
    string name;
    int age;
public:
    void enterPersonalInfo() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
};

class AcademicInfo {
protected:
    string rollNo;
    string course;
public:
    void enterAcademicInfo() {
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter course: ";
        cin >> course;
    }
};

class Student : public PersonalInfo, public AcademicInfo {
public:
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    int N;
    cout << "Enter the number of students: ";
    cin >> N;

    Student* students = new Student[N];

    for (int i = 0; i < N; i++) {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        students[i].enterPersonalInfo();
        students[i].enterAcademicInfo();
    }

    cout << "Student Information:" << endl;
    for (int i = 0; i < N; i++) {
        cout << "Details for student " << i + 1 << ":" << endl;
        students[i].displayInfo();
        cout << endl;
    }

    delete[] students;

    return 0;
}