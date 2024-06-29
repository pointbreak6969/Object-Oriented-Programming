//Create a class Person with data members: Name, age, address and citizenship_number. Write a
// constructor to initialize the value of a person. Assign citizenship number if the age of the person is
// greater than 16 otherwise assign value zero to citizenship number. Also create a function to display
// the values.

#include <iostream>

using namespace std;

class Person{
private:
string name;
int age;
string address;
int citizenship_number;

public: 
Person(string n, int a, string add, int citizen){
this->name =n;
this->age = a;
this->address = add;
this->citizenship_number = citizen;
};
void displayPerson(){
   if (age<16){
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

int main(){
    string name;
    int age;
    string address;
    int citizenship_number;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter address: ";
    cin >> address;

Person p(name, age, address, 0);
p.displayPerson();
return 0;
}