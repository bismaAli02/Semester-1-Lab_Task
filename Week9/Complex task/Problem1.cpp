#include <iostream>
using namespace std;

main()
{
    int arr[9];
    cout << "Enter 9 numbers between 1 and 10: " << endl;
    for (int i = 0; i < 9; i++)
    {
        cout << "Enter value " << i + 1 << ": ";
        cin >> arr[i];
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            // If there is a smaller element found on right of the array then swap it.
            if (arr[j] < arr[i])
            {
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 1; i <= 10; i++)
    {
        if (i != arr[i - 1])
        {
            cout << i;
            break;
        }
    }
}