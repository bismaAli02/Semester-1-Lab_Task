#include <iostream>
#include <fstream>
using namespace std;
void Display(int *p)
{
    cout << *p;
}
main()
{
    int num;

    cin >> num;
    Display(&num);
}