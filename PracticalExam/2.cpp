//WAP to define a class Box which has private data members length, breadth and height. And public function
// members: readData() for reading data members and showVolume() to calculate and return volume of box.
// The Volume should be displayed in the main().

#include <iostream>

using namespace std;

class Box{
private:
int length;
int breadth;
int height;
public:
void readData(int l, int b, int h){
length = l;
breadth = b;
height = h;
}

int showVolume(){
return length * breadth * height;
}
};

int main(){
Box obj;
obj.readData(10, 5, 2);
cout << "Volume of rectangle is: " << obj.showVolume() << endl;
return 0;
}