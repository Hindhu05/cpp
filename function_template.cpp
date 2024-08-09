#include <iostream>
using namespace std;

// float average(int a, int b ){
//     float avg= (a+b)/2;
//     return avg;
// }

// float average2(float a, int b ){
//     float avg = (a+b)/2;
//     return avg;
// }
template <class T>
void swaap(T *a, T *b)
{
    T temp = *a;
    *a = *b;
    *b = temp;
}
template <class T1, class T2>
float average(T1 a, T2 b)
{
    float avg = (a + b) / 2;
    //cout<<avg<<endl;
    return avg;
}
int main()
{
     float a;
     a = average(3, 8.4);
    //average(3, 4.5);
    cout << "the average of these numbers is " << a << endl;
    int x = 99, y = 42;
    swaap(&x, &y);
    cout << x << endl
         << y;
}