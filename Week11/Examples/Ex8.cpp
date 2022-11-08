#include <iostream>
#include <fstream>
using namespace std;
float num;
void ReadFloat()
{
    fstream File;
    File.open("float.txt", ios::in);
    File >> num;
    File.close();
}
main()
{
    ReadFloat();
    cout << num;
}