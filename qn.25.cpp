/*Assume that you have a class called ”Employee" with the
following attributes: name , age , and occupation . Implement
the necessary functions to allow the user to input data for
multiple Employee objects and store them in a file ’Details.txt’.
Additionally, provide functionality to read and display the
stored Employee objects from the file. */
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
class Employee
{
private:
    char Name[20];
    char occupation[50];
    int age;

public:
    void get_info()
    {
        cout << "Enter name, occupation, age: ";
        cin >> Name >> occupation >> age;
    }
    void set_info()
    {
        cout << Name << "\t" << occupation << "\t" << age << endl;
    }
};

int main()
{
    int numEmployees;
    cout << "Enter the number of employees: ";
    cin >> numEmployees;

    Employee* employees = new Employee[numEmployees];

    fstream file;
    file.open("Details.txt", ios::out | ios::binary);
    if (!file)
    {
        cout << "Error opening file!" << endl;
        return 1;
    }

    for (int i = 0; i < numEmployees; i++)
    {
        cout << "Enter details for Employee " << i + 1 << ":" << endl;
        employees[i].get_info();
        file.write(reinterpret_cast<char*>(&employees[i]), sizeof(Employee));
    }

    file.close();

    file.open("Details.txt", ios::in | ios::binary);
    if (!file)
    {
        cout << "Error opening file!" << endl;
        return 1;
    }

    cout << "Name \t" << "Occupation \t" << "Age" << endl;
    for (int i = 0; i < numEmployees; i++)
    {
        file.read(reinterpret_cast<char*>(&employees[i]), sizeof(Employee));
        cout << "Employee " << i + 1 << ": ";
        employees[i].set_info();
    }

    file.close();

    delete[] employees;

    return 0;
}