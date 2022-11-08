#include <iostream>
using namespace std;
float taxCalculator(char type, float price, float tax)
{
    float taxAmount = price * tax / 100;
    float final = price + taxAmount;
    return final;
}

int main()
{
    char type;
    float price, tax, final;
    cout << "Enter the type of your vehicle: ";
    cin >> type;
    cout << "Enter the price of your vehicle: ";
    cin >> price;
    if (type == 'M')
    {
        tax = 6;
    }
    else if (type == 'E')
    {
        tax = 8;
    }
    else if (type == 'S')
    {
        tax = 10;
    }
    else if (type == 'V')
    {
        tax = 12;
    }
    else if (type == 'T')
    {
        tax = 15;
    }

    final = taxCalculator(type, price, tax);
    cout << "Your final amount is: " << final;

    return 0;
}