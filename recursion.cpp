#include<iostream>
using namespace std;

int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n* factorial(n-1);
     //5! = 5*4*3*2*1 = 120
     //n! = n* (n-1)!
}

int fib(int n){
    if (n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}
int main(){
int n;
cout<<"enter a number"<<endl;
cin>>n;
//cout<<"the factorial of "<<n<<" is "<<factorial(n)<<endl;
cout<<"the fibonnaci value at position "<<n<<" is "<<fib(n)<<endl;
return 0;
}