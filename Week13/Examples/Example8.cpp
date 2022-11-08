#include <iostream>
#include <fstream>
using namespace std;
void swap(int *n1, int *n2)
{
    swap(*n1, *n2);
}
main()
{
    int n1 = 100, n2 = 90;
    swap(&n1, &n2);
    cout << "N1 value is: " << n1 << endl;
    cout << "N2 value is: " << n2 << endl;
}