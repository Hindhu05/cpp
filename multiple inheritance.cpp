#include <iostream>
using namespace std;
/*syntax for multiple inheritance
 class Derived : visibility-mode base1, visibility-mode base2
{
class body of class Derived
}
*/
class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};
class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << " the value of base1 is " << base1int << endl;
        cout << " the value of base2 is " << base2int << endl;
        cout << " the sum of base1 and base2 is " << base1int + base2int << endl;
    }
};
int main()
{
    Derived hindhu;
    hindhu.set_base1int(54);
    hindhu.set_base2int(90);
    hindhu.show();
    return 0;
}