// more on inheritance
// Single Inheritance

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

class Derived : public Base
{ // public members of Base are now public members of Derived
    int data3;

public:
    void process();
    void display();
};

void Derived ::process()
{
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
    der.setData(); // although being a derived class , can use method of Base class
    der.process();
    der.display();
    return 0;
}