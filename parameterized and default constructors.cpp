// #include <iostream>
// using namespace std;

// class complex
// {
//     int a, b;

// public:
//     complex(int, int);

//     void printnumber()
//     {
//         cout << "your number is " << a << " + " << b << "i" << endl;
//     }
// };
// //parameterized constructor
// complex::complex(int x,  int y)
// {
//     a = x;
//     b = y;
// }

// int main()
// {
//     //implicit call 
//     complex d(8, 5);
//     //explicit call
//     complex e = complex(7,10);
//     e.printnumber();
//     d.printnumber();

//     return 0;
// }

#include<iostream>
using namespace std;

class point{
    int x, y;
    public:
        point(int a, int b){
            x = a;
            y = b;
        }
    void displaypoint(){
        cout<<"the point is ( "<<x<<", "<<y << " )"<<endl;
    }
};

int main(){
    point p(6,7);
    p.displaypoint();
    point q(8,3);
    q.displaypoint();
    return 0;
}