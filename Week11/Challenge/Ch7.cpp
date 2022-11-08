#include <iostream>
#include <fstream>
using namespace std;
fstream File;
string name, School, College;
int age;
float Matric, Fsc, Ecat;
void TakeInput()
{
    cout << "Enter Student name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter School name (Without space)";
    cin >> School;
    cout << "Enter Marks obtained in matric: ";
    cin >> Matric;
    cout << "Enter College name (Without spaces)";
    cin >> College;
    cout << "Enter Marks obrained in Fsc: ";
    cin >> Fsc;
    cout << "Enter marks obtained in Ecat: ";
    cin >> Ecat;
}
void StoreData()
{
    File.open("Student.txt", ios::app);
    File << "Name: " << name << endl;
    File << "Age: " << age << endl;
    File << "School: " << School << endl;
    File << "Matric marks: " << Matric << endl;
    File << "College: " << College << endl;
    File << "Fsc Marks: " << Fsc << endl;
    File << "Ecat Marks: " << Ecat << endl;
    File.close();
}
main()
{
    TakeInput();
    StoreData();
}