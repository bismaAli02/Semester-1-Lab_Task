#include <iostream>
#include <fstream>
using namespace std;
char ch;
void ReadCh()
{
    fstream File;
    File.open("Character.txt", ios::in);
    File >> ch;
    File.close();
}
main()
{
    ReadCh();
    cout << ch;
}