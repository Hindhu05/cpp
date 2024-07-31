#include<iostream>
using namespace std;

//destructor never takes an argument nor returns any value.
int count = 0;
class Num{
    public:
    // int count = 0;
    Num(){
        count++;
        cout<<"Constructor called for object number"<<count<<endl;
    }
    ~Num(){
        cout<<"Destructor called for object number"<<count<<endl;
        count--;
    }
};
int main(){
     cout<<"we are inside our main program"<<endl;
     cout<<"creating first object n1 "<<endl;
     Num n1;
     {
        cout <<"entering n1 block"<<endl;
        cout <<"creating two more objects n2 and n3"<<endl;
        Num n2;
        Num n3;
        cout<<"exiting n3 block"<<endl;
     }
     cout<<"back to main"<<endl;
    return 0;
}