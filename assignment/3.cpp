#include <iostream>
using namespace std;

class Rectangle{
    int length, breadth;
      public: 
      Rectangle(int l, int b) : length(l), breadth(b) {};
     void area(){
        int result = length * breadth;
        cout << "The area of reactangle is " << result << endl;
     }
};

int main(){
    Rectangle obj(5, 10);
    obj.area();
    return 0;
}