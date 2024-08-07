#include <iostream>
using namespace std;

// template<class T1, class T2>
// class NameOfClass{
// body}

template <class T1, class T2>
class MyClass
{
public:
    T1 data1;
    T2 data2;
    MyClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 <<"\n"<< this->data2;
    }
};
int main()
{
    MyClass<int, float> obj(1, 3.56);
    obj.display();
}