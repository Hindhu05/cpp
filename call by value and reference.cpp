#include <iostream>

using namespace std;
//this will not swap
// call by value 
//void swap(int a, int b){ //temp a  b
  //  int temp= a;         //4    4  5
    //a = b;               //4    5  5
    //b = temp;            //4    5  4
//}

//call by reference using pointers
void swappointer (int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;

}
// call by reference using reference variables
void swapReferenceVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;

}
int main(){
int x=4, y=5;
// cout<<"the sum of 4 and 5 is "<<sum(a, b);
//swap(x, y); // this will not swap a and b// call by value 
//cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;
//swapPointer(&x, &y); //this will  swap a and b using pointer reference
swapReferenceVar(x, y); //this will  swap a and b using reference variables
cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;

return 0;
}