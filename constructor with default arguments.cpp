#include <iostream>
using namespace std;

class Simple
{
    int data1, data2;

public:
    Simple(int a, int b = 44)
    {
        data1 = a;
        data2 = b;
    }
    void printdata();
};
void Simple::printdata()
{
    cout << "The value of data is " << data1 << " and " << data2 << endl;
}
int main()
{
    Simple s(32, 68);
    s.printdata();

    Simple s1(48);
    s1.printdata();
    return 0;
}

// #include <iostream>
// using namespace std;
// class Complex
// {
//     int a, b;

// public:
//     Complex(int x, int y = 36)
//     {
//         a = x;
//         b = y;
//     }
//     void printdata()
//     {
//         cout << "the value is " << a << " + " << b << " i " << endl;
//     }
// };
// int main()
// {
//     Complex c(89);
//     c.printdata();
//     return 0;
// }