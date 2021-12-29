#include<iostream>
using namespace std;

class Number{
    int a;
    public:
       Number(){
          a=0;
       }
       Number(Number &g){
           cout<<"The copy constructor called!!!"<<endl;      //if we dont use this constructor,the compiler will process the copy fumction on its own.
           a=g.a;
       }
       Number(int num){
          a=num;
       }
       void display(){
           cout<<"The number is "<<a<<endl;
       }
};
int main(){
    Number x,y,z(45);
    x.display();
    y.display();
    z.display();
    Number z1(z);
    z1.display();                                             //z1 sholud exactly resemble z or x or y
    return 0;
}