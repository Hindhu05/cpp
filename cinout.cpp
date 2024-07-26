#include<iostream>
using namespace std;

int main ()
{
    int arr[] = {1, 2, 3, 6589, 874, 764};
    int len = sizeof(arr)/sizeof(arr[0]);
    // cout<<len;

    int b=0;
    int j= 0;
    for (j = 0; j < len; j++)
    {
        // b=arr[i];

        // int high = arr[i];
        // cout<<arr[i];
        if (arr[j] >b)
        {
            b = arr[j];
        }
        
 }

    cout<<b;

    cout<<endl<<j;
    
}