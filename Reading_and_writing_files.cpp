#include <iostream>
#include <fstream>

/*The useful classes for working with files in C++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase

In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
1. using the constructor.
2. using the member function open() of the class */
using namespace std;

int main()
{
    string st = " Hi Hindhu";
    string st2;
    // opening file using constructor and writing it.
    ofstream out(" file name.txt"); // write operation.
    /*cout<<"Enter your name ";
     string name;
     cin>>name;
     out<<"My name is " +name;*/
    out << st;// first create another file and keep it empty, then run this program and you can find "Hi Hindhu" in that file.
    out.close();

    // opening file using constructor and reading from it.
    ifstream in(" filename.txt"); // read operation.
    // in>>st2; // only first word of sentence is read.
    getline(in, st2); // total sentence will be read
    cout << st2;
    in.close();
    return 0;
}

// using member functions
//include string also
/*int main(){
    ofstream out;
    out.open("filename.txt");
    out<<"this is me \n ";
    out<<"this is also me \n ";
    out.close();

    ifstrem in;
    string st,st2;
    in.open("filename.txt");
    in>>st>>st2; //output this is
    cout<<st;
    //or//while(in.eof == 0){
     getline(in, st);
     cout<<st<<endl;
     }
     in.close();
    return 0;}*/