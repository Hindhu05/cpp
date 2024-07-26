#include<iostream>
using namespace std;

//Function prototype
//type function-name (arguments);
int sum(int a, int b);// acceptable
//int sum(int, int);// acceptable
//int sum(int a, b);// not acceptable
 void h(void);
 //void h();// acceptable
int main (){
    int num1, num2;
    cout<<"enter first number:"<<endl;
    cin>>num1;
    cout<<"enter second number:"<<endl;
    cin>>num2;
    // num1 and num2 are actual parameters
    cout<<"the sum is"<< sum(num1, num2);
    h();
return 0;
}

int sum(int a, int b){
    // a and b(formal parameters) will take values from actual parameters
    int c = a+b;
    return c;
}

void h(){
    cout<<"\n Hello, Good Morning";
}