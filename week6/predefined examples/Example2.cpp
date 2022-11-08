#include <iostream>
#include <cmath>
// Find square of a number by using predefined function
using namespace std;
int main()
{
    double num, square;
    cout << "Enter any number you want to find square: ";
    cin >> num;
    square = pow(num, 2); // function to find square
    cout << "Square is " << square;

    return 0;
}