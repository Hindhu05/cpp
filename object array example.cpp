#include<iostream>
using namespace std;

class Person{
    private:
    string Name;
    int Age;
    public:
    Person(string x, int y){
        Name = x;
        Age = y;
    }
    void getnameandage(){
        cout <<" your name is : "<< Name <<" and your age is : "<< Age<<endl;
    }
      
};
int main(){
// Person a("Hindhu", 21);
// Person b("Sandeep", 26);
Person d[2] =  { Person("Hindhu",21), Person("Sandeep",26)};
d[1].getnameandage();
for (int i = 0; i <2; i++)
{
    d[i].getnameandage();
}

    return 0;
}