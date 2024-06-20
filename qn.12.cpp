// write a program to enter the information of N students and then display it using the conecpt of multilevel inheritance.
// #include <iostream>
// using namespace std;
// class Student
// {
// protected:
//     string name;
//     int dob;
//     string address;
// };

// class Information : public Student
// {
//     int numberOfStudent;

// public:
//     void getData()
//     {
//         cout << "Enter the no of students";
//         cin >> numberOfStudent;
//         cout << "Enter the student data, name, dob, address" << endl;
//         cin >> name >> dob >> address;
//     }
// };

// class Display: public Information{
//     public:
//         void displayData(){
//         cout<< "Name "<<name<<endl;
//         cout<< "dob " <<dob<<endl;
//         cout<< "address " << address<<endl;
//     }
// };

// int main(){
//     Display d;
//     d.getData();
//     d.displayData();
//     return 0;
// }
#include <iostream>
#include <vector>
using namespace std;

class Student
{
protected:
    string name;
    int dob;
    string address;
};

class Information : public Student
{
    int numberOfStudents;
    vector<Information> students;

public:
    void getData()
    {
        cout << "Enter the number of students: ";
        cin >> numberOfStudents;
        cout << "Enter the student data (name, dob, address):" << endl;
        for (int i = 0; i < numberOfStudents; i++)
        {
            Information student;
            cin >> student.name >> student.dob >> student.address;
            students.push_back(student);
        }
    }

    void displayData()
    {
        cout << "Student Information:" << endl;
        for (int i = 0; i < numberOfStudents; i++)
        {
            cout << "Name: " << students[i].name << endl;
            cout << "DOB: " << students[i].dob << endl;
            cout << "Address: " << students[i].address << endl;
        }
    }
};

int main()
{
    Information info;
    info.getData();
    info.displayData();
    return 0;
}

