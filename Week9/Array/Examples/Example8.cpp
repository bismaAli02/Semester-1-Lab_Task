#include <iostream>
using namespace std;
int arr[10];
int large;
void larges()
{
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
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
    large = arr[0];
    larges();
    cout << "Largest value of array is: ";
    cout << large;
}