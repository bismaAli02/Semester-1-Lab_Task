#include <iostream>
#include <fstream>
using namespace std;
void AddName(string name)
{
    fstream File;
    File.open("My.txt", ios::out);
    File << name;
    File.close();
}
main()
{
    string name = "Umair Noor Ahmad";
    AddName(name);
}