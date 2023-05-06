// Protected Access Modifier

#include<iostream>
using namespace std;

class Base{
    protected:
     int a ;    // private jastai tara inherit huna sakne
    private:
     int b ;


};
/* / for a protected member:
                       Public Derivation   Private Derivation  Protected Derivation
1.Private members       Not Inherited       Not Inherited      Not Inherited 
2.Protected members     Protected           Private            Protected
3.Public members        Public              Private            Protected
*/


class Derived : protected Base{

};



int main(){
    Base b ;
    Derived d;
 //    cout<<b.a;   will not work since a is protected in both base as well a derived class
    return 0 ; 
}