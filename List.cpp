#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    list<int> list1; // list of 0 length
    list1.push_back(87);
    list1.push_back(64);
    list1.push_back(32);
    list1.push_back(60);
    list1.push_back(55);
    // list<int> :: iterator iter;
    // iter = list1.begin();

    // list1.insert(iter,6);//6 is printed first
    //  cout<< *iter<<" ";// 87,prints first element
    //  iter++;
    //  cout<< *iter<<" ";//prints next element and so on..
    //  iter++;
    //  cout<< *iter<<" ";
    //  iter++;
    //  cout<< *iter<<" ";
    //  iter++;
    //  cout<< *iter<<" ";
    display(list1);
    //list1.pop_back();
    //list1.pop_front();
    //list1.remove(32);
    //display(list1);
    // list1.sort();
    // display(list1);
    list1.reverse();
    display(list1);

    list<int> list2(3); // Empty list of size 3
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 90;
    iter++;
    *iter = 77;
    iter++;
    display(list2);
    // list1.sort();
    // list2.sort();
    list1.merge(list2);
    cout<<"list1 after merging "<<endl;
    display(list1);
    return 0;
}