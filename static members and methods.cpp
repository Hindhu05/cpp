#include <iostream>
using namespace std;

class employee
{
    int id;
    // int count = 0;//allocates all objects in different memory
    static int count; // allocates all objects in same memory

public:
    void setData(void)
    {
        cout << "enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "the id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getcount(void)
    {
        cout << "the value of count is " << count << endl;
    }
};

// static data member
int employee::count; // default value is 0// used in static

int main()
{
    employee hindhu, pavani, rani;
    // hindhu.id = 1;
    // hindhu.count = 1; // id and cout are private

    hindhu.setData();
    hindhu.getData();
    //employee::getcount();// in static functions we can call functions directly by class
    hindhu.getcount();

    pavani.setData();
    pavani.getData();
    //employee::getcount();
    pavani.getcount();

    rani.setData();
    rani.getData();
    //employee::getcount();
    rani.getcount();

    return 0;
}