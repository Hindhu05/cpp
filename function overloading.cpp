#include<iostream>
using namespace std;

//function overloading
int product(int a, int b){
    cout<<"  using function with 2 arguments"<<endl;
    return a*b;
}
int product(int a, int b, int c){
    cout<<"  using function with 3 arguments"<<endl;
    return a*b*c;
}
int main(){
    cout<<"the product of 4 and 5 is "<<product(4, 5)<<endl;
cout<<"the product of 4, 2 and 5 is "<<product(4, 2, 5)<<endl;
    return 0;
}