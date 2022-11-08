#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n3;

    cout << "Enter First number: ";
    cin >> n1;
    cout << "Enter Second number: ";
    cin >> n2;
    cout << "Enter Third number: ";
    cin >> n3;
    if (n1 == n2 && n2 == 3)
    {
        cout << "3 numbers are same";
    }
    else if (n1 == n2 || n1 == n3 || n2 == n3)
    {
        cout << "2 numbers are same";
    }
    else
    {
        cout << "0 numbers are same";
    }

    return 0;
}