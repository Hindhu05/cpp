#include <iostream>
using namespace std;

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base 1 class constructor called " << endl;
    }
    void printdata1(void)
    {
        cout << " The value of data is " << data1 << endl;
    }
};
class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base 2 class constructor called " << endl;
    }
    void printdata2(void)
    {
        cout << " The value of data is " << data2 << endl;
    }
};
class Derived : public Base1, public Base2
{
    int x, y;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        x = c;
        y = d;
        cout << "derived class constructor called " << endl;
    }
    void printdataderived()
    {
        cout << " The value of x is " << x << endl;
        cout << " The value of y is " << y << endl;
    }
};
int main()
{
    Derived hindhu(1, 2, 3, 4);
    hindhu.printdata1();
    hindhu.printdata2();
    hindhu.printdataderived();
}