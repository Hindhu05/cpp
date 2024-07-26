#include<iostream>
using namespace std;

int main()
{

    char operations;
    int a, b;
    while (true)
    {
        cout << "choose an operation(+, -, *, /): " << endl;
        cin >> operations;
        cout << "enter two numbers: " << endl;
        cin >> a >> b;
        

        switch (operations)
        {
        case '+':
            cout << a << "+" << b << "=" << a + b << endl;
            break;
        case '-':
            cout << a << "-" << b << "=" << a - b << endl;
            break;
        case '*':
            cout << a << "*" << b << "=" << a * b << endl;
            break;
        case '/':
            if (b == 0)
            {
                cout << "invalid division " << endl;
            }
            else
            {
                cout << a << "/" << b << "=" << float(a) / float(b) << endl;
            }
            break;

        default:
            cout << "invalid operation,please try again " << endl;
            break;
        }
    }
    return 0;
}    