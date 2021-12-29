#include<iostream>
using namespace std;

class binary{
      string s;
     void check_binary();   
    public:
      void read();
      //void check_binary();
      void ones_compliment();
      void display();
};
void binary::read()
{
    cout<<"enter the binary number"<<endl;
    cin>>s;
}
void binary::check_binary()
{
    for(int i=0;i<s.length();i++){             //s.at(i)
        if(s[i]!='0'&&s[i]!='1'){              //we can use if(s.at(i)!='0'&&s.at(i)!='1') also
          cout<<"invalid binary number"<<endl;
          exit(0);
        }
    }
}
void binary::ones_compliment(){
check_binary();                            //using one function inside another is called nesting member function
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)='1';        
        }else{
            s.at(i)='0';
        }
    }
}
void binary::display(){
    for (int i = 0; i <s.length(); i++)
    {
        cout<<s[i];  
    }
    cout<<endl;
}
int main(){
    binary b;
    b.read();
    //b.check_binary();
    b.ones_compliment();       // we cannot call functions like this if they where declared inside private
    b.display();
    return 0;
}