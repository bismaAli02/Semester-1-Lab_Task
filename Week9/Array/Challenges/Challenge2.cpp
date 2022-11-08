#include <iostream>
using namespace std;
int arr[10];
int small;
void Small()
{
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
    }
}
main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter value " << i + 1 << ": ";
        cin >> arr[i];
    }
    small = arr[0];
    Small();
    cout << "Smallest value of array is: ";
    cout << small;
}