#include <iostream>
using namespace std;

class Person
{
private:
    string Name;
    int Age;

public:
    // void setname(string name)
    // {
    //     Name = name;
    // }
    Person(string);
    // {
    //     Name = "hindhu";
    // }
    void getname()
    {
        cout << "your name is : " << Name<< endl;
    }
    // void setage(int age)
    // {
    //     Age = age;
    // }
    Person(int);
    // {
    //     Age = 21;
    // }
    void getage()
    {
        cout << "your age is : " <<Age << endl;
    }
};
Person:: Person(string a){
    Name = a;
}
Person :: Person(int b){
    Age = b;
}

int main()
{
    Person x("hindhu");
    Person y(43);
    
    x.getname();
    y.getage();
    return 0;
}