// wap to find area of triangle when its sides are given using the concept of overloaded constructor
#include <iostream>
using namespace std;

class Area {
    private: 
    int l,b;
    public:
    Area(){
        l = 10;
        b=20;
    };
    Area(int length, int breadth){
        this->l = length;
        this->b = breadth;
    }
   void result(){
    int calculated = (l*b)/2;
    cout<<"The calculated area is " << calculated;
    }
};

int main(){
Area obj1, obj(5,6);
obj1.result();
obj.result();
return 0;
}

// output:
// The calculated area is 100
// The calculated area is 15