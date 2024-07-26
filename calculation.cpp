#include <iostream>
using namespace std;

int main()
{

    char operations;
    int a, b;
    while (true)
    {
        cout << "enter two numbers: " << endl;
        cin >> a >> b;
        cout << "choose an operation(+, -, *, /): " << endl;
        cin >> operations;

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
                cout << a << "/" << b << "=" << a / b << endl;
            }
            break;

        default:
            cout << "invalid operation,please try again " << endl;
            break;
        }
        cout << "do you want to continue(y/n)? " << endl;
        char choice;
        cin >> choice;
        if (choice != 'y')
        {
            break;
        }

        
    }
}