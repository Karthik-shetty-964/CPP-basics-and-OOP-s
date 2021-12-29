#include<iostream>
using namespace std;                                                          //Karthik shetty
                                                                              //4MT19IS022
class Sum{

      int a,b;
    public:
        friend int addTwoNumbers(Sum n1,Sum n2);

        void setNumber(int p,int q){
            a=p;
            b=q;
        }
     
};
int addTwoNumbers(Sum n1,Sum n2){
    return (n1.a+n2.a)+(n1.b+n2.b);
}

int main(){
    Sum o1,o2;
    o1.setNumber(2,5);
    o2.setNumber(3,6);
    
   int sum=addTwoNumbers(o1,o2);
    cout<<"The Sum is: "<<sum<<endl;
    return 0;
}