#include<iostream>

using namespace std;

//typedef// struct employee
// {
//     int eId;
//     char favchar;
//     float salary;
// }//ep;

//union 
// union money
// {
//     int rice;
//     char car;
//     float pounds;
// };

int main()
{
    enum meal {breakfast, lunch, dinner};
   meal m1= breakfast;
   cout<<m1;
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;

    // union money m1;
    // m1.rice = 70;
    // m1.car = 'd';//any one will be set to output
    // cout<<m1.car<<endl;

//     struct employee hindhu;
//     ep hindhu;
//     hindhu.eId = 4;
//     hindhu.favchar = 'd';
//     hindhu.salary = 450000;
// cout<<hindhu.eId<<endl;
// cout<<hindhu.favchar<<endl;
// cout<<hindhu.salary<<endl;
    return 0;
}