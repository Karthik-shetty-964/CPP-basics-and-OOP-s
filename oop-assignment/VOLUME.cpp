//SURAJ SHETTY
// 4MT19IS053

#include <iostream>
using namespace std;
int volume(int a)
{

    return (a * a * a);
}
float volume(int r, int h)
{
    return (3.14 * r * r * h);
}
int volume(int l, int b, int h)
{
    return (l * b * h);
}

int main()
{
    cout << "The volume of the cube: " << volume(10) << endl;
    cout << "The volume of the cylinder: " << volume(8, 12) << endl;
    cout << "The volume of the rectangular box: " << volume(7, 3, 2) << endl;

    return 0;
}