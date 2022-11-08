#include <iostream>
using namespace std;

main()
{
    int n = 100;
    int arr[n];
    cout << "Enter the length of array: ";
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value " << i + 1 << ": ";
        cin >> arr[i];
    }
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                count++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\n";
    }
    cout << "No. of swaps are: " << count;
}