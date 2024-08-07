#include <iostream>
#include <cstring>
using namespace std;

class C
{
protected:
    string title;
    float rating;

public:
    C(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()
    {
    }
};
class CVideo : public C
{
    float videolength;

public:
    CVideo(string s, float r, float vl) : C(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "this is an amazing video with title " << title << endl;
        cout << "Rating of this video is: " << rating << " out of 5" << endl;
        cout << "length  of this video is :" << videolength << " minutes" << endl;
    }
};
class CText : public C
{
    int words;

public:
    CText(string s, float r, int w) : C(s, r)
    {
        words = w;
    }
    void display()
    {
        cout << "this is an amazing text tutorial with title " << title << endl;
        cout << "Rating of this text tutorial is: " << rating << " out of 5" << endl;
        cout << "no. of words in this text tutorial is :" << words << " words" << endl;
    }
};
int main()
{
    string title;
    float rating, vlen;
    int words;

    title = " youtube video";
    rating = 3.6;
    vlen = 8.9;
    CVideo utubevideo(title, rating, vlen);
    //utubevideo.display();

    title = " stories";
    rating = 4.8;
    words = 569;
    CText googletext(title, rating, words);
    //googletext.display();

    C *hh[2];
    hh[0] = & utubevideo;
    hh[1] = & googletext;
   
   hh[0]->display();
   hh[1]->display();
    return 0;
}

/*Rules for virtual functions
1. They cannot be static.
2. They are accessed by object pointers.
3. Virtual functions can be a friend of another class.
4. A virtual function in base class might not be used.
5. If a virtual function defined in base class, there is no necessity of redefining in derived class.*/