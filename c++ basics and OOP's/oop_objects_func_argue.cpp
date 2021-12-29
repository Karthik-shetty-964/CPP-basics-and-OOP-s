#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setdatabysum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void getdata()
    {
        cout << "the value of complex number is " << a << "+" << b << "i" << endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setdata(1, 2);
    c1.getdata();

    c2.setdata(3, 4);
    c2.getdata();

    c3.setdatabysum(c1, c2); //passing objetcs as function arguements
    c3.getdata();

    return 0;
}