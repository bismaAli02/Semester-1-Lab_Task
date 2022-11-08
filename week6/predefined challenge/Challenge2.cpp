#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x1, x2, plus, minus, squareroot, square, product, divide;
    int a, b, c;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter value of c: ";
    cin >> c;
    b = b * (-1);
    square = pow(b, 2);
    product = 4 * a * c;
    divide = 2 * a;
    squareroot = square - product;
    squareroot = sqrt(squareroot);
    x1 = (b + squareroot) / divide;
    x2 = (b - squareroot) / divide;
    cout << "Value of x is: " << x1 << " and " << x2;
    return 0;
}