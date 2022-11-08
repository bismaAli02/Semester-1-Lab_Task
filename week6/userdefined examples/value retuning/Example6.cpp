#include <iostream>
using namespace std;
int add(int n1, int n2)
{
    int sum = n1 + n2;
    return sum;
}
int main()
{
    int num1, num2, sum;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter Second number: ";
    cin >> num2;
    sum = add(num1, num2);
    cout << "Sum of two numbers is " << sum;
    return 0;
}