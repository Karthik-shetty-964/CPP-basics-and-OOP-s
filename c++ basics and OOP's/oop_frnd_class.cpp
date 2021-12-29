#include <iostream>
using namespace std;

class complex;
class calculator
{
public:
    int sumrealnumber(complex, complex);
    int sumcompnumber(complex, complex);

};
class complex
{
     int a, b;
    friend class calculator; //by this method we can process any data of class complex in class calculator.
                            //  friend int calculator::sumrealnumber(complex,complex);   //this method is to access functions of calculator class one by one
                            //  friend int calculator::sumcompnumber(complex,complex);
public:
    // int a,b;
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "the values of complex number is " << a << "+" << b << "i" << endl;
    }
};
int calculator::sumrealnumber(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator::sumcompnumber(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex c1, c2;
    c1.setNumber(1, 2);
    c1.printNumber();
    c2.setNumber(3, 4);
    c2.printNumber();
    calculator c3;
    int res = c3.sumrealnumber(c1, c2);
    cout << "the sum real part of o1 and o2 is " << res << endl;
    int resc = c3.sumcompnumber(c1, c2);
    cout << "the sum complex part of o1 and o2 is " << resc << endl;

    return 0;
}