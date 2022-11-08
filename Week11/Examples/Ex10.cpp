#include <iostream>
#include <fstream>
using namespace std;
string line;
void readFile()
{
    fstream File;
    File.open("english.txt", ios::in);
    while (!File.eof())
    {
        getline(File, line);
        cout << line << endl;
    }
    File.close();
}
main()
{
    readFile();
}