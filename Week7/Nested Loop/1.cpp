#include <iostream>
using namespace std;

main()
{
    int n;
    system("cls");
    cout << "Enter no. of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    for (int i = 1; i <= n - 1; i++)
    {
        cout << " ";

        for (int k = 1; k <= i; k++)
        {
            cout << " ";
        }
        for (int j = i; j <= n - 1; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}