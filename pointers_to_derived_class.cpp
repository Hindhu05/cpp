#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying base class variable " << var_base << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying base class variable " << var_base << endl;
        cout << "Displaying derived class variable " << var_derived << endl;
    }
};
int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    //base_class_pointer = &obj_derived;//pointing base class pointer to derived class

    base_class_pointer->var_base = 83;// only base class variables can be accessed
    base_class_pointer->display();
    //base_class_pointer->var_display =90;// throws an error
    
    DerivedClass * derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 722;
    derived_class_pointer->var_base = 22;
    derived_class_pointer->display();
    return 0;
}