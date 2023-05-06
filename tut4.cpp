// static data members  and static function in C++
// static variables are also called class variables because it is associated with class and not with objects.
// static variable is just one and all the objects share them

#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;   // check removing static and commenting line 27


    // count is the static data member of class Employee
    public:
        void setData(void)
        {
            cout<<"Enter the  id"<<endl;
            cin>>id;
            count++;
        }

        void getData( void)
        {
            cout<<"The id of this employee is "<<id<<" and this is employee no "<<count<<endl;
        }
 
        // static funtion
        // used to access static data members
        static void getCount(void){
           // cout<<id ; --> error as static function can't access non-static variables
            cout<<"the value of count is "<<count<<endl;
        }

};

int Employee :: count;   // defaut value is Zero   // should be written outside of class

int main(){

    Employee sid, santosh, shashi, diya ; 

    sid.setData();
    sid.getData();

    Employee::getCount();  // to run static function , name of class and scope resolution operator should be used

    santosh.setData();
    santosh.getData();
    Employee::getCount();

    shashi.setData();
    shashi.getData();
    Employee::getCount();

    diya.setData();
    diya.getData();
    Employee::getCount();
    
    return 0 ; 
}