#include <iostream>
#include <fstream>
using namespace std;

void Merge(int arr1[4], int arr2[4], int arr[8])
{
    int x = 0;
    for (int i = 0; i < 4; i++)
    {
        arr[x] = arr1[i];
        x++;
    }
    for (int i = 0; i < 4; i++)
    {
        arr[x] = arr2[i];
        x++;
    }
}
main()
{
    int arr1[4], arr2[4];
    int arr[4 + 4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < 4; i++)
    {
        cin >> arr2[i];
    }
    Merge(arr1, arr2, arr);
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i];
    }
}