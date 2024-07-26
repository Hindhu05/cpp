#include<iostream>

using namespace std;
//using inline we can call function any times without copying and returning always
// not used in recursion, static variables, loop, switch
inline int product(int a, int b){
    //static int c=0; // this executes once
    //c = c+1; // next this function runs,the value of c will be retained
    return a*b;//+c;
}
//in constant arguments they are const
// default arguments
float moneyreceived(int currentmoney, float factor=1.04){
    return currentmoney * factor;
}
int main(){
   int a, b;
    // cout<<"enter the values of a and b "<<endl;
    // cin>>a>>b;
    //     cout<< "the product of a and b is "<<product(a,b)<<endl;/* as many times as u wish */
    
    int money = 10000;
    cout<<"if you have "<<money<<"in your bank account, you will receive "<<moneyreceived(money)<<" after 1 year"<<endl;
    cout<<"for vip: if you have "<<money<<"in your bank account, you will receive "<<moneyreceived(money, 1.1)<<" after 1 year"<<endl;
     return 0;
}