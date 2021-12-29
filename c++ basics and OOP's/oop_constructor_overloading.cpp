
/* Constuctor overloading is nothing but using multiple constructors under same name.
* The control will work based on the number of arguements*/
#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
        complex(int x,int y){
            a=x;                                   
            b=y;
        }
        complex(int x){
            a=x;
            b=0;
        }
        complex(){
           a=0;
           b=0;
        }
        void print(){
            cout<<"The number is "<<a<<"+"<<b<<"i"<<endl;
        }
};

int main(){
    complex a(1,2);
    a.print();
    
    complex b(2);
    b.print();

    complex c;
    c.print();
    return 0;
}