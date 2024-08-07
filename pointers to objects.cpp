#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void setdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void getdata()
    {
        cout << "the real part is " << real << endl;
        cout << "the imaginary part is " << imaginary << endl;
    }
};
int main()
{
    Complex c;
    // c.setdata(397, 983);
    // c.getdata();
    Complex *p = &c;
    // Complex *p = new Complex;
    //(*p).setdata(397, 983);
    p->setdata(397, 983);
    (*p).getdata();

    // Array of objects
    Complex *p1 = new Complex[4];
    p->setdata(64, 39);
    p->getdata();
    return 0;
}