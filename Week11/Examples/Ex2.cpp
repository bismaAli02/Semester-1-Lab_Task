#include <iostream>
#include <fstream>
using namespace std;
void AddInteger(int num)
{
    fstream File;
    File.open("Integer.txt", ios::out);
    File << num;
    File.close();
}
main()
{
    int num;
    cout << "Enter any integer: ";
    cin >> num;
    AddInteger(num);
}