// Pointers to Objects and Arror Operator in CPP
#include<iostream>
using namespace std;

class Complex{
    int real, imaginary ;
    public:
        void getData(){
            cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary part is "<<imaginary<<endl;
        }

        void setData( int a, int b){
            real = a;
            imaginary = b;
        }

};

int main(){
    // Complex c1;
    // Complex *ptr = &c1 ; // A pointer to object
    Complex *ptr = new Complex;  // does the same thing as upper two line
    // c1.setData(1, 54);
    // c1.getData();

    // (*ptr).setData(1, 54);   // does the same thing as 23 and 24 line
    // (*ptr).getData();       // () is mandatory


    // Doing the same thing with arror operator
    ptr->setData(1, 54);
    ptr->getData();


    // Array of objects
    Complex *ptrN = new Complex[4];
    ptrN->setData(1, 4);
    ptrN->getData();    // points to the first data members of array
                        // ptrN+1 would point to the second


    return 0 ; 
}

/*

*/