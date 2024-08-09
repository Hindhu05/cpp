#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    cout << "displaying vector " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout<< v.at(i)<<" ";// can use this
    }
    cout << endl;
}
int main()
{
    // vector<int> vec1;
    // int element;
    // // or you can choose size
    // int size;
    // cout << "Enter the size " << endl;
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter an element to add to this vector ";
    //     cin >> element;
    //     vec1.push_back(element);//adds elements at end
    // }
    // //vec1.pop_back();// deletes the last element
    // display(vec1);
    // vector <int> :: iterator iter = vec1.begin();
    // vec1.insert(iter,4, 66);//inserts 66 at first, if we want in any other place do +1,2,3...
    //  // her 4 implements that 66 is going to display 4 times before first element.
    // display(vec1);

    // ways to create a vector
    vector<int> vec1; // zero length integer vector
    display(vec1);
    vector<char> vec2(4); // 4 element character vector
    vec2.push_back('c');
    display(vec2);
    vector<char> vec3(vec2); // 4 element character vector from vec2
    display(vec3);
    vector<int> vec4(6, 3); // 6 element vector of 3s
    display(vec4);
    cout<<vec4.size();
    return 0;
}