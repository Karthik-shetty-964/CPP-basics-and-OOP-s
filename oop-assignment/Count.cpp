//SURAJ SHETTY
// 4MT19IS053

#include<iostream>
using namespace std;                                                                                                                
int count=0;
class Count{
    public:
        Count(){
            count++;
        }
};

int main(){
    Count o1,o2,o3,o4,o5;
    cout<<"Total number of objects created: "<<count<<endl;
    return 0;
}