#include<iostream>
using namespace std;

class complex{
    int a,b,c;
    public:
        complex(int x,int y=6,int z=10){               /*constructors with default arguements are nothing but intializing the values to the variables 
                                                         during declaration of the constructors.*/
            a=x;                                   
            b=y;
            c=z;
        }    
         void print(){                                               
            cout<<"The number is "<<a<<","<<b<<"and"<<c<<endl;
        }
};

int main(){
    complex a(1,2,3);                                                //check out the differences between these operations.
    a.print();
    complex b(1,2);
    b.print();
    complex c(1);
    c.print();
    
    return 0;
}