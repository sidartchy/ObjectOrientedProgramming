    // OOPs - classes and objects
    // class- extension of structures ( in c)
    // structures has limitations,
    // -->members are public
    // -->NO menthods
    // classes can have methods and properties
    // classes can make members both as private or public
    // structures in C++ are typedefed
    // you can declare objects along with the class declaration
    /* class Employee{
        // class definition
    }harry , rohan , lovish ; */

    // Nesting of member functions








#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones ( void);
    void display(void);
};

void binary::read(void){
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}

void binary::chk_bin(void){
    for ( int i = 0 ; i < s.length(); i++){
        if(s.at(i) != '0' && s.at(i) != '1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }
}

void binary::ones(void)
{
    chk_bin(); // nesting function 
    for(int i = 0 ; i <s.length(); i++)
    {
        if( s.at(i) == '0'){
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}

void binary::display(void)
{
    for(int i = 0 ; i <s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}

int main()
{


    binary b; 
    b.read();
  //  b.chk_bin();
    b.display();
    b.ones();
    b.display();

    return 0;
}