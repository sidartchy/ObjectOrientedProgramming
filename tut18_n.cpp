// more on inheritance
// Single Inheritance
// tut18, but visibility of derived data changed. see how the errors are tackled

#include <iostream>
using namespace std;
// Base class
class Base
{
    int data1; // private by default and is not inheritable
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base ::setData()
{
    data1 = 10;
    data2 = 20;
}

int Base ::getData1()
{
    return data1;
}
int Base ::getData2()
{
    return data2;
}

class Derived : private Base
{ // public members of Base are now private members of Derived
    int data3;

public:
    void process();
    void display();
};

void Derived ::process()
{
    setData();
    data3 = data2 * getData1(); // using member method to access data1  since data1 is a private data member
}
void Derived ::display()
{
    cout << "Value of data 1 is " << getData1() << endl;
    cout << "Value of data 2 is " << data2 << endl;
    cout << "Value of data 3 is " << data3 << endl;
}

int main()
{

    Derived der;
   // der.setData(); // can't call this now, since it has become private member for the derived class
    der.process();  // it includes setData in itself
    der.display();
    return 0;
}