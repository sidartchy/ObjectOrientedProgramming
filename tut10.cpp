// constructors

#include<iostream>

using namespace std;

class Complex{
    int a , b; 
    public:
    //constructor is a special member function with same name as of the class
    // used to initialize the objects of its class
    // It is automatically invoked whenever an object is created.
    Complex(void);  // constructor declaration
    
    void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }

};

Complex :: Complex(void){  // this is a default constructor as it takes no parameter 
    a = 0 ;
    b = 0;
}

int main(){
    Complex c; 
    c.printNumber();


    return 0 ; 
}


/*

properties of constructor
1. Should be declared int the public:
2. They are automatically invoked when the object is created.
3. Do not have return types. ( not even void).
4. It can have default arguments.
5. We cannot refer to their address.


*/