#include <iostream>
using namespace std;
void frequency(int n, int m)
{
    int num;
    int count = 0;
    for (int i = n; i > 0; i = i / 10)
    {

        num = i % 10;
        if (num == m)
        {
            count = count + 1;
        }
        else
        {
            count = count + 0;
        }
    }
    cout << count;
}

main()
{
    cout << "Enter any number: ";
    int num;
    cin >> num;
    cout << "Enter the digit whose you want to find frequency: ";
    int num2;
    cin >> num2;
    frequency(num, num2);
}