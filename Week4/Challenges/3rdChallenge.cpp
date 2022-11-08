#include <iostream>
using namespace std;
main()
{
    int num1, num2, result;
    string op;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Which operator you want to use: ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;
    if (op == "Add")
    {
        result = num1 - num2;
        cout << "The difference of " << num1 << " and " << num2 << " is " << result;
    }
    if (op == "Subtract")
    {
        result = num1 + num2;
        cout << "The sum of " << num1 << " and " << num2 << " is " << result;
    }
    if (op == "Multiply")
    {
        result = num1 / num2;
        cout << "The division of " << num1 << " and " << num2 << " gives " << result;
    }
    if (op == "Divide")
    {
        result = num1 * num2;
        cout << "The product of " << num1 << " and " << num2 << " gives " << result;
    }
}