#include <iostream>
using namespace std;
int main()
{
    string pass;
    int weight, tax, more;

    cout << "Enter on what class the passenger is travelling: ";
    cin >> pass;
    cout << "What is the weight of the luggage: ";
    cin >> weight;
    if (pass == "Business" || pass == "business")
    {
        if (weight <= 40)
        {
            tax = 15000;
        }
        if (weight > 40)
        {
            more = weight - 40;
            tax = 15000 + (more * 1000);
        }
    }

    if (pass == "Economy" || pass == "economy")
    {
        if (weight <= 25)
        {
            tax = 8000;
        }
        if (weight > 25)
        {
            more = weight - 25;
            tax = 8000 + (more * 500);
        }
    }
    cout << "The tax imposed on passenger is: " << tax;

    return 0;
}