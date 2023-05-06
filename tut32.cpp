// Polymorphism in CPP
//  refer to tut31.txt for theories

// Pointers to Derived Classes.

#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying Base class variable var_base" << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying Base class variable var_base" << var_base << endl;
        cout << "Displaying Derived class variable var_derived" << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // TODO: a base class pointer pointing to derived class object
    //
    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived = 234 ;   Not permitted to use members of derived class
    base_class_pointer->display(); // will use display() of base class. although the object is of derived class ( late binding )

    DerivedClass *derived_class_pointer; // A derived class pointer pointing to derived class object
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 11; // can access both var_base and var_derived
    derived_class_pointer->display();        // will use diplay() of derived class.

    return 0;
}