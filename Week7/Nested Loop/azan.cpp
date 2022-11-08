#include <iostream>
using namespace std;

int c()
{
    int arr[5] = {3, 5, 67, 98, 100};
    for (int i = 0; i < 5; i++)
    {
        // for (int j = 0; j < 5; j++)
        // {
        //     if (j == i)
        //         continue;
        //     else
        //     {
        for (int k = 0; k < 4; k++)
        {
            if (k == i)
                continue;
            // if (k == i + 1)
            //     continue;
            if (arr[k] > arr[k + i])
                return 0;
        }
        // }
    }
    return 1;
}

//}
int main()
{
    cout << c() << endl;
}