// Create a base class student. Use the class to store the name, dob, rollno and includes member
// functions getdata(), discount(). Derive two classes PG and UG from student. Make disp_result()
// as virtual function and redefine this function in the derived class to suit the requirement.

#include<iostream>
using namespace std;

class Student{
    protected:
    string name;
    int dob;
    int roll_no;
    float fees;
    public:
    virtual void getData(string name, int dob, int roll_no, float fees)= 0;
    virtual void discount()= 0;
    virtual void disp_result() = 0;

};

class Pg: public Student{
public: 
void getData(string name, int dob, int roll_no, float fees){
 this->name = name;
 this->dob = dob;
 this->roll_no = roll_no;
 this->fees = fees;
}
void discount(){
    this->fees = fees - fees*0.1;
}
void disp_result(){
    cout<<"Name"<<name<<endl;
    cout<<"date of birth" << dob<<endl;
    cout<< "roll_no" <<roll_no<<endl;
    cout<<"The discounted fees is" << fees<<endl;
}
};
class Ug: virtual public Student{
public: 
void getData(string name, int dob, int roll_no, float fees){
 this->name = name;
 this->dob = dob;
 this->roll_no = roll_no;
 this->fees = fees;
}
void discount(){
    this->fees = fees - fees*0.2;
}
void disp_result(){
    cout<<"Name"<<name<<endl;
    cout<<"date of birth" << dob<<endl;
    cout<< "roll_no" <<roll_no<<endl;
    cout<<"The discounted fees is" << fees<<endl;
}
};
int main(){
    Pg pg;
    pg.getData("John", 1990, 123, 10000);
    pg.discount();
    pg.disp_result();
    Ug ug;
    ug.getData("Doe", 1995, 124, 10000);
    ug.discount();
    ug.disp_result();
    return 0;
}