// friend functions

#include<iostream>
using namespace std;

class Complex{
    int a ; 
    int b ; 

    public:
        void setNumber(int n1, int n2){
            a = n1 ; 
            b = n2 ; 
        }

        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }

        friend Complex sumComplex( Complex o1, Complex o2);  // declaration of a friend function

};


// friend function can now access private data members of class Complex
Complex sumComplex( Complex o1, Complex o2){
    Complex o3 ;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
}
int main(){
    Complex c1, c2, sum ;
    c1.setNumber(1, 4);

    c2.setNumber(4, 7);
    c1.printNumber();
    c2.printNumber();

    sum = sumComplex( c1, c2);
    sum.printNumber();

    
    return 0 ; 
}

/*
Properties of friend functions 
1. Not in the scope of class
2. since it is not in the scope of class, it can't be called from the object of the class
   c1.sumComplex(.....) is invalid
3. Can be invoked without the help of any object
4. Usually contains objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and object name.member_name 
   to access any memebr.
*/