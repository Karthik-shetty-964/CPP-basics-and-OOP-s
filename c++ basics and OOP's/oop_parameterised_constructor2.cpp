//  Create a function (Hint: Make it a friend function) which takes 2 point objects and computes the distance between those 2 points.
// Use these examples to check your code:
// Distance between (1, 1) and (1, 1) is 0
// Distance between (0, 1) and (0, 6) is 5
#include<iostream>
#include<cmath>
using namespace std;

class point{                                       
    int x,y;
    friend double distance(point ,point);
    public:
        point(int a,int b){
           x=a;
           y=b;
        }
        void print(){
          cout<<"The point is ("<<x<<","<<y<<")"<<endl;
        }
};
double distance(point a,point b){
    return sqrt(pow((b.x-a.x),2)+pow((b.y-a.y),2));
}
int main(){
    point a(1,2);
    a.print();
    point b(70,3);
    b.print();

    double res=distance(a,b);
    cout<<"the distance between two points is "<<res<<endl;
    return 0;
}