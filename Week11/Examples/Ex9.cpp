#include <iostream>
#include <fstream>
using namespace std;
char ch;
void ReadAllCh()
{
    fstream File;
    File.open("english.txt", ios::in);
    while (!File.eof())
    {
        File >> ch;
        cout << ch;
    }
    File.close();
}
main()
{
    ReadAllCh();
}