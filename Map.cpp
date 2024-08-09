#include<iostream>
#include<map>
#include<string>

using namespace std;

//Map is an associative array.
int main(){
    map<string, int> marksmap;
    marksmap["Hindhu"] = 98;
    marksmap["Pavani"] = 68;
    marksmap["hp"] = 55;

    marksmap.insert({{"ok",23},{"st",89}});
    map<string, int> :: iterator itr;
    for(itr=marksmap.begin(); itr !=marksmap.end();itr++){
        cout<<(*itr).first<<" "<<(*itr).second<<"\n";
    }
    cout<<"The size is: "<<marksmap.size()<<endl;
    cout<<"The max size is: "<<marksmap.max_size()<<endl;
    cout<<"The empty return value  is: "<<marksmap.empty()<<endl;
    return 0;
}