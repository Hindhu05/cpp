#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    // creating a constructor
    //  constructor is a special member function with same name as class.
    //  it is used to initialize the objects of class.
    //  it is automatically invoked whenever an object is created.

    complex(void);
    /*complex()
    {
        a = 10;
        b = 9;
    };*/

    void printnummber()
    {
        cout << "your number is " << a << "+" << b << "i" << endl;
    }
};
complex::complex(void) //-->this is a default constructor as it takes no parameters.
{
    a = 10;
    b = 9;
}
int main()
{
    complex c;
    c.printnummber();
    return 0;
}

/*1. Mostly declared in public section, can be declared in private section of the claass also.
  2. They are automatically invoked whenever an  object  is created.
  3. They cannot return values and do not have return types.
  4. It can have default arguments.
  5. We cannot refer to their address.*/