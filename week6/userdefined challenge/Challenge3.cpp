#include <iostream>
using namespace std;
void calculate(float n1, char op, float n2)
{
    float result;
    if (op == '+')
    {
        result = n1 + n2;
    }
    else if (op == '-')
    {
        result = n1 - n2;
    }
    else if (op == '*')
    {
        result = n1 * n2;
    }
    else
    {
        result = n1 / n2;
    }
    cout << "The result is " << result;
}
int main()
{
    float num1, num2;
    char oper;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter the function you want to perform: ";
    cin >> oper;
    cout << "Enter second number: ";
    cin >> num2;
    calculate(num1, oper, num2);

    return 0;
}