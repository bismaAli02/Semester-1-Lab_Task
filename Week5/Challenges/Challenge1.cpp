#include <iostream>
using namespace std;
int main()
{
    string day;
    int price;
    float disc, discPrice;
    cout << "What day is today: ";
    cin >> day;
    cout << "What is the total amount: ";
    cin >> price;
    if (price >= 5000 && day == "Sunday")
    {
        disc = 10.0 * price / 100.0;
        discPrice = price - disc;
        price = discPrice;
    }
    cout << "Amount to be paid: ";
    cout << price;

    return 0;
}