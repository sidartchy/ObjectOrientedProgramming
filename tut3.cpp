//Memory Allocation in C++

#include<iostream>
using namespace std;

class Shop{
    int itemID[100];           // private data members
    int itemPrice[100];
    int counter; 
       
    public:

    void initCounter(){
        counter = 0 ;    // initialising counter with 0 
    }
    void setPrice() ;     // prototype
    void displayPrice();  // prototype
};

void Shop::setPrice ()
{

    cout<<"Enter the id and price of item no "<<counter + 1<<endl;
    cin>>itemID[counter]>>itemPrice[counter];
    counter++;
   
}
void Shop :: displayPrice()
{
    for( int i = 0 ; i< counter; i++)
    {
        cout<<"The price of itemID "<<itemID[i]<<" is "<<itemPrice[i]<<endl;
    }
}

int main(){
    
    Shop sid_kirana;
    sid_kirana.initCounter();
    sid_kirana.setPrice();
    sid_kirana.setPrice();
    sid_kirana.setPrice();
    sid_kirana.displayPrice();
    return 0 ; 
}