#include<iostream>

using namespace std;

int main(){
    // cout<<"this is an example";
//     int age;
//     cout<< "what is your age"<<endl;
// cin>>age;
// while (age<0)
// {
//     cout<< "invalid age, please try again"<<endl;
//     cout<<"enter your age:"<<endl;
//     cin>>age;
    
// }
// if(age<18 || age>60){
//     cout<<"you are not eligible"<<endl;
    
// }
// else if(age==18){
//     cout<<"you may get a kid pass"<<endl;
// }
// else{
//     cout<<"you are eligible"<<endl;
// }


int age;
cout<<"enter your age: "<<endl;
cin>>age;

switch (age)
{
case 17:
    /* code */
    cout<<"you are 17"<<endl;
    break;
case 20:
    /* code */
    cout<<"you are 20"<<endl;
    break;
case 5:
    /* code */
    cout<<"you are 5"<<endl;
    break;

default:
cout<<"no other cases"<<endl;
    break;
}
    return 0;

}