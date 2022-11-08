#include <iostream>
#include <fstream>
using namespace std;
bool checkSparse(int arr[3][3])
{
    int count = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == 0)
            {
                count++;
            }
        }
    }
    if (count >= (3 * 3) / 2)
    {
        return true;
    }
    return false;
}
main()
{
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter value: ";
            cin >> arr[i][j];
        }
    }
    cout << checkSparse(arr);
}