// MultiLevel Inheritance

#include <iostream>
using namespace std;

class Student // Base class
{
protected:
    int roll_number;

public:
    void set_rollNumber(int);
    void get_getNumber(void);
};

void Student ::set_rollNumber(int r)
{
    roll_number = r;
}

void Student ::get_getNumber()
{
    cout << "The roll number is " << roll_number << endl;
}
// A derived class
class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void setMarks(float, float);
    void getMarks(void);
};

void Exam ::setMarks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Exam ::getMarks()
{
    cout << "The marks obtained in maths are: " << maths << endl;
    cout << "The marks obtained in physics are: " << physics << endl;
}

// Inherited from a derived class   --> Multilevel inheritance
class Result : public Exam
{
    float percentage;

public:
    void display()
    {
        get_getNumber();
        getMarks();
        cout << "Your percentage is " << (maths + physics) / 2 << endl;
    }
};

int main()
{
    Result sid;
    sid.set_rollNumber(11);
    sid.setMarks(90, 90.5);
    sid.display();

    return 0;
}

/*
  If we are inheriting B form A , and C form B : [ A-->B-->C ]
1. A is the base class for B and B is the base class for C
2. A->B->C is called Inheritance path.
*/