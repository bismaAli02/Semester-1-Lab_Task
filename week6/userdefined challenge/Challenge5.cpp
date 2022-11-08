#include <iostream>
using namespace std;
void max(int n1, int n2, int n3, int n4)
{
    if (n1 > n2 && n1 > n3 && n1 > n4)
    {
        cout << "Maximum number is " << n1;
    }
    else if (n2 > n1 && n2 > n3 && n2 > n4)
    {
        cout << "Maximum number is " << n2;
    }
    else if (n3 > n1 && n3 > n2 && n3 > n4)
    {
        cout << "Maximum number is " << n3;
    }
    else
    {
        cout << "Maximum number is " << n4 << endl;
    }
}
void min(int n1, int n2, int n3, int n4)
{
    if (n1 < n2 && n1 < n3 && n1 < n4)
    {
        cout << "Minimum number is " << n1;
    }
    else if (n2 < n1 && n2 < n3 && n2 < n4)
    {
        cout << "Minimum number is " << n2;
    }
    else if (n3 < n1 && n3 < n2 && n3 < n4)
    {
        cout << "Minimum number is " << n3;
    }
    else
    {
        cout << "Minimum number is " << n4 << endl;
    }
}
int main()
{
    int num1, num2, num3, num4;
    cout << "Enter 1st number: ";
    cin >> num1;
    cout << "Enter 2nd number: ";
    cin >> num2;
    cout << "Enter 3rd number: ";
    cin >> num3;
    cout << "Enter 4th number: ";
    cin >> num4;
    max(num1, num2, num3, num4);
    min(num1, num2, num3, num4);

    return 0;
}