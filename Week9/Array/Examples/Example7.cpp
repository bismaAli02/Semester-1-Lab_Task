#include <iostream>
using namespace std;
int arr[10];
int scalar;
void Scalar()
{
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " * " << scalar << " is ";
    }
}
main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter value " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Enter the scalar value: ";
    cin >> scalar;
    Scalar();
}