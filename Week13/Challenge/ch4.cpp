#include <iostream>
#include <fstream>
using namespace std;
// int arrR[10];
void LeftRotate(int arr[10], int R)
{
    // int x = 0;
    // for (int i = R; i < R; i++)
    // {
    //     arrR[x] = arr[i];
    //     x++;
    //     if (i == 9)
    //     {
    //         i = 0;
    //     }
    // }
    int temp;
    for (int i = 0; i < R; i++)
    {
        temp = arr[0];
        for (int j = 0; j < 10; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[9] = temp;
    }
}
main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter value: ";
        cin >> arr[i];
    }
    int rotate;
    cout << "Enter the size of how much ";
    cin >> rotate;
    LeftRotate(arr, rotate);
    for (int i = 0; i < 10; i++)
    {
        // cout << "Enter value: ";
        cout << arr[i] << endl;
    }
}