// Create a class Person with data member name, age, address and citizenship_number. Write a function to
// initialize the value of person. Assign citizenship number if the age of person is greater than 16. Otherwise,
// assign value 0 to citizenship number. Also create a function to display the values.

#include <iostream>

using namespace std;

class Person
{
private:
    string name;
    int age;
    string address;
    int citizenship_number;

public:
    void initializePerson(string n, int a, string add, int citizen)
    {
        name = n;
        age = a;
        address = add;
        citizenship_number = citizen;
    };
    void displayPerson()
    {
        if (age < 16)
        {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Address: " << address << endl;
            cout << "Citizenship number " << citizenship_number << endl;
            return;
        }
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "Citizenship number " << age + 1000 << endl;
    }
};

int main()
{
    string name;
    int age;
    string address;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter address: ";
    cin >> address;
    Person p;
    p.initializePerson(name, age, address, 0);
    p.displayPerson();
    return 0;
}
