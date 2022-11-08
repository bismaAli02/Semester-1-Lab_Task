#include <iostream>
#include <fstream>
using namespace std;
void AppendData(string line)
{
    fstream File;
    File.open("Append.txt", ios::app);
    File << "\n";
    File << line;
    File.close();
}
main()
{

    string line;
    cout << "Enter a line: ";
    getline(cin, line);
    AppendData(line);
}