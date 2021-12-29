#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
        
    /*Creating a Constructor:
    ***************************
    *Constructor is a special member function with the same name as of the class.
    *It is used to initialize the objects of its class.
    *It is automatically invoked whenever an object is created.    */


        complex(void);    //constructor declaration
        void printnumber(){
            cout<<"the complex number is "<<a<<"+"<<b<<"i"<<endl;
        }
};
complex::complex(void){   //It is called default constructor,Since it does not take any arguments
    a=0;             //It doesn't need any call,it automatically gets invoked when the object is created.
    b=0;
}

int main(){
    complex c1,c2;
    c1.printnumber();
    c2.printnumber();
    return 0;
}


/* characters of constructors:
------------------------------
*It should be declared within the public session.
*They are automatically invoked whenever the objetcs are created.
*They can not return values and do not have return types.
*They can have default arguements.
*we cannot refer to their address.  */