// Create a class called Mountain with data members: name, height, location, a constructor that
// initializes the members to values passes to it as parameters, a function called CmpHeight() to
// compare two objects and DisplayInf() to display the information of Mountain. In main(), create
// two objects of the class Mountain and print the information of the mountain which has greatest
// height.

#include <iostream>
using namespace std;

class Mountain {
string name;
int height;
string location;
public: 
Mountain (string n, int h, string l){
    name = n;
    height = h;
    location = l;
}
friend void CmpHeight(Mountain m1, Mountain m2);
friend void displayInfo(Mountain m);
};
void CmpHeight(Mountain m1, Mountain m2){
    if (m1.height > m2.height){
        displayInfo(m1);
    }
    else{
        displayInfo(m2);
    }
}
void displayInfo (Mountain m1){
 cout << m1.name << " have greater height" <<endl;
}

int main(){
    Mountain m1("Everest", 8848, "solukhumbu");
    Mountain m2("kanchenjunga", 8586, "Sikkim");
    CmpHeight(m1, m2);
    return 0;
}