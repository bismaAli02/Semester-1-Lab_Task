#include <iostream>
#include <fstream>
using namespace std;
string name;
int Roll_no;
float CGPA;
string Grade;
void takeInput()
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter Roll.no: ";
    cin >> Roll_no;
    cout << "Enter CGPA: ";
    cin >> CGPA;
    cout << "Enter Grade: ";
    cin >> Grade;
}
void StoreData()
{
    fstream File;
    File.open("result_card.txt", ios::out);
    File << Roll_no << "\t";
    File << name << "\t";
    File << CGPA << "\t";
    File << Grade << "\t";
    File << "\n";
    File.close();
}
main()
{
    takeInput();
    StoreData();
}