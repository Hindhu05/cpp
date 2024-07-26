#include<iostream>
using namespace std;

int main(){
   int marks[]={70,45,38,199};
// cout<<marks[0]<<endl;
// cout<<marks[1]<<endl;
// cout<<marks[2]<<endl;
// cout<<marks[3]<<endl;

// for (int i = 0; i < 4; i++)
// {
//     cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
// }


// int i=0;
// while (i<4)
// {
//  cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;   
//  i++;
// }


// int i=0;
// do
// {
//     cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
//     i++;
// } while (i<4);

//pointers and arrays
int* p=marks;
cout<<*(p++)<<endl;
cout<<*(++p)<<endl;
// cout<< "the value of *P is "<<*p<<endl;
// cout<< "the value of *(P+1) is "<<*(p+1)<<endl;
// cout<< "the value of *(P+2) is "<<*(p+2)<<endl;
// cout<< "the value of *(P+3) is "<<*(p+3)<<endl;
    return 0;
}