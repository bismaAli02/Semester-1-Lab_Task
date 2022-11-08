#include <iostream>
using namespace std;

main()
{
    string arr;
    cin >> arr;
    char alphabet[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'a'};
    for (int i = 0; arr[i] != '\0'; i++)
    {
        for (int j = 0; j <= 27; j++)
        {
            if (arr[i] == alphabet[j])
            {
                arr[i] = alphabet[j + 1];
                break;
            }
        }
    }
    for (int i = 0; arr[i] != '\0'; i++)
    {
        cout << arr[i];
    }
}