#include<iostream>
using namespace std;

class Employee
{
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a1, int b1, int c1);//declartion
        void getData(){
            cout<<"the value of a is "<<a<<endl;
            cout<<"the value of b is "<<b<<endl;
            cout<<"the value of c is "<<c<<endl;
            cout<<"the value of d is "<<d<<endl;
            cout<<"the value of e is "<<e<<endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){
a = a1;
b = b1;
c = c1;
}//may or may not used in this code


int main(){ 
    Employee hindhu; 
    // hindhu.a = 56; throws an error as a is private
    hindhu.d = 34;
    hindhu.e = 89;
    hindhu.setData(1,2,4);
    hindhu.getData();
    return 0;
}
