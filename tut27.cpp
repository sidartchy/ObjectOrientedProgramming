// Revisiting Pointers   -- new and delete operators
#include<iostream>
using namespace std;



int main(){
    
    int* p = new int(40);   // new keyword
    cout<<"The value at p is "<<*(p)<<endl;
    
    int *arr = new int[3];
    arr[0] = 10 ;
    *(arr+1) = 20 ;   // same as arr[1]
    arr[2] = 30 ;
   // delete[] arr ;
    cout<<"The value at arr[0] is "<<arr[0]<<endl;
    cout<<"The value at arr[1] is "<<arr[1]<<endl;
    cout<<"The value at arr[2] is "<<arr[2]<<endl;



    return 0 ; 
}