//Constructor Overloading

#include<iostream>
using namespace std;

class Complex{
    int a, b ;
    public:

        Complex( int x, int y){  // --> 1
            a = x ;
            b = y ;

        }

        Complex(int x){   //  --> 2    //overloading.. constructor with one argument
            a = x;
            b = 0 ;
        }

        Complex(){      // -->3
            a = 0 ; 
            b = 0 ;
        }
        void printNumber(){
                cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
            }   
        
};

int main(){
    Complex c1(4, 6);  // uses 1
    c1.printNumber();
  
    Complex b(5);      //uses 2
    b.printNumber();

    Complex c;
    c.printNumber();   // uses 3 


    return 0 ; 
}