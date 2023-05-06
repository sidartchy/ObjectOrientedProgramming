// Multiple Inheritance  [ A + B = C]
// Inherited from more than two classes
/*
syntax:

class Derived_class(C) : visibility_mode base 1(A), visibilitymode base2(B){
    ...
};
*/

#include <iostream>
using namespace std;

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "The value of Base 1 is " << base1int << endl;
        cout << "The value of Base 2 is " << base2int << endl;
        cout << "The sum of these values is " << base1int + base2int << endl;
    }
};

/*
The inherited derived class will look like this;
Data Members
    base1int -- protected;
    base2in -- protected;

Member functions:
    set_base1int --> public:
    set_base2int --> public:
    show-----------> public:

*/

int main()
{
    Derived Bishal;
    Bishal.set_base1int(23);
    Bishal.set_base2int(50);

    Bishal.show(); // DhumDhadaka

    return 0;
}