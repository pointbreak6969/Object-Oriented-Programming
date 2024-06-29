// Can a class have more than one constructor? If yes, justify your answer with the help of a program
// that reads firstName and secondName, then concatenates into name. (Use suitable type of
// constructor).

// Answer: Yes, a class can have more than one constructor. This is called constructor overloading. We can overload a constructor by passing different numbers of arguments or different same number of arguments with different datatype.

#include <iostream>
#include <string.h>
using namespace std;

class Name
{
    string firstName, secondName, name;

public:
    Name()
    {
        firstName = "unknown";
        secondName = "unknown";
    }
    Name(string fn, string sn)
    {
        firstName = fn;
        secondName = sn;
    }
    void joinName()
    {
        name = firstName + " " + secondName;
        cout << "The fullname is " << name << endl;
    }
};

int main()
{
    string firstName, secondName;
    cout << "Enter firstName" << endl;
    cin >> firstName;
    cout << "Enter secondName" << endl;
    cin >> secondName;
    Name obj(firstName, secondName);
    obj.joinName();
    return 0;
}
