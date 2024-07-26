#include<iostream>
using namespace std;

int main(){
int a;
cin>>a;

for (int i = 1; i <=a; i++)
{
    
    for (int j = 1; j <=i; j++)
    {
        if (j==1 ||i==j)
        {
            cout<< "*" ;
        }
        else
       cout<< "-" ;
    }
   cout<<endl; 
     
}

    return 0;
}
/*
*
**
*-*
*--*,so on....*/
/*

/ * #include<iostream>
using namespace std;

int main(){
int a;
cin>>a;

for (int i = 1; i <=a; i++)
{
    
    for (int j = 1; j <=i; j++)
    {
       
            cout<< "*" ;// *
        }                  **
   cout<<endl;             ***
    }                      **** so on..


    return 0;
}

#include <iostream>
using namespace std;

int main(){
int a;
cin>>a;

for (int i = 1; i <=a; i++)
{
    
    for (int j = 1; j <=i; j++)
    {
        if (i==j)
        {
            cout<< "-" ;
        }
        else
       cout<< "*" ; *
                    **
                    **-
                    ***- so on..
    }
   cout<<endl; 
     
}

    return 0;
}

*/ 
