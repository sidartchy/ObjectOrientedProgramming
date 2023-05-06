// Destructors in cpp
// it never takes an argument nor does it return anyy value


#include<iostream>
using namespace std;

int count = 0 ;
class num {
    public:
        num(){
            count++;
            cout<<"This is the time when constructor is called for object number "<<count<<endl;
        }
    //creating a destructor
        ~num(){
            cout<<"This is the time when destructor is called for object number"<<count<<endl;

            count-- ;

        }
};

int main(){
    cout<<"We are inside our main function"<<endl ;
    cout<<"Creating first object n1"<<endl;
    num n1 ;
    {
        cout<<"Entering this block."<<endl ;
        cout<<"Creating two more objects"<<endl ;
        num n1, n3 ;
        cout<<"Exiting this block."<<endl;    // objects inside a block are destructed before exiting the block
    }
    cout<<"Back to main"<<endl ;
    
    return 0 ; 
}