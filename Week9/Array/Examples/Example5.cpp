#include <iostream>
using namespace std;

main()
{
    int n = 100;
    cout << "Enter how much values you want to add: ";
    cin >> n;
    float arr[n];
    float sum = 0;
    float avg = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value " << i + 1 << ": ";
        cin >> arr[i];
        sum = sum + arr[i];
    }
    avg = sum / n;
    cout << "Sum is: " << sum << endl;
    cout << "Average is: " << avg << endl;
}