#include <iostream>
using namespace std;

main()
{
    string arr;
    cin >> arr;
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == 'a' || arr[i] == 'A' || arr[i] == 'e' || arr[i] == 'E' || arr[i] == 'i' || arr[i] == 'I' || arr[i] == 'o' || arr[i] == 'O' || arr[i] == 'u' || arr[i] == 'U')
        {
            count++;
        }
    }
    cout << "No. of vowels: " << count;
}