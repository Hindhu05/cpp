#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
//Function Objects(Functor): Function wrapped in a class, so that it is available like an object.
    int arr[] = {1, 4, 72, 9, 34};
    //sort(arr, arr+5);
    sort(arr, arr+5,greater<int>());
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}