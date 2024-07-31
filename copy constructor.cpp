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
    // when no copy constructor found, compiler supplies its own copy constructor.
    Person(Person& t){
        cout<<"copy constructor called "<<endl;
        Name = t.Name;
        Age = t.Age;
    }
    void getnameandage(){
        cout <<" your name is : "<< Name <<" and your age is : "<< Age<<endl;
    }
      
};
int main(){
   Person  b("hindhu",21), e("pavani",25);
    b.getnameandage();
    Person d(b);
    d.getnameandage();
    e = b;//copy constructor not invoked
    e.getnameandage();
    Person f = b;//copy constructor invokes
    f.getnameandage();
   
    return 0;
}