#include <iostream>
using namespace std;
int main()
{
    string day, month;
    int price;
    float disc, discPrice;
    cout << "What month is this: ";
    cin >> month;
    cout << "What day is today: ";
    cin >> day;
    cout << "What is the total amount: ";
    cin >> price;
    if (month == "October" || month == "March")
    {
        if (day == "Sunday")
        {
            disc = 10.0 * price / 100.0;
            discPrice = price - disc;
            price = discPrice;
        }
    }

    cout << "Amount to be paid: ";
    cout << price;

    return 0;
}