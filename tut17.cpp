// Inheritance in CPP
// Reusability , properties of existing class by inheriting from it, 
// Existing class -->Base class and New class --> Derived class 

/*
    Forms of Inheritance:
    -> Single Inheritance
    -> Multiple Inheritance
    -> Hierarchial Inheritance
    -> Multilevel Inheritance
    -> Hybrid Inheritance        ....see tut17.txt for more..
*/

#include<iostream>
using namespace std;

// Base Class
class Employee{
   // int id;
   
    public:
        int id ;

         float salary ;
        Employee(){}
        Employee(int inpId){
            id = inpId;
            salary = 1200 ;
        }
    
};

//Derived Class syntax
/*
class {{derived class-name}} : {{visibility mode}}   {{base class name}}
{
    class members/methods etc...
}

Note:
1. Default visibility mode is private.
2. Private visibility mode: Public members of the base class becomes private members of the derived class
3. Public visibility mode: Public members of the base class becomes public members of the derived class
4. Private members are never inherited.
*/

// Creating a programmer class derived from Employee base class
class Programmer :  Employee{
    public:
    Programmer( int inpId){
       id = inpId ;  // -->> error as inpId is private data members cannot be inherited
        
    }
    void getData(){
        cout<<id<<endl;
    }
    int languageCode = 9 ;
    
};

int main(){
    Employee sid(1) , aakriti(2) ;
    cout<<sid.salary<<endl;
    cout<<aakriti.salary<<endl; 

    Programmer skillF(11) ;
    cout<<skillF.languageCode<<endl;
    skillF.getData();

    return 0 ; 
}
