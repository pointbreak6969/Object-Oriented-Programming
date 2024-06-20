#include <iostream>
using namespace std;

class Person
{
protected:
    int age;
    string name;
};

class Student : public Person
{
    int grade;
    string college;

public:
      void getData()
    {
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the age: ";
        cin >> age;
        cout << "Enter the grade: ";
        cin >> grade;
        cout << "Enter the college: ";
        cin >> college;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Grade: " << grade << endl;
        cout << "College: " << college << endl;
    }
};

class Employee : public Person
{
    string company;
    int salary;

public:
    void getData()
    {
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the age: ";
        cin >> age;
        cout << "Enter the company: ";
        cin >> company;
        cout << "Enter the salary: ";
        cin >> salary;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Company: " << company << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Student obj1;
    cout << "Enter details for student:" << endl;
    obj1.getData();
    cout << endl;
    cout << "Student details:" << endl;
    obj1.display();
    cout << endl;

    Employee obj2;
    cout << "Enter details for employee:" << endl;
    obj2.getData();
    cout << endl;
    cout << "Employee details:" << endl;
    obj2.display();

    return 0;
}
