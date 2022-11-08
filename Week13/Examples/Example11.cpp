#include <iostream>
#include <fstream>
using namespace std;
double Avg(int arr[], int size)
{
    double sum = 0;
    double avg;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    avg = sum / size;
    return avg;
}
main()
{
    int arr[5] = {1, 2, 4, 5, 6};
    double avg = Avg(arr, 4);
    cout << avg;
}