#include <iostream>
using namespace std;

class Student
{
protected:
    int roll;

public:
    void display()
    {
        cout << "I am in student class";
    }
};

class Exam:public Student
{
protected:
    int marks;

public:
    void display()
    {
        cout << "I am in exam class";
    }
};

class Sport{
protected:
    int score;
    public:
    void display()
    {
        cout << "I am in sport class";
    }
};

class Result:public Exam, public Sport
{
public:
    void result()
    {
        cout << "I am in result class";
    }
};

int main()
{
    Result obj;
    // obj.display();
    return 0;
}
