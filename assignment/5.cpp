#include <iostream>
using namespace std;

class University
{
protected:
    string name, location;

public:
    University(string n, string l) : name(n), location(l){};
};

class affliatedCollege : virtual public University
{
protected:
    string affliatedCollegeName, address;
    int noOfPrograms;

public:
    affliatedCollege(string n, string l, string cn, string ca, int np) : University(n, l), affliatedCollegeName(cn), address(ca), noOfPrograms(np){};
    void display()
    {
        cout << "University Name: " << name << endl;
        cout << "University Location: " << location << endl;
        cout << "College Name: " << affliatedCollegeName << endl;
        cout << "College Address: " << address << endl;
        cout << "No of Programs: " << noOfPrograms << endl;
        cout << endl;
    }
};

class constituentCollege : virtual public University
{
protected:
    string school, dean, nameOfProgram;

public:
    constituentCollege(string n, string l, string cn, string d, string p) : University(n, l), school(cn), dean(d), nameOfProgram(p){};
    void display()
    {
        cout << "University Name: " << name << endl;
        cout << "University Location: " << location << endl;
        cout << "College Name: " << school << endl;
        cout << "College Dean: " << dean << endl;
        cout << "Name of program: " << nameOfProgram << endl;
        cout << endl;
    }
};

class Student : public affliatedCollege, public constituentCollege
{
    string studentName, Program;
    int enrolledYear;

public:
    Student(string n, string l, string cn, string ca, int nop, string s, string d, string np, string sn, string p, int ey) : University(n, l), affliatedCollege(n, l, cn, ca, nop), constituentCollege(n, l, s, d, np), studentName(sn), Program(p), enrolledYear(ey){};
    void display()
    {
        cout << "Student Name: " << studentName << endl;
        cout << "University Name: " << name << endl;
        cout << "University Location: " << location << endl;
        cout << "College Name: " << affliatedCollegeName << endl;
        cout << "Dean: " << dean << endl;
        cout << "Name of branch: " << nameOfProgram << endl;
        cout << "Program: " << Program << endl;
        cout << "Enrolled Year: " << enrolledYear << endl;
        cout << endl;
    }
};

int main()
{
    affliatedCollege obj1("Tu", "pokhara", "paschamanchial", "lamachaur", 10);
    obj1.display();
    constituentCollege obj2("Tu", "pokhara", "purvanchal", "biraj", "engineering");
    obj2.display();
    Student obj3("Tu", "pokhara", "paschamanchial", "lamachaur", 10, "purvanchal", "biraj", "engineering", "baral", "computer", 2028);
    obj3.display();
    return 0;
}