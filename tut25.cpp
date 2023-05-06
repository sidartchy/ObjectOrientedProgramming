// Constructors in Derived Class
#include <iostream>
using namespace std;

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called." << endl;
    }
    void printDataB1()
    {
        cout << "The value of data is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called." << endl;
    }
    void printDataB2()
    {
        cout << "The value of data is " << data2 << endl;
    }
};

class Derived : public Base1, public Base2{
    int derived1, derived2 ;
    public:
    // Special syntax used here
        Derived(int a, int b, int c , int d): Base1(a), Base2(c){
            derived1 = c ;
            derived2 = d ;
            cout<<"Derived class constructor called"<<endl;
        }

            void printDataDer()
        {
        cout << "The value of derived 1 is " <<derived1 << endl;
        cout << "The value of derived 2 is " <<derived2 << endl;

        }
};

int main()
{
    Derived sid(1, 2, 3, 4);
    sid.printDataB1();
    sid.printDataB2();
    sid.printDataDer();

    return 0;
}

/*
Note:
1. We can use constructor in derived class in c++
2. If base class constructor does not have any arguments, there is no need of any constructor
    in derived class
3. But if there are one or more arguments in the base class constructor, derived class need to
    pass arguments to the base class constructor
4. If both base and derived classes have constructors, base class contructor is executed first.

*/

/*
1. In Multiple Inheritance, Base classes are constructed in the order in which they appear
    in class declaration.
2. In Multilevel Inheritance, the constructors are executed in the order of inheritance.
*/

/*
Special Syntax:
    1.C++ supports an special syntax for passing arguments to multiple base classes.
    2.The constructor of the derived class receives all the arguments at once and then will
        pass the calls to the respective base classes.
    3.The body is called afrer all the constructors are finished executing.

    Syntax:
        Derived-Constructor( arg1, arg2, arg3...) : Base1-constructor(arg1,arg2), Base2-Constructor(arg3,arg4){
            .....
        }Base1-Constructor(arg1, arg2)

*/