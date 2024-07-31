#include<iostream>
using namespace std;

// Base class
class Employee{
    //int id;
    //float salary;
    public:
    float salary;
    int id;
    Employee(int Id){
        id = Id;
        salary = 78.67;
    }
    Employee(){}
};
/* Syntax of derived class 
class derived-class-name : visibility-mode  base-class name
{
class members/methods/etc...
 Default visibility mode is private
 Private visibility mode: public members of base class becomes private members of derived class
 public visibility mode: public members of base class becomes public members of derived class
Private members of th base class are never inherited
}*/
class Programmer : public Employee{
    public:
    int languagecode;
    Programmer(int Id){
        id = Id;
        languagecode = 9;
    }
    //int languagecode = 9;
    void getdata(){
        cout<<id<<endl;
    }
};
int main(){
Employee hindhu(1), hiindhu(2);
cout<<hindhu.salary<<endl;//78.67
cout<<hindhu.id<<endl;//1
cout<<hiindhu.salary<<endl;//78.67
Programmer hiindhuu(6);
//cout<<hiindhuu.salary<<endl;
cout<<hiindhuu.languagecode<<endl;//9
hiindhuu.getdata();//6
cout<<hiindhuu.id<<endl;//6

    return 0;
}