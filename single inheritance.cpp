// #include<iostream>
// using namespace std;

// class Base{
//     int data1;
//     public:
//     int data2;
//     void setdata();
//     int getdata1();
//     int getdata2();
// };
// void Base :: setdata(void){
//     data1 = 34;
//     data2 = 29;
// }
// int Base ::getdata1(){
//     return data1;
// }
// int Base ::getdata2(){
//     return data2;
// }
// class Derived : public Base{
//  int data3;
//  public:
//  void process();
//  void display();
// };
// void Derived :: process(){
//     data3 = data2 * getdata1();
// }
// void Derived :: display(){
//     cout<<"value of data1 is "<<getdata1()<<endl;
//     cout<<"value of data2 is "<<data2<<endl;
//     cout<<"value of data3 is "<<data3<<endl;
// }
// int main(){
// Derived d;
// d.setdata();
// d.process();
// d.display();
//     return 0;
// }

#include<iostream>
using namespace std;

class Base{
    int data1;
    public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void Base :: setdata(void){
    data1 = 34;
    data2 = 29;
}
int Base ::getdata1(){
    return data1;
}
int Base ::getdata2(){
    return data2;
}
class Derived : private Base{
 int data3;
 public:
 void process();
 void display();
};
void Derived :: process(){
    setdata();
    data3 = data2 * getdata1();
}
void Derived :: display(){
    cout<<"value of data1 is "<<getdata1()<<endl;
    cout<<"value of data2 is "<<data2<<endl;
    cout<<"value of data3 is "<<data3<<endl;
}
int main(){
Derived d;
//d.setdata(); //cannot be called as it is private
d.process();
d.display();
    return 0;
}