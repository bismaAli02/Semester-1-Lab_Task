#include <iostream>
using namespace std;
int arr[10];
void Reverse()
{
    for (int i = 10; i > 0; i--)
    {
        cout << arr[i] << "\t";
    }
}
main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter value " << i + 1 << ": ";
        cin >> arr[i];
    }
}