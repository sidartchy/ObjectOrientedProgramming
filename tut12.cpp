#include<iostream>
#include<cmath>
using namespace std;

class Point{
    int x ; 
    int y ;
    public:
     Point(int a, int b){
            x = a ; 
            y = b ;

     }

     void displayPoint(){
        cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
     }

    friend float distance( Point p1, Point p2);
     
     
};

float distance( Point p1, Point p2){
    return sqrt( pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2) );
}

int main(){
    Point p(0, 1);
    p.displayPoint();

    Point q(0, 70);
    q.displayPoint();

  
    cout<<"The distance between the points is "<< distance( p, q);;

    return 0 ; 
}