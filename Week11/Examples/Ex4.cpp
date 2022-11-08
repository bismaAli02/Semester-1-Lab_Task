#include <iostream>
#include <fstream>
using namespace std;
void AddFloat(float num)
{
    fstream File;
    File.open("float.txt", ios::out);
    File << num;
    File.close();
}
main()
{
    float num;
    cout << "Enter any number: ";
    cin >> num;
    AddFloat(num);
}