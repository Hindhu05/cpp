#include<iostream>
using namespace std;

template < class T>
class Tiff{
    public:
    T data;
    Tiff(T a){
        data = a;
    }
    void display();
};

template< class T>
void Tiff<T> :: display(){
    cout<<data<<endl;
}
void function(int a){
    cout<<"This is exact function "<<a<<endl;
}
template< class T >
void function(T a){
    cout<<"this is template function "<<a<<endl;
}
int main(){
//     Tiff<int> b(7);
//     Tiff <char> b('f');
//     cout<<b.data<<endl;
//     b.display();

    function(8);
    function(4.5);
}