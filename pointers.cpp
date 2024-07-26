#include <iostream>
using namespace std;

int main(){
// pointer- data type which holds the address of other data types.
// &- (address of)operator
int a=2;
int* b= &a;
cout<<"the address of a is "<<&a<<endl;
cout<<"the address of a is "<<b<<endl;

// *- (value at) dereference operator
cout<<"the vaue at address b is "<<*b<<endl;
    return 0;
}