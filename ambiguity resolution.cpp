#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "Hii " << endl;
    }
};
class Base2
{
public:
    void greet()
    {
        cout << "How are you? " << endl;
    }
};
class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base1 ::greet();
        Base2 ::greet();
    }
};
int main()
{
    // if there is a same function in derived and base, derived new method will override base class method when called.
    // if not derived will inherit from base and calls function.
    Derived d;
    // d.Base1 ::greet();// can use it
    d.greet();
}