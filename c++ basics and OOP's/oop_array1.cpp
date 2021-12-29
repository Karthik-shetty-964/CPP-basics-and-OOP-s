#include<iostream>
using namespace std; 

class shop{
      int itemID[100];
      int itemprice[100];
    
    public:
       int counter=0;
       void setprice();
       void displayprice();

};
void shop::setprice(){
    cout<<"enter the itemID"<<endl;
    cin>>itemID[counter];
    cout<<"enter the price of the object "<<endl;
    cin>>itemprice[counter];
    counter++;
}
void shop::displayprice(){
    for(int i=0;i<counter;i++){
        cout<<"the price of item of itemId "<<itemID[i]<<" is "<<itemprice[i]<<endl;
    }
}

int main(){
    shop shivam;
    shivam.setprice();
    shivam.displayprice();

    return 0;
}