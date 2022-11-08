#include <iostream>
#include <cmath>
// Find square root of number with predefined function
using namespace std;
int main()
{
    double num, squareroot;
    cout << "Enter any number you want to find squareroot: ";
    cin >> num;
    squareroot = sqrt(num); // function to find squareroot
    cout << "Squareroot is " << squareroot;

    return 0;
}