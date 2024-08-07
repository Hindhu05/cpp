#include <iostream>
using namespace std;

int main()
{
    int a = 8;
    int *p = &a;
    //*p = 877;
    cout << "Address of a is " << &a << " , " << p << endl;
    cout << "value of a or at address b is " << a << " , " << *p << endl;

    // new keyword or operator
    int *n = new int(67);
    cout << "value at address n is " << *n << endl;

    int *arr = new int[4];
    arr[0] = 90;
    arr[1] = 62; //*(arr+1) = 62;
    arr[2] = 73;
    arr[3] = 46;

    // delete keyword or operator
    delete arr; // delete[] =arr;
    // cout<<"value of arr[0] is "<< arr[0]<<endl;
    // so on...
    for (int i = 0; i < 4; i++)
    {
        cout << " the value of arr " << i << " is " << arr[i] << endl;
    }

    return 0;
}