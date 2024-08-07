#include <iostream>
// #include<vector>
using namespace std;

template <class T>
class Vector
{
public:
    T *arr; // int * arr;
    int size;
    Vector(int m)
    {
        size = m;
        arr = new T[size]; // new int[size];
    }
    T dotproduct(Vector &v) // int dotproduct(Vector &v)
    {
        T d = 0; // int d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    // Vector v1(3);
    // v1.arr[0] = 9;
    // v1.arr[1] = 7;
    // v1.arr[2] = 3;

    // Vector v2(3);
    // v2.arr[0] = 8;
    // v2.arr[1] = 6;
    // v2.arr[2] = 4;
    // int a = v1.dotproduct(v2);
    // cout<<a<<endl;

    Vector<float> v1(3);
    v1.arr[0] = 9.2;
    v1.arr[1] = 7.4;
    v1.arr[2] = 3.9;

    Vector<float> v2(3);
    v2.arr[0] = 8.5;
    v2.arr[1] = 6.3;
    v2.arr[2] = 4.1;
    float a = v1.dotproduct(v2);
    cout << a << endl;

    return 0;
}