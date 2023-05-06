// copy constructor in cpp
// A copy constructor is called when a new object is created from an existing object, as a copy of the existing objec
#include<iostream>
using namespace std;

class Number{
    int a ;
    public:
        Number(){}; 
        Number( int num){
            a = num ;
        }

        // a copy constructor
        Number( Number  &obj){  // passing Number itself as argument
            a = obj.a;  // copy ko a lai object ko a assign gardine
        }

    void display(){
        cout<<"The number for this object is :"<<a<<endl ;
    }
};

int main(){
    Number x, y , z(45) ;
    z.display(); 
    // z1 should exactly resemble z ;
    Number z1(z);
    z1.display();


    return 0 ; 
}

/*
When no copy constructor is found, compiler supplies it's own constructor
Try by commenting copy constructor
*/