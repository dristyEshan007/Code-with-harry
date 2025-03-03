#include <bits/stdc++.h>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()=0; // do=nothing function --> pure virtual funtion
};

class CWHVideo : public CWH
{
    int videolength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings " << rating << "Out of 5 stars" << endl;
        cout << "Length of this video is " << videolength << "Minutes" << endl;
    }
};
class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Ratings of this text tutorial is " << rating << "Out of 5 stars" << endl;
        cout << "Number of words in this text tutorial is " << words << "words" << endl;
    }
};
int main()
{
    string title;
    float rating, vlen;
    int words;

    title = "Django Tutorial";
    vlen = 4.56;
    rating = 4.89;

    CWHVideo djVideo(title, rating, vlen);
    // djVideo.display();

    title = "Django Tutorial text";
    words = 456;
    rating = 4.19;

    CWHText djText(title, rating, vlen);
    djText.display();


    CWH* tuts[2];
    tuts[0]= &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}
// Rules for virtual function
// 1. They cannot be static.
// 2. They are accessed by object pointers
// 3. Virtual functions can be a friend of another class
// 4. A virtual function in base class might not be used.
// 5. If a virtual function is defined in a base class, there is no necessity of redefining it in 
// the derived class. 