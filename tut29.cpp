// Array of Objects Using pointers.
#include<iostream>
using namespace std;

class Shop{
    int id ;
    float price ;

    public:
        void setData( int a, float b){
            id = a;
            price = b;
        }

        void getData(){
            cout<<"Code of this item is "<<id<<endl;
            cout<<"Price of this item is "<<price<<endl;
        }
};

int main(){
    int size = 3; 
    Shop *ptr = new Shop[size];  // a pointer that points to the first member of Shop array.
   // Shop *ptrTemp =ptr ;
    int p ;  // A variable to store id
    float q;  // A variable to store price

    // A loop to set price and id
    for ( int i = 0 ; i<size ; i++){
        cout<<"Id and price of tem "<<i+1<<endl;
        cin>>p>>q;
        //ptr->setData(p, q);
        (ptr+i)->setData(p, q);
      //  ptr++;
    }
    // Another loop to display the price and id
    for ( int i = 0 ; i < size ; i++){
        cout<<"Item number: "<<i+1<<endl;
        //ptrTemp->getData();
        (ptr+i)->getData();
        //ptrTemp++;
    }
    return 0 ; 
}