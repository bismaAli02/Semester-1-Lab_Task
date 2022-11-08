#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
struct LaptopType
{
    string Maunfacturer;
    string Model;
    float Processor;
    int ram;
    int HDD;
    int gen;
    double price;
    LaptopType *next;
};
LaptopType *head = NULL;
void Input();
LaptopType *LastRecord(LaptopType *L);
void Print(LaptopType *L);
void GetRecord();
void Search();
char Menu();
main()
{
    while (true)
    {
        char option;
        option = Menu();
        system("cls");
        if (option == '1')
        {
            Input();
        }
        if (option == '2')
        {
            GetRecord();
        }
        if (option == '3')
        {
            Search();
        }
        if (option == '4')
        {
            break;
        }
        getch();
    }
}
char Menu()
{
    system("cls");
    cout << "Press1 to add record" << endl;
    cout << "Press2 to view all record" << endl;
    cout << "Press3 to Search a specific Record" << endl;
    cout << "Press4 to exit" << endl;
    char op;
    cin >> op;
    return op;
}
void Input()
{
    LaptopType *laptop = new LaptopType;
    cout << "Enter the name of Manufacturer: ";
    cin >> laptop->Maunfacturer;
    cout << "Enter the model of laptop: ";
    cin >> laptop->Model;
    cout << "Enter the processor: ";
    cin >> laptop->Processor;
    cout << "Enter RAM in GB: ";
    cin >> laptop->ram;
    cout << "Enter harddrive in GB: ";
    cin >> laptop->HDD;
    cout << "Enter Generation: ";
    cin >> laptop->gen;
    cout << "Enter the price of laptop: ";
    cin >> laptop->price;
    laptop->next = NULL;
    if (head == NULL)
    {
        head = laptop;
    }
    else
    {
        LaptopType *L = LastRecord(head);
        L->next = laptop;
    }
}
LaptopType *LastRecord(LaptopType *L)
{
    while (L->next != NULL)
    {
        L = L->next;
    }
    return L;
}
void GetRecord()
{
    LaptopType *L = head;
    while (L != NULL)
    {
        Print(L);
        L = L->next;
    }
}
void Print(LaptopType *L)
{
    cout << "Manufacturer: ";
    cout << L->Maunfacturer << endl;
    cout << "Model: ";
    cout << L->Model << endl;
    cout << "Processor: ";
    cout << L->Processor << endl;
    cout << "RAM: ";
    cout << L->ram << endl;
    cout << "HardDrive: ";
    cout << L->HDD << endl;
    cout << "Generation: ";
    cout << L->gen << endl;
    cout << "Price: ";
    cout << L->price << endl;
}
void Search()
{
    string mod;
    cout << "Enter the model you want to search: ";
    cin >> mod;
    LaptopType *L = head;
    bool found = false;
    while (L != NULL)
    {
        if (L->Model == mod)
        {
            cout << "Record Found\n";
            Print(L);
            found = 1;
            break;
        }

        L = L->next;
    }
    if (!found)
    {
        cout << "Record Not Found\n";
    }
}
