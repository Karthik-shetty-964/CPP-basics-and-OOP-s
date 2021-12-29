#include<iostream>
using namespace std;

class Y;

class X{
    int num1;
           friend void swap(X &,Y &);
    public:
       void setnum1(int value){
           num1=value;
       }
};
class Y{
    int num2;
       friend void swap(X &,Y &);
    public:
      void setnum2(int value){
          num2=value;
      }
};
void swap(X &c1,Y &c2){
    cout<<"the values before swaping "<<c1.num1<<" and "<<c2.num2<<endl;
    int temp=c1.num1;
    c1.num1=c2.num2;
    c2.num2=temp;
    cout<<"the values after swaping "<<c1.num1<<" and "<<c2.num2<<endl; 
}
int main(){
    X c1;
    c1.setnum1(10);
    Y c2;
     c2.setnum2(20);
     swap(c1,c2);
    return 0;
}