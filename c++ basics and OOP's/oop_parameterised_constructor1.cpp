#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int);     //delcaration of parameterised constructor.
                           //It is called as parameterised constuctor as it takes parameters.
    void printnumber()
    {
        cout << "the number is " << a << "+" << b << "i" << endl;
    }
};
complex::complex(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    complex a(2, 3); //Implicit call
    a.printnumber();

    complex b = complex(4, 5); //Explicit  call
    b.printnumber();
    return 0;
}