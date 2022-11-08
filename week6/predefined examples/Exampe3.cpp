#include <iostream>
#include <cmath>
// find sin of a number by using predefined function
using namespace std;
int main()
{
    double num, result;
    cout << "Enter number to find sin: ";
    cin >> num;
    result = sin(num); // function to find sin
    cout << "Sin is " << result;

    return 0;
}