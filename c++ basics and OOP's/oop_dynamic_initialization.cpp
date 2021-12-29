#include<iostream>
using namespace std;

class Bankdeposit{
     int principle;
     int year;
     float interestRate;
     float returnValue;
    public:
       Bankdeposit(){}          //when we create objects,we should initially create an empty constructor.
       Bankdeposit(int p,int y,float r){
           principle=p;
           year=y;
           interestRate=r;
           returnValue=principle;
           for (int i = 0; i < year; i++)
           {
               returnValue*=(1+interestRate);
           }
       }
       Bankdeposit(int p,int y,int R){
           principle=p;
           year=y;
           interestRate=(float)R/100;
           returnValue=principle;
           for (int i = 0; i < year; i++)
           {
               returnValue*=(1+interestRate);
           }
       }
       void show();
};
void Bankdeposit::show(){
    cout<<"Your principle amount was "<<principle<<"After "<<year<<"years,The amount is "<<returnValue<<endl;
}
int main(){
    Bankdeposit bd1,bd2,bd3;
    int p,y;
    float r;
    int R;
     cout<<"Enter the values for p,y and r"<<endl;
     cin>>p>>y>>r;
     bd1=Bankdeposit(p,y,r);
      bd1.show();

     cout<<"Enter the values for p,y and R"<<endl;
     cin>>p>>y>>R;
     bd2=Bankdeposit(p,y,R);
     bd2.show();

    return 0;
}