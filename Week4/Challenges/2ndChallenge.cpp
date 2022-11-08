#include <iostream>
using namespace std;
main()
{
    int salary, laptop, advance, month, mon_adv, total_adv, req_mon, left, left_mon_sal;

    cout << "how much is your monthly income: ";
    cin >> salary;
    cout << "Whats the price of your laptop: ";
    cin >> laptop;
    cout << "how much salary percent do you want to take in advance per month: ";
    cin >> advance;
    cout << "And for how many months: ";
    cin >> month;
    mon_adv = salary * advance / 100;
    total_adv = mon_adv * month;
    if (total_adv == laptop)
    {
        cout << "Yes! you can buy laptop";
    }
    else
    {
        left = laptop - total_adv;
        left_mon_sal = salary - mon_adv;
        req_mon = left / left_mon_sal;
        cout << "It will require " << req_mon << " months to get enough money to buy a laptop";
    }
}