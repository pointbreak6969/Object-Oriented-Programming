// Create a class called Person with suitable data members to represent their name and age. Use member
// functions to initialize and display this information. Derive Student and Employee from the Person class
// with their unique features. Initialize objects of these classes using constructor and display the information.

#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;
    string address;

public:
    Person(string n, int a, string ad)
    {
        this->name = n;
        this->age = a;
        this->address = ad;
    }
};

class Teacher : public Person
{
    string qualification;
    string department;

public:
    Teacher(string n, int a, string ad, string q, string d) : Person(n, a, ad)
    {
        qualification = q;
        department = d;
    }
    void showData()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "Qualification: " << qualification << endl;
        cout << "Department: " << department << endl;
    }
};

class Student : public Person
{
    string program;
    string semester;

public:
    Student(string n, int a, string ad, string p, string s) : Person(n, a, ad)
    {
        program = p;
        semester = s;
    }
    void showData()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "Program: " << program << endl;
        cout << "Semester: " << semester << endl;
    }
};

int main()
{
    Teacher t("Tulsi", 24, "kathmandu", "masters", "computer engineering");
    Student s("Biraj", 12, "pokhara", "computer engineering", "second");
    t.showData();
    s.showData();
    return 0;
}