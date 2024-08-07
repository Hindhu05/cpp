#include <iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout << " Code of this item is " << id << endl;
        cout << "price of this item is " << price << endl;
    }
};
int main()
{
    int size = 3;
    int p, i;
    float q;
    // dal, vegetables, fruits
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;
    for ( i = 0; i < size; i++)
    {
        cout << "enter the id and price of item " << i + 1 << endl;
        cin >> p >> q;
        //(*ptr).setdata(p,q);
        ptr->setdata(p, q);
        ptr++;
    }
    for (i = 0; i < size; i++)
    {
        cout << "item number: " << i + 1 << endl;
        ptrTemp->getdata();
        ptrTemp++;
    }

    return 0;
} 