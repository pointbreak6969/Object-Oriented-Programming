#include <iostream>
using namespace std;

class Alpha{
    protected: 
    int a;
    public: 
    Alpha(int x){
        a = x;
    }
    void showA(){
        cout << "A: " << a << endl;
    }
};
class Beta {
protected:
    int b;
public:
    Beta(int x){
        b = x;
    }
    void showB(){
        cout << "B: " << b << endl;
    }
};

class Gamma : public Alpha, public Beta{
    int c;
    public:
    Gamma(int x, int y, int z) : Alpha(x), Beta(y){
        c = z;
    }
    void showG(){
        showA();
        showB();
        cout << "G: " << c << endl;
    }
};

int main(){
    Gamma obj(1, 2, 3);
    obj.showG();
    return 0;
}