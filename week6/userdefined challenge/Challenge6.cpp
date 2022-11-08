#include <iostream>
using namespace std;
void small()
{
    cout << "You have entered a small case letter";
}
void large()
{
    cout << "You have entered a capital case letter";
}
int main()
{
    char alphabet;
    cout << "Enter any alphabet: ";
    cin >> alphabet;
    if (alphabet == 'a')
    {
        small();
    }
    else if (alphabet == 'A')
    {
        large();
    }

    return 0;
}