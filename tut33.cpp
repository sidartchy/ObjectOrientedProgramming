// Virtual Functions in CPP
// Used to override the default behaviour of polymorphism.
#include<iostream>
using namespace std;

//classes copied from prev program
class BaseClass{
    public:
        int var_base = 1;
        virtual void display(){  
        /*using virtual keyword now tells compiler that if in the program, there's a Base class pointer pointing to 
        derived class, the compiler must chose the members ( display() ) of the derived class , and not of base class
        
        */
            cout<<"1. Displaying Base class variable var_base: "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
 public:
        int var_derived =2  ;
        void display(){
            cout<<"2.Displaying Base class variable var_base:"<<var_base<<endl;
            cout<<"2.Displaying Derived class variable var_derived: "<<var_derived<<endl;
        }
};

int main(){

    BaseClass * base_class_pointer ;
    BaseClass obj_base ;
    DerivedClass obj_derived ;
    base_class_pointer = &obj_derived ;

    base_class_pointer->display(); // 1.Before using virtual keyword in Base class -> will use display() of base class
                                   // 2. After using virtual keyword in Base class -> will use diplay() of derived class
    
    return 0 ; 
}