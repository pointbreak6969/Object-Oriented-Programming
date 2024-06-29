// The class Record derives information from both: Account and Admin classes and in turn derive
// information from the class Person. Define all the four classes with at least one parameterized
// constructor and ‘void display()’ method in each class. In main() function, create the object of the
// class Record and initialize all the data members and display them.
#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int code;

public:
    Person(string n, int c)
    {
        name = n;
        code = c;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Code: " << code << endl;
    }
};
class Account : virtual public Person
{
protected:
    int salary;

public:
    Account(string n, int c, int s) : Person(n, c)
    {
        salary = s;
    }
    void display()
    {
   
        cout << "Salary: " << salary << endl;
    }
};
class Admin : virtual public Person
{
protected:
    int yearsOfExperience;

public:
    Admin(string n, int c, int e) : Person(n, c)
    {
        yearsOfExperience = e;
    }
    void display(){

        cout << "Years of Experience: " << yearsOfExperience << endl;
    
    }
};

class Record : public Account, public Admin
{
    int Record_No;

public:
    Record(string n, int c, int s, int e, int r) : Person(n, c), Account(n, c, s), Admin(n, c, e)
    {
        Record_No = r;
    }
    void display()
    {
        Person::display();
        Account::display();
        Admin::display();
        cout << "Record No: " << Record_No << endl;
    }

};

int main()
{
Record r("Biraj", 123, 10000, 5, 1);
r.display();
}