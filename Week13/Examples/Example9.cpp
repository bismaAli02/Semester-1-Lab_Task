#include <iostream>
#include <fstream>
using namespace std;
void AddOne(int *num)
{
    (*num)++;
}
main()
{
    int num = 100;
    AddOne(&num);
    cout << "N1 value is: " << num << endl;
}