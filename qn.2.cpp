#include <iostream>

using namespace std;

class Volume{
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
Volume v;
v.readData(10, 5, 2);
cout << "Volume of rectangle is: " << v.showVolume() << endl;
return 0;
}