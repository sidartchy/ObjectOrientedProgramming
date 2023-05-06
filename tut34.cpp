// Some rules in Virtual Functions


#include<iostream>
#include<cstring>
using namespace std;

class CWH{
    protected:
        string title;
        float rating ;
    public:
        CWH( string s, float r){
            title = s;
            rating = r ;
        }

        virtual void display(){};
        
};

class CWHVideo : public CWH{
    float videoLength ;
    public: 
        CWHVideo( string s, float r, float vL) : CWH( s, r){
            videoLength = vL ;
        }

        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings : "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is : "<<videoLength<<" minutes"<<endl;
        }

};
class CWHText : public CWH{
    int words ;
    public: 
        CWHText( string s, float r, int wc) : CWH(s, r){
            words = wc ;
        }

        
        void display(){
            cout<<"This is an amazing article with title "<<title<<endl;
            cout<<"Ratings : "<<rating<<" out of 5 stars"<<endl;
            cout<<"No of words in this text is  : "<<words<<" words"<<endl;
        }
        
};

int main(){

    string title ;
    float rating, vlen ;
    int words ;
    
    // for code with harry video
    title = "Django tutorial";
    vlen = 4.56 ;
    rating = 3.5 ;
    CWHVideo djvideo(title, rating, vlen);
    djvideo.display();


    // for code with harry text
    title = "Django tutorial Text";
    words = 565 ;
    rating = 4.0 ;
    CWHText djtext(title, rating, words);
    djtext.display();


    CWH* tuts[2] ;
    tuts[0] = &djvideo ;
    tuts[1] = &djtext ;

    tuts[0]->display();   // calls display() of video
    tuts[1]->display(); // calls display() of text

    return 0 ; 
}
/*
Rules for virtual functions:
1. They cannot be static.
2. They are accessed by object pointers.
3. Virtual functions can be a friend of another class.
4. A virtual function in base class might not be used.
5. IF a  virtual function is defined in the base class, there is no necessity of redefining it in a 
    derived class.

*/