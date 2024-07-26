// #include<iostream>
// using namespace std;

// class y;
// class x{
//     int data;
//     public:
//     void setdata(int value){
//         data = value;
//     }
//      friend void add(x, y);
// };
// class y{
//     int num;
//     public:
//     void setdata(int value){
//         num = value;
//     }
//     friend void add(x, y);
// };
// void add(x o1, y o2){
// cout<<"summing data's of x and y objects gives "<<o1.data + o2.num<<endl;
// }
// int main(){
//     x a1;
//     a1.setdata(65);

//     y b1;
//     b1.setdata(45);

//     add(a1, b1);
//     return 0;
// }

#include<iostream>
using namespace std;
class c2;
class c1{
    int value1;
    public:
      void setdata(int a){
        value1 = a;
      }
      void display(void){
        cout<<value1 <<endl;
      }
      friend void exchange(c1 &, c2 &);
};
class c2{
    int value2;
    public:
      void setdata(int a){
        value2 = a;
      }
      void display(void){
        cout<<value2 <<endl;
      }
      friend void exchange(c1 & , c2 & );
};
void exchange (c1 &x, c2 &y){
int temp = x.value1;
x.value1 = y.value2;
y.value2 = temp;
}
int main(){
    c1 o1;
    c2 o2;
    o1.setdata(34);
    o2.setdata(67);
    exchange(o1, o2);

cout<<"the value of c1 after exchanging becomes: ";
o1.display();
cout<<"the value of c2 after exchanging becomes: ";
o2.display();
    return 0;
}