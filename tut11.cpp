// More on Constructors  --> parameterized and default constructor

#include<iostream>
using namespace std;

class Complex{
    int a , b ;
    public:
        Complex(int x , int y);
        
        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }   
};


Complex :: Complex(int x, int y){  // this is a parameterized constructor as it takes  parameters
     a = x ;
     b = y;
}

int main(){
    // Implicit call
    Complex a(4, 6);
    

    // Explicit call 
    Complex b =  Complex(5, 7);
    a.printNumber();
    b.printNumber();


    return 0 ; 
}