#include <iostream>

using namespace std;

// class Test{
//     private:
//     int n;
// };
class Test
{
public:
    int n;
};

// class Test{
//     protected:
//     int n;
// };

int main()
{
    Test test;
    test.n = 10;
    cout<< test.n << endl;
    return 0;
}
