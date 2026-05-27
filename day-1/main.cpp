#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    cout << "Even or Odd number" << endl;
    
    if (a % 2 == 0)
    {
        cout << a << " " << "Even\n";
    }
    else
    {
        cout << a << " " << "Odd\n";
    }

    cout << "positive or negative number" << endl;

    int arr[10] = {1, 2, 3, 4, -5, -6, 7, 8, 9, 0};

    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 0)
        {
            cout << arr[i] << " " << "positive\n";
        }
        else
        {
            cout << arr[i] << " " << "negative\n";
        }
    }
    return 0;
}