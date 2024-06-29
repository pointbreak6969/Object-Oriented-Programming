// Create a class called Employee with data member: code, name, address, salary. Create a
// constructor to initialize the member of the class. Also create another constructor so that we can
// create an object from another object. Define member function display() to display the information
// of the class.

#include <iostream>
using namespace std;

class Employee {
    int code;
    string name, address;
    float salary;
    public: 
        Employee(int c, string n, string a, float s) {
            code = c;
            name = n;
            address = a;
            salary = s;
        }

        Employee(Employee &e) {
            code = e.code;
            name = e.name;
            address = e.address;
            salary = e.salary;
        }

        void display() {
            cout << "Code: " << code << endl;
            cout << "Name: " << name << endl;
            cout << "Address: " << address << endl;
            cout << "Salary: " << salary << endl;
        }
};

int main() {
    Employee e1(1, "Biraj Baral", "Pokhara", 50000);
    Employee e2(e1);

    e1.display();
    e2.display();

    return 0;
}
