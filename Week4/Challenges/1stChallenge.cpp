#include <iostream>
using namespace std;
main()
{
    int amount, pay, discount;
    cout << "Enter the cost of total: ";
    cin >> amount;
    if (amount <= 5000)
    {
        discount = 5;
        cout << "You got a " << discount << "%"
             << " discount on total amount" << endl;
        discount = discount * amount / 100;
        pay = amount - discount;
        cout << "You have to pay " << pay << "Rs";
    }
    if (amount > 5000)
    {
        discount = 10;
        cout << "You got a " << discount << "%"
             << " discount on total amount" << endl;
        discount = discount * amount / 100;
        pay = amount - discount;
        cout << "You have to pay " << pay << "Rs";
    }
}