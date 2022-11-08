#include <iostream>
#include <fstream>
using namespace std;
void square(int *num)
{
    *num = *num * *num;
}
main()
{
    int num = 100;
    square(&num);
    cout << "N1 value is: " << num << endl;
}