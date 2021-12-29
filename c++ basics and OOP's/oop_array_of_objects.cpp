#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;

public:
    void setID()
    {
         cout<<"enter the id"<<endl;
          cin>>id;
    }
    void getID(){
        salary=1000000;
        cout<<"the id of the employee is "<<id<<" and his salary is"<<salary<<endl;
    }
};
int main()
{
    // employee karthik;
    // karthik.setID();
    // karthik.getID();
     employee fb[5];                             //array of the objects
     for(int i=0;i<5;i++){
         fb[i].setID();
         fb[i].getID();
     }
    return 0;
}