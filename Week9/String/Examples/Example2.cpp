#include <iostream>
using namespace std;

main()
{
    char arr[] = "Pakistan";
    for (int i = 0; arr[i] != '\0'; i++)
    {
        cout << "At " << i << " position of array is: " << arr[i] << endl;
    }
}