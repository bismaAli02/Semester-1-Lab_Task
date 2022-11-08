#include <iostream>
using namespace std;

main()
{
    int n = 100;
    int arr[n];
    cout << "Enter the length of array: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value " << i + 1 << ": ";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    int nth;
    cout << "Enter which smallest value you want to find: ";
    cin >> nth;
    cout << arr[nth - 1];
}