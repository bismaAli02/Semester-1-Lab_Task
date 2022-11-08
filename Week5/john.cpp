#include <iostream>
using namespace std;
int main()
{
    string city, product;
    int quantity;
    float price;
    cout << "Enter the name of city: ";
    cin >> city;
    cout << "Enter the product: ";
    cin >> product;
    cout << "Enter the quantity: ";
    cin >> quantity;

    if (city == "Chicago" || city == "chicago")
    {
        if (product == "Coffee" || product == "coffee")
        {
            price = 0.50;
        }
        else if (product == "Sweets" || product == "sweets")
        {
            price = 1.45;
        }
        else
        {
            price = 0.80;
        }
    } // this ends the if condition for chicago city
    else if (city == "Phoenix" || city == "phoenix")
    {
        if (product == "Coffee" || product == "coffee")
        {
            price = 0.40;
        }
        else if (product == "Sweets" || product == "sweets")
        {
            price = 1.30;
        }
        else
        {
            price = 0.70;
        }
    } // this ends the if condition for phoenix city
    else
    {
        if (product == "Coffee" || product == "coffee")
        {
            price = 0.45;
        }
        else if (product == "Sweets" || product == "sweets")
        {
            price = 1.35;
        }
        else
        {
            price = 0.70;
        }
    } // this ends the if condition for houston city
    price = price * quantity;
    cout << "Total amount to be paid is: ";
    cout << price; // this is the total amount to be paid

    return 0;
}