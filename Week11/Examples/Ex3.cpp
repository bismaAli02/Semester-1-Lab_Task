#include <iostream>
#include <fstream>
using namespace std;
void AddCh(char ch)
{
    fstream File;
    File.open("Character.txt", ios::out);
    File << ch;
    File.close();
}
main()
{
    char ch;
    cout << "Enter any character: ";
    cin >> ch;
    AddCh(ch);
}