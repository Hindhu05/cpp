#include <iostream>
using namespace std;

class Red
{
    int a;

public:
    void setdata(int a)
    {
        this->a = a;
    }
    //  Red & setdata (int a){
    //     this-> a = a;
    //     return *this;
    // }
    void getdata()
    {
        cout << "The value of a is " << a << endl;
    }
};
int main()
{
    Red b;
    b.setdata(66); //.getdata();
    b.getdata();
    return 0;
}
/*this is a keyword which is a pointer which points to the object which invokes the member function*/