#include <iostream>
using namespace std;

main()
{
    char arr[] = "Hello";
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }

    while (count >= 0)
    {
        cout << arr[count];
        count--;
    }
}