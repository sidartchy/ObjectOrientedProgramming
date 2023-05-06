// Virtual Base Class
#include <iostream>
using namespace std;
/*
Syntax
class B : virtual public A{
};
class C : virtual pubic A{
};

ex:
Student ----- Test + Sports ------> Result :
*/

class Student
{
protected:
    int roll_no;   

public:
    void set_number(int a)    // // This will be flowed to both Test and Sports which will create ambiguity
    {
        roll_no = a;
    }
    void print_number()
    {
        cout << "Your roll no is " << roll_no << endl;
    }
};

class Test : virtual public Student   // using virtual keyword will solve this
{
    protected :
        float maths, physics ;
    public:
        void set_marks( float m1, float m2){
            maths = m1 ;
            physics = m2 ;
        }
        void print_marks( void){
            cout<<"You result is here: "<<endl
                <<"Maths: "<<maths<<endl
                <<"Physics: "<<physics<<endl;
        }
};

class Sports : virtual public Student
{
    protected:
        float score ;
    public :
        void set_score(float sc){
            score = sc;
        }
        void print_score(void){
            cout<<"Your PT score is "<<score<<endl;
        }
};

class Result : public Test, public Sports
{
    private:
        float total ;
    public:
        void display(void){
            total = maths + physics + score ;
            print_number();   
            print_marks();
            print_score();
            cout<<"Your total score is: "<<total<<endl;
        }
};

int main()
{

    Result sid;
    sid.set_number(11);   // This will directly take from Student class ig
    sid.set_marks(78, 95);
    sid.set_score(9);
    sid.display();


    return 0;
}