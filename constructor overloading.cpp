#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    void printnumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    complex c(7, 4);
    c.printnumber();

    complex c1(9);
    c1.printnumber();
    return 0;
}