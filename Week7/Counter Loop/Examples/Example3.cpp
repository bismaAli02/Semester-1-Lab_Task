#include <iostream>
using namespace std;
void fibonacci(int n)
{
    int num1 = 0, num2 = 1, num3;
    cout << num1 << "\n";
    cout << num2 << "\n";
    for (int i = 1; i < n - 1; i++)
    {
        num3 = num1 + num2;
        cout << num3 << "\n";
        num1 = num2;
        num2 = num3;
    }
}
main()
{
    int n;
    cout << "Enter the length of fibonacci series you want: ";
    cin >> n;
    fibonacci(n);
}