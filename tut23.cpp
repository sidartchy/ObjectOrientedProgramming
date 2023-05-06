// Ambiguity Resoultion in C++
#include <iostream>
using namespace std;

class Base1
{
public:
    void greet(void)
    {
        cout << "How are you?" << endl;
    }
};

class Base2
{
public:
    void greet(void)
    {
        cout << "Sanchai hunuhunchha?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;
    public:
    // Ambiguity Resolution
        void greet(){
            Base1 :: greet();     // Specifying which greet to use
        }
};

class B{
    public:
        void say(){
            cout<<"Hello World"<<endl;
        }
};

class D : public B{
    int a; 
    public:

    // D's new say() method will overwrite Base class's say() method
        void say(){
            cout<<"Hello my beautiful people"<<endl;
        }
};

int main()
{

  // Ambiguity 1
   /* Base1 b1;

    Base2 b2;

    b1.greet();
    b2.greet();

    Derived d;
    //d.greet();    --> ambiguos since both Base class has greet() function
    d.greet();   // will use Base 1 greet's function    */

    // Ambiguity 2
    B b ;
    b.say();
    D d ;
    d.say();

    return 0;
}