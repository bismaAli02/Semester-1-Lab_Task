#include <iostream>
using namespace std;
int arr[10];
int found = 0;
void find(int F)
{
    for (int i = 0; i < 10; i++)
    {
        if (F == arr[i])
        {
            found = 1;
            break;
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
    cout << "Enter the value you want to find: ";
    int f;
    cin >> f;
    find(f);
    if (found == 1)
    {
        cout << f << " value found in array";
    }
    else
    {
        cout << f << "value not found in array";
    }
}