#include <iostream>
#include <cmath>
// find
using namespace std;
int main()
{
    double height, base, degree, radian, tangent;
    cout << "Enter the value of base: ";
    cin >> base;
    cout << "Enter value of angle in degrees: ";
    cin >> degree;
    radian = degree * (57.2958);
    tangent = tan(radian);
    height = tangent * base;
    cout << "Height of tree is " << height;

    return 0;
}