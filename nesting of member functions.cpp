#include <iostream>
#include <string>
using namespace std;

// Nesting of member function
class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "enter a binary nummber " << endl;
    cin >> s;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}
void binary ::ones_compliment(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else 
            {
                s.at(i) = '0';
            }
    }
}
void binary ::display(void)
{
    cout << "displaying your binary number " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}
int main()
{
    binary b;
    b.read();
    //b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}
// OOPs - Classes and Objects
// c++ - initially called "c with classes" by stroustroup
//  class - extension of structures(with adddition of functions and private class)
//  structures had limitations
//--> members are public
//--> no methods
// classes can have methods and properties
// you can declare objects along with the class declaration like this:
//  class Employee{
// class definition
//  } hindhu, jfieu, ffuehur;
