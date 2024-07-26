#include <iostream>
using namespace std;

class complex
{
    int a, b;
friend complex sumcomplex(complex o1, complex o2);
public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    
    void printnumber()
    {
        cout << "your complex number is " << a << "+ " << b << "i" << endl;
    }
};

complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1, c2, sum;
    c1.setnumber(1, 4);
    c1.printnumber();

    c2.setnumber(5, 8);
    c2.printnumber();

    sum = sumcomplex(c1, c2);
    sum.printnumber();
    return 0;
}

/*sumcomplex function is a friend function.
 -non member function, allowed to do anything with private class.
 - not in the scope of class,not a member of class.
 - cannot be called from object of class c1.sumcomplex is invalid.
 - can be invoked without the help of any object.
 - usually contains objects as arguments.
 - can be declared inside public or private section of the class.  
 - it cannot access the members directly by their names and need object_name.member_name to acccess any member*/