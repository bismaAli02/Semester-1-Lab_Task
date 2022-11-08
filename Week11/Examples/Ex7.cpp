#include <iostream>
#include <fstream>
using namespace std;
int num;
void ReadNum()
{
    fstream File;
    File.open("Integer.txt", ios::in);
    File >> num;
    File.close();
}
main()
{
    ReadNum();
    cout << num;
}