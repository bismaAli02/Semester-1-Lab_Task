#include <iostream>
using namespace std;

main()
{
    int n = 100;
    cout << "Enter how much values you want to add: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value " << i + 1 << ": ";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << "value " << i + 1 << " of array is: " << arr[i] << endl;
    }
}