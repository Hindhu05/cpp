#include <iostream>
using namespace std;
/*
syntax for initialization list in constructors
constructor (argument-list): initialization-section
{
assignment + other code
}*/
class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j)//2999, 78654
    // Test(int i, int j) : a(i), b(a+j)//2999,81653
    // Test(int i, int j) : b(j), a(i+b)// throws error because a is initialized first
    Test(int i, int j) : a(i), b(i + j) // 2999,81653
    {
        cout << "constructor executed " << endl;
        cout << " the value of a is " << a << endl;
        cout << " the value of b is " << b << endl;
    }
};
int main()
{
    Test c(2999, 78654);

    return 0;
}