// Initialization List in Constructors in CPP
#include <iostream>
using namespace std;

class Test
{
    int a;
    int b;

public:
    Test(int i, int j) : a(i), b(j)
    { // a = i , b = j
        cout << "Constructor executed." << endl;
        cout << "Value of a is " << a << endl
             << "Value of b is " << endl;
    }
    // Other way
    // Test( int i , int j) : a(i)
    // {
    //     b = j ;
        
    // }
};

int main()
{
    Test t1(3, 4);
    return 0;
}

/*
Syntax:
constructor ( argument-list ) : initialization-section
{
    // body
}

example:
class Test{
    int a;
    int b ;
    public :
        Test( int i , int j): a(i), b(j){ body}  // a = i , b = j
};

*/